PGDMP  
    %        
        |            KP    17.2    17.2 ]    �           0    0    ENCODING    ENCODING        SET client_encoding = 'UTF8';
                           false            �           0    0 
   STDSTRINGS 
   STDSTRINGS     (   SET standard_conforming_strings = 'on';
                           false            �           0    0 
   SEARCHPATH 
   SEARCHPATH     8   SELECT pg_catalog.set_config('search_path', '', false);
                           false            �           1262    17096    KP    DATABASE     p   CREATE DATABASE "KP" WITH TEMPLATE = template0 ENCODING = 'UTF8' LOCALE_PROVIDER = libc LOCALE = 'ru_RU.UTF-8';
    DROP DATABASE "KP";
                     postgres    false                        3079    17215    pgcrypto 	   EXTENSION     <   CREATE EXTENSION IF NOT EXISTS pgcrypto WITH SCHEMA public;
    DROP EXTENSION pgcrypto;
                        false            �           0    0    EXTENSION pgcrypto    COMMENT     <   COMMENT ON EXTENSION pgcrypto IS 'cryptographic functions';
                             false    2                       1255    17252    hash_password()    FUNCTION     �  CREATE FUNCTION public.hash_password() RETURNS trigger
    LANGUAGE plpgsql
    AS $$
BEGIN
    -- Проверяем, что пароль не пустой
    IF NEW.password IS NOT NULL THEN
        -- Хешируем пароль, если он добавлен в чистом виде
        NEW.password := crypt(NEW.password, gen_salt('bf'));
    END IF;
    RETURN NEW;
END;
$$;
 &   DROP FUNCTION public.hash_password();
       public            	   upsfffaaa    false                       1255    17264    log_event()    FUNCTION     �   CREATE FUNCTION public.log_event() RETURNS trigger
    LANGUAGE plpgsql
    AS $$
BEGIN
    INSERT INTO logs (event)
    VALUES (
        format('%s: %s "%s"', TG_TABLE_NAME, TG_OP, row_to_json(NEW))
    );
    RETURN NEW;
END;
$$;
 "   DROP FUNCTION public.log_event();
       public            	   upsfffaaa    false            �            1259    17135    accounts    TABLE     �   CREATE TABLE public.accounts (
    account_id integer NOT NULL,
    user_id integer NOT NULL,
    account_name character varying(100) NOT NULL,
    balance numeric(10,2) DEFAULT 0 NOT NULL
);
    DROP TABLE public.accounts;
       public         heap r    	   upsfffaaa    false            �            1259    17134    accounts_account_id_seq    SEQUENCE     �   CREATE SEQUENCE public.accounts_account_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 .   DROP SEQUENCE public.accounts_account_id_seq;
       public            	   upsfffaaa    false    225            �           0    0    accounts_account_id_seq    SEQUENCE OWNED BY     S   ALTER SEQUENCE public.accounts_account_id_seq OWNED BY public.accounts.account_id;
          public            	   upsfffaaa    false    224            �            1259    17161    budget    TABLE     �   CREATE TABLE public.budget (
    budget_id integer NOT NULL,
    user_id integer NOT NULL,
    month date NOT NULL,
    income numeric(10,2) DEFAULT 0 NOT NULL,
    expenses numeric(10,2) DEFAULT 0 NOT NULL
);
    DROP TABLE public.budget;
       public         heap r    	   upsfffaaa    false            �            1259    17160    budget_budget_id_seq    SEQUENCE     �   CREATE SEQUENCE public.budget_budget_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 +   DROP SEQUENCE public.budget_budget_id_seq;
       public            	   upsfffaaa    false    229            �           0    0    budget_budget_id_seq    SEQUENCE OWNED BY     M   ALTER SEQUENCE public.budget_budget_id_seq OWNED BY public.budget.budget_id;
          public            	   upsfffaaa    false    228            �            1259    17126 
   categories    TABLE     w   CREATE TABLE public.categories (
    category_id integer NOT NULL,
    category_name character varying(50) NOT NULL
);
    DROP TABLE public.categories;
       public         heap r    	   upsfffaaa    false            �            1259    17125    categories_category_id_seq    SEQUENCE     �   CREATE SEQUENCE public.categories_category_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 1   DROP SEQUENCE public.categories_category_id_seq;
       public            	   upsfffaaa    false    223            �           0    0    categories_category_id_seq    SEQUENCE OWNED BY     Y   ALTER SEQUENCE public.categories_category_id_seq OWNED BY public.categories.category_id;
          public            	   upsfffaaa    false    222            �            1259    17148    goals    TABLE       CREATE TABLE public.goals (
    goal_id integer NOT NULL,
    user_id integer NOT NULL,
    goal_name character varying(100) NOT NULL,
    target_amount numeric(10,2) NOT NULL,
    saved_amount numeric(10,2) DEFAULT 0 NOT NULL,
    due_date date NOT NULL
);
    DROP TABLE public.goals;
       public         heap r    	   upsfffaaa    false            �            1259    17147    goals_goal_id_seq    SEQUENCE     �   CREATE SEQUENCE public.goals_goal_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 (   DROP SEQUENCE public.goals_goal_id_seq;
       public            	   upsfffaaa    false    227            �           0    0    goals_goal_id_seq    SEQUENCE OWNED BY     G   ALTER SEQUENCE public.goals_goal_id_seq OWNED BY public.goals.goal_id;
          public            	   upsfffaaa    false    226            �            1259    17255    logs    TABLE     �   CREATE TABLE public.logs (
    log_id integer NOT NULL,
    event text NOT NULL,
    event_date timestamp without time zone DEFAULT CURRENT_TIMESTAMP NOT NULL
);
    DROP TABLE public.logs;
       public         heap r    	   upsfffaaa    false            �            1259    17254    logs_log_id_seq    SEQUENCE     �   CREATE SEQUENCE public.logs_log_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 &   DROP SEQUENCE public.logs_log_id_seq;
       public            	   upsfffaaa    false    235            �           0    0    logs_log_id_seq    SEQUENCE OWNED BY     C   ALTER SEQUENCE public.logs_log_id_seq OWNED BY public.logs.log_id;
          public            	   upsfffaaa    false    234            �            1259    17198    planned_transactions    TABLE     �   CREATE TABLE public.planned_transactions (
    planned_id integer NOT NULL,
    user_id integer NOT NULL,
    category_id integer NOT NULL,
    planned_date date NOT NULL,
    planned_amount numeric(10,2) NOT NULL
);
 (   DROP TABLE public.planned_transactions;
       public         heap r    	   upsfffaaa    false            �            1259    17197 #   planned_transactions_planned_id_seq    SEQUENCE     �   CREATE SEQUENCE public.planned_transactions_planned_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 :   DROP SEQUENCE public.planned_transactions_planned_id_seq;
       public            	   upsfffaaa    false    233            �           0    0 #   planned_transactions_planned_id_seq    SEQUENCE OWNED BY     k   ALTER SEQUENCE public.planned_transactions_planned_id_seq OWNED BY public.planned_transactions.planned_id;
          public            	   upsfffaaa    false    232            �            1259    17175    transactions    TABLE     �  CREATE TABLE public.transactions (
    transaction_id integer NOT NULL,
    user_id integer NOT NULL,
    account_id integer NOT NULL,
    category_id integer NOT NULL,
    transaction_date date NOT NULL,
    amount numeric(10,2) NOT NULL,
    type character varying(10),
    CONSTRAINT transactions_type_check CHECK (((type)::text = ANY ((ARRAY['income'::character varying, 'expense'::character varying])::text[])))
);
     DROP TABLE public.transactions;
       public         heap r    	   upsfffaaa    false            �            1259    17174    transactions_transaction_id_seq    SEQUENCE     �   CREATE SEQUENCE public.transactions_transaction_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 6   DROP SEQUENCE public.transactions_transaction_id_seq;
       public            	   upsfffaaa    false    231            �           0    0    transactions_transaction_id_seq    SEQUENCE OWNED BY     c   ALTER SEQUENCE public.transactions_transaction_id_seq OWNED BY public.transactions.transaction_id;
          public            	   upsfffaaa    false    230            �            1259    17112    user_status    TABLE     t   CREATE TABLE public.user_status (
    status_id integer NOT NULL,
    status_name character varying(50) NOT NULL
);
    DROP TABLE public.user_status;
       public         heap r    	   upsfffaaa    false            �            1259    17111    user_status_status_id_seq    SEQUENCE     �   CREATE SEQUENCE public.user_status_status_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 0   DROP SEQUENCE public.user_status_status_id_seq;
       public            	   upsfffaaa    false    221            �           0    0    user_status_status_id_seq    SEQUENCE OWNED BY     W   ALTER SEQUENCE public.user_status_status_id_seq OWNED BY public.user_status.status_id;
          public            	   upsfffaaa    false    220            �            1259    17098    users    TABLE     �   CREATE TABLE public.users (
    user_id integer NOT NULL,
    username character varying(50) NOT NULL,
    password text NOT NULL,
    email character varying(100) NOT NULL,
    is_superuser boolean DEFAULT false NOT NULL,
    status_id integer
);
    DROP TABLE public.users;
       public         heap r    	   upsfffaaa    false            �            1259    17097    users_user_id_seq    SEQUENCE     �   CREATE SEQUENCE public.users_user_id_seq
    AS integer
    START WITH 1
    INCREMENT BY 1
    NO MINVALUE
    NO MAXVALUE
    CACHE 1;
 (   DROP SEQUENCE public.users_user_id_seq;
       public            	   upsfffaaa    false    219            �           0    0    users_user_id_seq    SEQUENCE OWNED BY     G   ALTER SEQUENCE public.users_user_id_seq OWNED BY public.users.user_id;
          public            	   upsfffaaa    false    218                       2604    17138    accounts account_id    DEFAULT     z   ALTER TABLE ONLY public.accounts ALTER COLUMN account_id SET DEFAULT nextval('public.accounts_account_id_seq'::regclass);
 B   ALTER TABLE public.accounts ALTER COLUMN account_id DROP DEFAULT;
       public            	   upsfffaaa    false    225    224    225                       2604    17164    budget budget_id    DEFAULT     t   ALTER TABLE ONLY public.budget ALTER COLUMN budget_id SET DEFAULT nextval('public.budget_budget_id_seq'::regclass);
 ?   ALTER TABLE public.budget ALTER COLUMN budget_id DROP DEFAULT;
       public            	   upsfffaaa    false    229    228    229                       2604    17129    categories category_id    DEFAULT     �   ALTER TABLE ONLY public.categories ALTER COLUMN category_id SET DEFAULT nextval('public.categories_category_id_seq'::regclass);
 E   ALTER TABLE public.categories ALTER COLUMN category_id DROP DEFAULT;
       public            	   upsfffaaa    false    223    222    223                       2604    17151    goals goal_id    DEFAULT     n   ALTER TABLE ONLY public.goals ALTER COLUMN goal_id SET DEFAULT nextval('public.goals_goal_id_seq'::regclass);
 <   ALTER TABLE public.goals ALTER COLUMN goal_id DROP DEFAULT;
       public            	   upsfffaaa    false    226    227    227                       2604    17258    logs log_id    DEFAULT     j   ALTER TABLE ONLY public.logs ALTER COLUMN log_id SET DEFAULT nextval('public.logs_log_id_seq'::regclass);
 :   ALTER TABLE public.logs ALTER COLUMN log_id DROP DEFAULT;
       public            	   upsfffaaa    false    234    235    235                       2604    17201    planned_transactions planned_id    DEFAULT     �   ALTER TABLE ONLY public.planned_transactions ALTER COLUMN planned_id SET DEFAULT nextval('public.planned_transactions_planned_id_seq'::regclass);
 N   ALTER TABLE public.planned_transactions ALTER COLUMN planned_id DROP DEFAULT;
       public            	   upsfffaaa    false    233    232    233                       2604    17178    transactions transaction_id    DEFAULT     �   ALTER TABLE ONLY public.transactions ALTER COLUMN transaction_id SET DEFAULT nextval('public.transactions_transaction_id_seq'::regclass);
 J   ALTER TABLE public.transactions ALTER COLUMN transaction_id DROP DEFAULT;
       public            	   upsfffaaa    false    230    231    231            
           2604    17115    user_status status_id    DEFAULT     ~   ALTER TABLE ONLY public.user_status ALTER COLUMN status_id SET DEFAULT nextval('public.user_status_status_id_seq'::regclass);
 D   ALTER TABLE public.user_status ALTER COLUMN status_id DROP DEFAULT;
       public            	   upsfffaaa    false    221    220    221                       2604    17101    users user_id    DEFAULT     n   ALTER TABLE ONLY public.users ALTER COLUMN user_id SET DEFAULT nextval('public.users_user_id_seq'::regclass);
 <   ALTER TABLE public.users ALTER COLUMN user_id DROP DEFAULT;
       public            	   upsfffaaa    false    218    219    219            �          0    17135    accounts 
   TABLE DATA           N   COPY public.accounts (account_id, user_id, account_name, balance) FROM stdin;
    public            	   upsfffaaa    false    225   �t       �          0    17161    budget 
   TABLE DATA           M   COPY public.budget (budget_id, user_id, month, income, expenses) FROM stdin;
    public            	   upsfffaaa    false    229   Tu       �          0    17126 
   categories 
   TABLE DATA           @   COPY public.categories (category_id, category_name) FROM stdin;
    public            	   upsfffaaa    false    223   �u       �          0    17148    goals 
   TABLE DATA           c   COPY public.goals (goal_id, user_id, goal_name, target_amount, saved_amount, due_date) FROM stdin;
    public            	   upsfffaaa    false    227   v       �          0    17255    logs 
   TABLE DATA           9   COPY public.logs (log_id, event, event_date) FROM stdin;
    public            	   upsfffaaa    false    235   �v       �          0    17198    planned_transactions 
   TABLE DATA           n   COPY public.planned_transactions (planned_id, user_id, category_id, planned_date, planned_amount) FROM stdin;
    public            	   upsfffaaa    false    233   �x       �          0    17175    transactions 
   TABLE DATA           x   COPY public.transactions (transaction_id, user_id, account_id, category_id, transaction_date, amount, type) FROM stdin;
    public            	   upsfffaaa    false    231   %y       �          0    17112    user_status 
   TABLE DATA           =   COPY public.user_status (status_id, status_name) FROM stdin;
    public            	   upsfffaaa    false    221   �y       �          0    17098    users 
   TABLE DATA           \   COPY public.users (user_id, username, password, email, is_superuser, status_id) FROM stdin;
    public            	   upsfffaaa    false    219   
z       �           0    0    accounts_account_id_seq    SEQUENCE SET     E   SELECT pg_catalog.setval('public.accounts_account_id_seq', 7, true);
          public            	   upsfffaaa    false    224            �           0    0    budget_budget_id_seq    SEQUENCE SET     B   SELECT pg_catalog.setval('public.budget_budget_id_seq', 5, true);
          public            	   upsfffaaa    false    228            �           0    0    categories_category_id_seq    SEQUENCE SET     H   SELECT pg_catalog.setval('public.categories_category_id_seq', 5, true);
          public            	   upsfffaaa    false    222            �           0    0    goals_goal_id_seq    SEQUENCE SET     ?   SELECT pg_catalog.setval('public.goals_goal_id_seq', 5, true);
          public            	   upsfffaaa    false    226            �           0    0    logs_log_id_seq    SEQUENCE SET     >   SELECT pg_catalog.setval('public.logs_log_id_seq', 12, true);
          public            	   upsfffaaa    false    234            �           0    0 #   planned_transactions_planned_id_seq    SEQUENCE SET     Q   SELECT pg_catalog.setval('public.planned_transactions_planned_id_seq', 5, true);
          public            	   upsfffaaa    false    232            �           0    0    transactions_transaction_id_seq    SEQUENCE SET     N   SELECT pg_catalog.setval('public.transactions_transaction_id_seq', 10, true);
          public            	   upsfffaaa    false    230            �           0    0    user_status_status_id_seq    SEQUENCE SET     G   SELECT pg_catalog.setval('public.user_status_status_id_seq', 5, true);
          public            	   upsfffaaa    false    220            �           0    0    users_user_id_seq    SEQUENCE SET     ?   SELECT pg_catalog.setval('public.users_user_id_seq', 5, true);
          public            	   upsfffaaa    false    218            '           2606    17141    accounts accounts_pkey 
   CONSTRAINT     \   ALTER TABLE ONLY public.accounts
    ADD CONSTRAINT accounts_pkey PRIMARY KEY (account_id);
 @   ALTER TABLE ONLY public.accounts DROP CONSTRAINT accounts_pkey;
       public              	   upsfffaaa    false    225            +           2606    17168    budget budget_pkey 
   CONSTRAINT     W   ALTER TABLE ONLY public.budget
    ADD CONSTRAINT budget_pkey PRIMARY KEY (budget_id);
 <   ALTER TABLE ONLY public.budget DROP CONSTRAINT budget_pkey;
       public              	   upsfffaaa    false    229            #           2606    17133 '   categories categories_category_name_key 
   CONSTRAINT     k   ALTER TABLE ONLY public.categories
    ADD CONSTRAINT categories_category_name_key UNIQUE (category_name);
 Q   ALTER TABLE ONLY public.categories DROP CONSTRAINT categories_category_name_key;
       public              	   upsfffaaa    false    223            %           2606    17131    categories categories_pkey 
   CONSTRAINT     a   ALTER TABLE ONLY public.categories
    ADD CONSTRAINT categories_pkey PRIMARY KEY (category_id);
 D   ALTER TABLE ONLY public.categories DROP CONSTRAINT categories_pkey;
       public              	   upsfffaaa    false    223            )           2606    17154    goals goals_pkey 
   CONSTRAINT     S   ALTER TABLE ONLY public.goals
    ADD CONSTRAINT goals_pkey PRIMARY KEY (goal_id);
 :   ALTER TABLE ONLY public.goals DROP CONSTRAINT goals_pkey;
       public              	   upsfffaaa    false    227            1           2606    17263    logs logs_pkey 
   CONSTRAINT     P   ALTER TABLE ONLY public.logs
    ADD CONSTRAINT logs_pkey PRIMARY KEY (log_id);
 8   ALTER TABLE ONLY public.logs DROP CONSTRAINT logs_pkey;
       public              	   upsfffaaa    false    235            /           2606    17203 .   planned_transactions planned_transactions_pkey 
   CONSTRAINT     t   ALTER TABLE ONLY public.planned_transactions
    ADD CONSTRAINT planned_transactions_pkey PRIMARY KEY (planned_id);
 X   ALTER TABLE ONLY public.planned_transactions DROP CONSTRAINT planned_transactions_pkey;
       public              	   upsfffaaa    false    233            -           2606    17181    transactions transactions_pkey 
   CONSTRAINT     h   ALTER TABLE ONLY public.transactions
    ADD CONSTRAINT transactions_pkey PRIMARY KEY (transaction_id);
 H   ALTER TABLE ONLY public.transactions DROP CONSTRAINT transactions_pkey;
       public              	   upsfffaaa    false    231                       2606    17117    user_status user_status_pkey 
   CONSTRAINT     a   ALTER TABLE ONLY public.user_status
    ADD CONSTRAINT user_status_pkey PRIMARY KEY (status_id);
 F   ALTER TABLE ONLY public.user_status DROP CONSTRAINT user_status_pkey;
       public              	   upsfffaaa    false    221            !           2606    17119 '   user_status user_status_status_name_key 
   CONSTRAINT     i   ALTER TABLE ONLY public.user_status
    ADD CONSTRAINT user_status_status_name_key UNIQUE (status_name);
 Q   ALTER TABLE ONLY public.user_status DROP CONSTRAINT user_status_status_name_key;
       public              	   upsfffaaa    false    221                       2606    17110    users users_email_key 
   CONSTRAINT     Q   ALTER TABLE ONLY public.users
    ADD CONSTRAINT users_email_key UNIQUE (email);
 ?   ALTER TABLE ONLY public.users DROP CONSTRAINT users_email_key;
       public              	   upsfffaaa    false    219                       2606    17106    users users_pkey 
   CONSTRAINT     S   ALTER TABLE ONLY public.users
    ADD CONSTRAINT users_pkey PRIMARY KEY (user_id);
 :   ALTER TABLE ONLY public.users DROP CONSTRAINT users_pkey;
       public              	   upsfffaaa    false    219                       2606    17108    users users_username_key 
   CONSTRAINT     W   ALTER TABLE ONLY public.users
    ADD CONSTRAINT users_username_key UNIQUE (username);
 B   ALTER TABLE ONLY public.users DROP CONSTRAINT users_username_key;
       public              	   upsfffaaa    false    219            ;           2620    17253    users hash_password_trigger    TRIGGER     �   CREATE TRIGGER hash_password_trigger BEFORE INSERT OR UPDATE ON public.users FOR EACH ROW EXECUTE FUNCTION public.hash_password();
 4   DROP TRIGGER hash_password_trigger ON public.users;
       public            	   upsfffaaa    false    219    272            ?           2620    17266    accounts log_accounts_changes    TRIGGER     �   CREATE TRIGGER log_accounts_changes AFTER INSERT OR DELETE OR UPDATE ON public.accounts FOR EACH ROW EXECUTE FUNCTION public.log_event();
 6   DROP TRIGGER log_accounts_changes ON public.accounts;
       public            	   upsfffaaa    false    225    273            A           2620    17272    budget log_budget_changes    TRIGGER     �   CREATE TRIGGER log_budget_changes AFTER INSERT OR DELETE OR UPDATE ON public.budget FOR EACH ROW EXECUTE FUNCTION public.log_event();
 2   DROP TRIGGER log_budget_changes ON public.budget;
       public            	   upsfffaaa    false    229    273            >           2620    17270 !   categories log_categories_changes    TRIGGER     �   CREATE TRIGGER log_categories_changes AFTER INSERT OR DELETE OR UPDATE ON public.categories FOR EACH ROW EXECUTE FUNCTION public.log_event();
 :   DROP TRIGGER log_categories_changes ON public.categories;
       public            	   upsfffaaa    false    223    273            @           2620    17267    goals log_goals_changes    TRIGGER     �   CREATE TRIGGER log_goals_changes AFTER INSERT OR DELETE OR UPDATE ON public.goals FOR EACH ROW EXECUTE FUNCTION public.log_event();
 0   DROP TRIGGER log_goals_changes ON public.goals;
       public            	   upsfffaaa    false    227    273            C           2620    17271 5   planned_transactions log_planned_transactions_changes    TRIGGER     �   CREATE TRIGGER log_planned_transactions_changes AFTER INSERT OR DELETE OR UPDATE ON public.planned_transactions FOR EACH ROW EXECUTE FUNCTION public.log_event();
 N   DROP TRIGGER log_planned_transactions_changes ON public.planned_transactions;
       public            	   upsfffaaa    false    273    233            B           2620    17268 %   transactions log_transactions_changes    TRIGGER     �   CREATE TRIGGER log_transactions_changes AFTER INSERT OR DELETE OR UPDATE ON public.transactions FOR EACH ROW EXECUTE FUNCTION public.log_event();
 >   DROP TRIGGER log_transactions_changes ON public.transactions;
       public            	   upsfffaaa    false    273    231            =           2620    17269 #   user_status log_user_status_changes    TRIGGER     �   CREATE TRIGGER log_user_status_changes AFTER INSERT OR DELETE OR UPDATE ON public.user_status FOR EACH ROW EXECUTE FUNCTION public.log_event();
 <   DROP TRIGGER log_user_status_changes ON public.user_status;
       public            	   upsfffaaa    false    221    273            <           2620    17265    users log_users_changes    TRIGGER     �   CREATE TRIGGER log_users_changes AFTER INSERT OR DELETE OR UPDATE ON public.users FOR EACH ROW EXECUTE FUNCTION public.log_event();
 0   DROP TRIGGER log_users_changes ON public.users;
       public            	   upsfffaaa    false    273    219            3           2606    17142    accounts accounts_user_id_fkey    FK CONSTRAINT     �   ALTER TABLE ONLY public.accounts
    ADD CONSTRAINT accounts_user_id_fkey FOREIGN KEY (user_id) REFERENCES public.users(user_id);
 H   ALTER TABLE ONLY public.accounts DROP CONSTRAINT accounts_user_id_fkey;
       public            	   upsfffaaa    false    219    4379    225            5           2606    17169    budget budget_user_id_fkey    FK CONSTRAINT     ~   ALTER TABLE ONLY public.budget
    ADD CONSTRAINT budget_user_id_fkey FOREIGN KEY (user_id) REFERENCES public.users(user_id);
 D   ALTER TABLE ONLY public.budget DROP CONSTRAINT budget_user_id_fkey;
       public            	   upsfffaaa    false    229    4379    219            2           2606    17120    users fk_user_status    FK CONSTRAINT     �   ALTER TABLE ONLY public.users
    ADD CONSTRAINT fk_user_status FOREIGN KEY (status_id) REFERENCES public.user_status(status_id);
 >   ALTER TABLE ONLY public.users DROP CONSTRAINT fk_user_status;
       public            	   upsfffaaa    false    221    219    4383            4           2606    17155    goals goals_user_id_fkey    FK CONSTRAINT     |   ALTER TABLE ONLY public.goals
    ADD CONSTRAINT goals_user_id_fkey FOREIGN KEY (user_id) REFERENCES public.users(user_id);
 B   ALTER TABLE ONLY public.goals DROP CONSTRAINT goals_user_id_fkey;
       public            	   upsfffaaa    false    4379    219    227            9           2606    17209 :   planned_transactions planned_transactions_category_id_fkey    FK CONSTRAINT     �   ALTER TABLE ONLY public.planned_transactions
    ADD CONSTRAINT planned_transactions_category_id_fkey FOREIGN KEY (category_id) REFERENCES public.categories(category_id);
 d   ALTER TABLE ONLY public.planned_transactions DROP CONSTRAINT planned_transactions_category_id_fkey;
       public            	   upsfffaaa    false    233    4389    223            :           2606    17204 6   planned_transactions planned_transactions_user_id_fkey    FK CONSTRAINT     �   ALTER TABLE ONLY public.planned_transactions
    ADD CONSTRAINT planned_transactions_user_id_fkey FOREIGN KEY (user_id) REFERENCES public.users(user_id);
 `   ALTER TABLE ONLY public.planned_transactions DROP CONSTRAINT planned_transactions_user_id_fkey;
       public            	   upsfffaaa    false    233    219    4379            6           2606    17187 )   transactions transactions_account_id_fkey    FK CONSTRAINT     �   ALTER TABLE ONLY public.transactions
    ADD CONSTRAINT transactions_account_id_fkey FOREIGN KEY (account_id) REFERENCES public.accounts(account_id);
 S   ALTER TABLE ONLY public.transactions DROP CONSTRAINT transactions_account_id_fkey;
       public            	   upsfffaaa    false    4391    225    231            7           2606    17192 *   transactions transactions_category_id_fkey    FK CONSTRAINT     �   ALTER TABLE ONLY public.transactions
    ADD CONSTRAINT transactions_category_id_fkey FOREIGN KEY (category_id) REFERENCES public.categories(category_id);
 T   ALTER TABLE ONLY public.transactions DROP CONSTRAINT transactions_category_id_fkey;
       public            	   upsfffaaa    false    4389    223    231            8           2606    17182 &   transactions transactions_user_id_fkey    FK CONSTRAINT     �   ALTER TABLE ONLY public.transactions
    ADD CONSTRAINT transactions_user_id_fkey FOREIGN KEY (user_id) REFERENCES public.users(user_id);
 P   ALTER TABLE ONLY public.transactions DROP CONSTRAINT transactions_user_id_fkey;
       public            	   upsfffaaa    false    231    219    4379            �   �   x�]���0D��Sd����6��IA��
	$60#Cdfx�F(N*�k���9q�UG2_%ߕ�:Ջ���֚F��'I=��sŇ��z��خ��;��/"���4���V8������~}v!��t"�(��jc�U�^�      �   K   x�M��	 1��KK�
�������/!/���$9ID��@���)��l.��B�k=E��r����o��L�B      �   [   x�ʽ	�0��:7���6ml+�'8Ġ����Fb�^�ظQi;j�BDmB�s(�`3��k�������\��q��Q����d�D�09�      �   �   x�M���@���l4�df��f,у	޽��B�Q��7�EEOs���w�'�h��-�
wD�b�@��93��q�g��vD<�*C���Z��Rk
���[X�b
�#ݡÀf2of�����W�ZN�{������J0BB8k��nt�>�O&��TbV�1�� ]r      �   �  x����n�0ů마�^f���v���i�hY;J���&/[�6��(�\��7HH�w���*P�?���;�u|��easg�r4͝�Zq7���(7 7�{<0"0B1C����&(��X�!Y����uMڀf! IԚ&��Y!r$A�rY���ۏ��G����htB��:������>��ν�'��&�&����v�lZ�?�8n��ޛ�i���w��v�,H7�v9�I�����i���i6�����Gs͊��t�\u��<�ڎ]�SWڲr�Vy5�kpڈ�E2 P$���N ���I��������Ȃ�^'O���:?�����V��2�t����/�h[��&I��5Ի�N o�Gm0E\I5l�N��t�;跶����lu�B���j9��\����n>�?n>�_�O����iF���q~+_���#h|������j��yh82��$ +y�}�@�4Sq�D$�A$*�Z�W���mN&      �   D   x�M��� ����v�m��UA�~�s	�a��<D$9�($|���D7�����z�a��W-fD����      �   _   x�]�;� E���^ �u1v��B4�q��ʹg�SH=eN�IDd��Hב�H� md��HMX㇬yٷDV�K��ʀ���$�����#J      �   f   x�=���@���LT`�H7#{���P�	��Æ5q�������L�aU"�J~1�DßLUO�xkLdݏ\5����փ��^�wƋ���BP5*��vr���Bb      �     x�]λ��0 @���Hxw*��� ��:�D,"�@|����X춷8sGҪ8s#HF�6��;������&�&�̨���C�� HAr�csc��sS��M��T����:�c-m���QDS�[�>������I���`���\-��)�����Zo��q���?����rO�������<�^��@��!j�C���#̔�n7��*��#KKW��s�+��q��^Llq�s�k�3-y��U��3l��0�Hq6��<Ͽ "Qo�     