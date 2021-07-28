ft_printf

Ft_printf is a copy of printf from lib stdio.h without less funcionalities.  The common structure for printf is:

%[flags][width][.precision][length]specifier

My Idea

In order to do this project, I worked all the time with pointers to my data so it runs faster because I am not actually sending the data, just the address to it. The algorithm that I prepared runs inside a while loop which goes character by character through the format string printing the chars, but when it founds a '%' it triggers the arguments functions. After this is triggered I run the following logic:
1. Get all the possible information

The first step to print a function argument is to know what you are going to print and in which format. So I go through the chars after '%' one by one checking for flags, width, precision, length and storing this information in a structure which will be useful later.
2. Prepare a string to print
Prerequisites

There is no prerequisite to using these functions. All the files needed are included.
Installing and Running

There are two options to use this repo, one is to use a test file that I already created or the other is to get the library and the header file and include it in any other project of your own.
To run the test file I made use:

    Clone the repository

git clone 

    Go into the cloned folder and execute the following command, which will compile the files, create the library and the test program.

make re

    Run the executable

./test

    If you wish you can modify the test.c file and print anything else. After doing so just use the same command as before.
    In order to clean the test files run

make fclean

If you wish to use the function in your own file:

    Compile the library

make all

    Copy the libftprintf.a library which is located inside the libs folder and ft_printf.h header file which is inside the includes folder.
    Paste wherever in your project folder and compile using

gcc -[flags] -L./[library directory] -lftprintf -I./[includes directory]

[flags] = Any compilation flags you use [library directory] = path to the directory in which the libftprintf.a file is located [includes directory] = path to the directory in which the ft_printf.h file is located
Information Sources

    http://www.cplusplus.com/reference/cstdio/printf/
    man printf(3)
	man 3 stdarg

