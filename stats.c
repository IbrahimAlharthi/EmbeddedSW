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

void main() {

  
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */

  //print_statistics();
  print_array(test, SIZE);
  find_median(test,SIZE);
  find_mean(test,SIZE);
  find_maximum(test,SIZE);
  find_minimum(test,SIZE);
  sort_array(test,SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char Median, unsigned char Mean, unsigned char Max, unsigned char Min)
{

}

void print_array(unsigned char *myArrayPtr, int size)
{
    printf("The given data set array is: \n");
    for (int i = 0; i < size; i++)
    {
	printf("%d ", *myArrayPtr);
        myArrayPtr++;
    }
    printf("\n");
}

unsigned char find_median(unsigned char *myArrayPtr, unsigned int size)
{
  int tmp, i, j;
  float median_val = 0.0;

  for (i = 0; i < size; ++i)
  {
     for (j = i; j < size; ++j)
     {
         if(*(myArrayPtr + i) < *(myArrayPtr + j))
         {
             tmp = *(myArrayPtr + i);
	     *(myArrayPtr + i) = *(myArrayPtr + j);
             *(myArrayPtr + j) = tmp;
         }
     }
  }
    
   if(size%2 == 0)
   {
      median_val = (*(myArrayPtr + (size/2)) + *(myArrayPtr + (size/2+1))) / 2.0;
   }

   printf("The Median Value found is: %d\n", (int)floor(median_val));

   return median_val;
}

unsigned char find_mean(unsigned char *myArrayPtr, unsigned int size)
{
    float sum = 0.0;
    float mean_val = 0.0;

    for (int i = 0; i <= size; i++)  
        sum = sum + *(myArrayPtr + i);
         
    mean_val = sum / size;

    printf("The Sum of the Data Set is: %0.2f\n", sum);
    printf("The Mean Value found is: %d\n", (int)floor(mean_val));

    return mean_val;
}

unsigned char find_maximum(unsigned char *myArrayPtr, unsigned int size)
{
    int i;
    unsigned char max_val = *myArrayPtr;

 for (i = 1; i < size; ++i)
  {   
         if(*(myArrayPtr + i) > max_val)
            max_val = *(myArrayPtr + i);  
  }

  printf("The Maximum Value found is: %d\n", max_val);
  return max_val;
}

unsigned char find_minimum(unsigned char *myArrayPtr, unsigned int size)
{
     int i;
    unsigned char min_val = *myArrayPtr;

  for (i = 1; i < size; ++i)
  {   
         if(*(myArrayPtr + i) < min_val)
            min_val = *(myArrayPtr + i);
  }

  printf("The Minimum Value found is: %d\n", min_val);
  return min_val;
}

void sort_array(unsigned char *myArrayPtr, unsigned int size) 
{
    int tmp, i, j;

  for (i = 0; i < size; ++i)
  {
     for (j = i; j < size; ++j)
     {
         if(*(myArrayPtr + i) < *(myArrayPtr + j))
         {
             tmp = *(myArrayPtr + i);
	     *(myArrayPtr + i) = *(myArrayPtr + j);
             *(myArrayPtr + j) = tmp;
         }
     }
  }

  printf("\nSorted Values below from largest to smallest:\n");

  for (i = 0; i < size; ++i)
     printf("%d ", *(myArrayPtr + i));

     printf("\n");
     
}
