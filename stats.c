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
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Global variables used by most of the functions */
int tmp, i, j;

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* The print out of the unsorted data set */
  printf("The given data set array is: \n");
  print_array(test, SIZE);
  
  /* The print out of the analyzed statistics data */
  printf("After Analyzing the data set, here are the results: \n");
  print_statistics(find_median(test,SIZE),
                   find_mean(test,SIZE),
                   find_maximum(test,SIZE),
                   find_minimum(test,SIZE));

 /* The print out of the sorted data set */
 printf("The data set after being sorted from Largest to Smallest is:\n");
 print_array(test, SIZE);

}

/* This function will print out the Median, Mean, Maximum and Minimum */
void print_statistics(unsigned char Median, unsigned char Mean, unsigned char Max, unsigned char Min)
{
    printf("The Median Value found is: %d\n", Median);
    printf("The Mean Value found is: %d\n", Mean);
    printf("The Maximum Value found is: %d\n", Max);
    printf("The Minimum Value found is: %d\n\n", Min);
}

/* This function will print the given array */
void print_array(unsigned char *myArrayPtr, int size)
{
    /* Loop the whole data set */
    for (i = 0; i < size; i++)
    {
	printf("%d ", *myArrayPtr);
        myArrayPtr++;
    }
    printf("\n\n");
}

/* This function will perform a calculation to find the Median value */
unsigned char find_median(unsigned char *myArrayPtr, unsigned int size)
{
    float median_val = 0.0;

    /* Sort the data set first */
    sort_array(myArrayPtr, size);
    
    /* check if the data set is an even */
    if(size%2 == 0)
       median_val = (*(myArrayPtr + (size/2)) + *(myArrayPtr + (size/2+1))) / 2.0;
   
    /* in case the data set size is an odd number */
    else
       median_val = *(myArrayPtr + (size/2+1));

    /* round down and return the median value */
    return (int)floor(median_val);
}

/* This function will perform a calculation to find the Mean value */
unsigned char find_mean(unsigned char *myArrayPtr, unsigned int size)
{
    float sum = 0.0;
    
    /* Loop the whole data set */
    for (i = 0; i <= size; i++)  

        /* calculate the total of the data set */
        sum = sum + *(myArrayPtr + i);
    
    /* round down and return the mean value */
    return (int)floor(sum / size);
}

/* This function will find the maximum value in the data set */
unsigned char find_maximum(unsigned char *myArrayPtr, unsigned int size)
{
    /* assign the first element in the data set to max_val */
    unsigned char max_val = *myArrayPtr;

    /* Loop the whole data set */
    for (i = 1; i < size; ++i)
    {    
         /* check if the next element in the data set larger than max_val */
         if(*(myArrayPtr + i) > max_val)

            /* update max_val with the new large value */
            max_val = *(myArrayPtr + i);  
    }

    return max_val;
}

/* This function will find the minimum value in the data set */
unsigned char find_minimum(unsigned char *myArrayPtr, unsigned int size)
{
    /* assign the first element in the data set to min_val */
    unsigned char min_val = *myArrayPtr;

    /* Loop the whole data set */
    for (i = 1; i < size; ++i)
    {   
         /* check if the next element in the data set smaller than min_val */
         if(*(myArrayPtr + i) < min_val)

            /* update min_val with the new small value */
            min_val = *(myArrayPtr + i);
    }

    return min_val;
}

/* This function will sort the data set from largest to smallest */
void sort_array(unsigned char *myArrayPtr, unsigned int size) 
{
    /* Loop the whole data set */
    for (i = 0; i < size; ++i)
    {
       for (j = i; j < size; ++j)
       {
           /* compare 2 elements */ 
           if(*(myArrayPtr + i) < *(myArrayPtr + j))
           {
               /* rearrange the elements */
               tmp = *(myArrayPtr + i);
	       *(myArrayPtr + i) = *(myArrayPtr + j);
               *(myArrayPtr + j) = tmp;
           }
       }
    }
}
