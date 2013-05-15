Alcantara
=========

Qt based launcher similar in spirit to dmenu but graphical.

It features a dynamic search (results appear as you type) and although Alcantara assumes you more often type the first letters of the desired program, 
you could also be typing a fragment from the middle or end of the name. In this respect it is more advanced than dmenu.

Also it keeps track of opened programs by keeping their pid's (and names) and my intention is to enable, through dbus, the retrieval of
these informations. 

Alcantara searches all directories listed in your user PATH variable. It's a per-user list, so if some other user of your machine does not have a particular bin place listed, he or she will not have it listed by Alcantara.


Dependencies
=============

You must have Qt4 installed 


HOW TO BUILD
============

The executable file is named Alcantara and at the moment, there are two options to build it

1 - In the directory type (if you also have qt5 installed, use qmake-qt4 instead of qmake)
qmake -makefile Alcantara.pro PREFIX=/foo/dir (or omit PREFIX for default: /usr/local)

2 - After that, just make && make install

and a Makefile will be generated using the correct paths for each include and lib files needed. After the end of the process execute the previous instruction


