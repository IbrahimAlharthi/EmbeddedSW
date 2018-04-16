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
 * @file stats.h
 * @brief Contains functions to perform statistics calculations
 *
 * The file contains a list of statistics functions to calculate Median, Mean
 * Maximum, Minimum. Also, it has 2 functions to print the results from the 
 * performed statistics calculations. Also, another print function to print 
 * the array given. Finally, there is a sorting function.
 *
 * @author Ibrahim Alharthi
 * @date 04/15/2018
 *
 */


#ifndef __STATS_H__
#define __STATS_H__

/**
*  @brief print out the statistics of a given array of values
*
*  This function will print out the Median, Mean, Maximum
*  and Minimum of a 40 characters after being analyzed.
*
*  @param Median The calclated median value returned from find_median function
*  @param Mean The calclated mean value returned from find_mean function
*  @param Max The maximum value found returned from find_maximum function
*  @param Min The minimum value found returned from find_minimum function
*  @return none
*/
void print_statistics(unsigned char Median, unsigned char Mean, unsigned char Max, unsigned char Min); 

/**
*  @brief print out an array
*
*  This function will print the given array of 40 characters.
*
*  @param *myArrayPtr A pointer to the given array of 40 characters
*  @param size The size of the array which is 40 characters
*  @return none
*/
void print_array(unsigned char *myArrayPtr, int size); 

/**
*  @brief calculate and return the Median of an array
*
*  This function will receive an array of 40 characters and 
*  perform a calculation to find the Median value.
*
*  @param *myArrayPtr A pointer to an array of 40 characters
*  @param size The size of the array which is 40 characters
*  @return The calculated Median of the array
*/
unsigned char find_median(unsigned char *myArrayPtr, unsigned int size);

/**
*  @brief calculate and return the Mean of an array
*
*  This function will receive an array of 40 characters and 
*  perform a calculation to find the Mean value.
*
*  @param *myArrayPtr A pointer to an array of 40 characters
*  @param size The size of the array which is 40 characters
*  @return The calculated Mean of the array
*/
unsigned char find_mean(unsigned char *myArrayPtr, unsigned int size);

/**
*  @brief check an array to find the Maximum value
*
*  This function will receive an array of 40 characters. It will
*  look for the maximum value then return it.
*
*  @param *myArrayPtr A pointer to an array of 40 characters 
*  @param size The size of the array which is 40 characters
*  @return The maximum character found in the array
*/
unsigned char find_maximum(unsigned char *myArrayPtr, unsigned int size);

/**
*  @brief check an array to find the Minimum value
*
*  This function will receive an array of 40 characters. It will
*  look for the minimum value then return it.
*
*  @param *myArrayPtr A pointer to an array of 40 characters 
*  @param size The size of the array which is 40 characters
*  @return The minimum character found in the array
*/
unsigned char find_minimum(unsigned char *myArrayPtr, unsigned int size);

/**
*  @brief Sort an array from largest to smallest
*
*  This function will receive an array and start rearranging it
*  from largest to smallest.
*
*  @param *myArrayPtr A pointer to the given array of 40 characters
*  @param size The size of the array which is 40 characters
*  @return none
*/
void sort_array(unsigned char *myArrayPtr, unsigned int size);

#endif  /* __STATS_H__ */
