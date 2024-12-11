#!/bin/bash
export PGPASSWORD='15937048'
pg_dump -U upsfffaaa -h localhost -F c -b -v -f /home/upsfffaaa/KP/res/KP_backup.sql KP
unset PGPASSWORD  # Очистка переменной PGPASSWORD после выполнения

