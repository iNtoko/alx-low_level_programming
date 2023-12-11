Makefiles are a simple way to organize code compilation. This tutorial does not even scratch the surface of what is possible using make, but is intended as a starters guide so that you can quickly and easily create your own makefiles for small to medium-sized projects.

A Simple Example
Let's start off with the following three files, hellomake.c, hellofunc.c, and hellomake.h, which would represent a typical main program, some functional code in a separate file, and an include file, respectively.

hellomake.c	hellofunc.c	hellomake.h
#include <hellomake.h>

int main() {
  // call a function in another file
  myPrintHelloMake();

  return(0);
}
#include <stdio.h>
#include <hellomake.h>

void myPrintHelloMake(void) {

  printf("Hello makefiles!\n");

  return;
}
/*
example include file
*/

void myPrintHelloMake(void);
Normally, you would compile this collection of code by executing the following command:

gcc -o hellomake hellomake.c hellofunc.c -I.

This compiles the two .c files and names the executable hellomake. The -I. is included so that gcc will look in the current directory (.) for the include file hellomake.h. Without a makefile, the typical approach to the test/modify/debug cycle is to use the up arrow in a terminal to go back to your last compile command so you don't have to type it each time, especially once you've added a few more .c files to the mix.
