#include "mbed.h"
#include <cstdio>

/*
CA Question 4 Student Donagh McCarthy
Initialise int variables a = 10, b = 20, c = 30
Add values of a and b, store it in a new int variable d and print value of variable d
Subtract variable c from d and store in new int variable e and print the value of variable e
*/
// main() runs in its own thread in the OS

int a = 10;
int b = 20;
int c = 30;
int d;
int e;


int main()
{
    d = a + b;
    printf("d = a+b = %d,\r\n", d);

    e = d - c;
    printf("e = d-c = %d,\r\n", e);

    while (true) {

    }
}

