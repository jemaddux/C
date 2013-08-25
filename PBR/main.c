//
//  main.c
//  PBR
//
//  Created by John Maddux on 8/24/13.
//  Copyright (c) 2013 John Maddux. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{

    double pi = 3.1415;
    double integerPart;
    double fractionPart;
    
    // Pass the address of integerPart as an argument
    fractionPart = modf(pi, &integerPart);
    
    // Find the value stored in integerPart
    printf("integerPart = %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    return 0;
}

