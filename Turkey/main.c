//
//  main.c
//  Turkey
//
//  Created by John Maddux on 8/20/13.
//  Copyright (c) 2013 John Maddux. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // Delcare the variable called 'weight' of type float
    float weight;
    
    // Put a number in that variable
    weight = 14.2;
    
    //Log it to the user
    printf("The turkey weighs %f./n", weight);
    
    //Decalre another variable of type float
    float cookingTime;
    
    // Calculate the cooking time and store it in the variable
    // In this case, '*' mean 'multiplied by'
    cookingTime = 15.0 + 15.0 * weight;
    
    // Log that to the user
    printf("Cook it for %f minutes.\n", cookingTime);
    
    //End this function and indicate success

    return 0;
}

