/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief The main function and other functions to calculate the statistics
 *
 * This file contains the main function that will run the code and the other 
 * statistics functions which we will use for our calculations. Also, this 
 * file contains printing values functions.
 *
 * @author Ibrahim Alharthi
 * @date 04/15/2018
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char Median, unsigned char Mean, unsigned char Max, unsigned char Min)
{

}

void print_array(unsigned char *myArrayPtr, int size)
{
  
}

unsigned char find_median(unsigned char *myArrayPtr, unsigned int size)
{

}

unsigned char find_mean(unsigned char *myArrayPtr, unsigned int size)
{

}

unsigned char find_maximum(unsigned char *myArrayPtr, unsigned int size)
{

}

unsigned char find_minimum(unsigned char *myArrayPtr, unsigned int size)
{

}

unsigned char sort_array(unsigned char myArray[], unsigned int size) 
{
    
}
