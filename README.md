#Практическая работа №2

mysyslog - библиотека.

- **libmysyslog** основная библиотека
- **libmysyslog-text, libmysyslog-json** драйверы для вывода в журнал в виде строки с разделителем и вывода в журнал в виде json строки
- **mysyslog-client** тестовое приложение
- **mysyslog-daemon** демон, который автоматически запускается во время старта компьютера и постоянно выводит в лог данные с разным уровнем

#Makefile

- **all** – собирает все цели;
- **clean** – удаляет все временные и объекты файлы, создаваемые при компиляции, исходные тексты должны приводится к изначальному виду;
- **deb** – собирает deb-пакет для программы.
