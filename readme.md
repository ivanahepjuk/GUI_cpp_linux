HOW TO COMPILE:
Run terminal, $ cd to the directory, where the main.cpp is situated, then run this command.

g++ main.cpp -o main `pkg-config --libs --cflags gtkmm-3.0`

NOTE: is important to use this "`", not this "'" symbols.

Dependencies: 

GTKMM library -- http://www.gtkmm.org/en/

( sudo apt-get install build-essential libgtkmm-2.4-dev )