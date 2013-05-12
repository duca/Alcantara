Alcantara
=========

Qt based launcher similar in spirit to dmenu but graphical.

It features a dynamic search (results appear as you type) and although Alcantara assumes you more often type the first letters of the desired program, 
you could also be typing a fragment from the middle or end of the name. In this respect it is more advanced than dmenu.

Also it keeps track of opened programs by keeping their pid's (and names) and my intention is to enable, through dbus, the retrieval of
these informations. 


Dependencies
=============

You must have Qt4 installed 


HOW TO BUILD
============

The executable file is named Alcantara and at the moment, there are two options to build it

1- In directory type:

make

2- In the directory type
qmake -makefile Alcantara.pro 

and a Makefile will be generated using the correct paths for each include and lib files needed. After the end of the process execute the previous instruction


