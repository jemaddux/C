//
//  main.c
//  Triangle
//
//  Created by John Maddux on 8/20/13.
//  Copyright (c) 2013 John Maddux. All rights reserved.
//

#include <stdio.h>

float remainingAngle(float first, float second)
{
    return 180.0 - first - second;
}

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}

