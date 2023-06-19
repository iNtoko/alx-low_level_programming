0. Object-like Macro
mandatory
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

1. Pi
mandatory
Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

2. File name
mandatory
Write a program that prints the name of the file it was compiled from, followed by a new line.

You are allowed to use the standard library
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 

3. Function-like macro
mandatory
Write a function-like macro ABS(x) that computes the absolute value of a number x.

4. SUM
mandatory
Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
