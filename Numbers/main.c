//
//  main.c
//  Numbers
//
//  Created by John Maddux on 8/21/13.
//  Copyright (c) 2013 John Maddux. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int derp = 88;
    printf("derp the integer is %d.\n", derp);
    printf("In octal, derp is %o.\n", derp);
    printf("In hexadecimal, derp is %x.\n", derp);
    
    long derp2 = 88123123;
    printf("derp the integer is %ld.\n", derp2);
    printf("In octal, derp is %lo.\n", derp2);
    printf("In hexadecimal, derp is %lx.\n", derp2);

    unsigned long x = 255;
    printf("x is %lu.\n", x);
    
    //Ocatl and hex already assumed the number was unsigned
    printf("In octal, x is %lo.\n", x);
    printf("In hexadecimal, x is %lx.\n", x);
    
    printf("# * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    
    int r = 4;
    r++;
    
    return 0;
}

