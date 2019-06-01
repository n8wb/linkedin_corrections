using namespace std;

#include <stdio.h>
#include <iostream>
#include "point.h"
int main()
{
    // ISSUE 1.
	char c = 255; // This is can be signed or unsigned see -funsigned-char on gcc
	cout << "This is defaulted to unsigned on android and signed on linux for gcc" <<endl;
    printf("%d\n",c);
    // ISSUE 2. Constructors. See point.h
    point<example_type> p(1,2);
    pointv2<example_type> p2(3,4);

	return EXIT_SUCCESS;
}