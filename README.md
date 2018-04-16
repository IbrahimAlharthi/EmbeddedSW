/******************************************************************************
 * Copyright (C) 2018 by Ibrahim Alharthi - Mohammed Bin Rashid Space Centre
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Ibrahim Alharthi and MBRSC are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/

Author: Ibrahim Alharthi
Date: 04/15/2018
 
Description:
This is the first assignment in the Introduction to Embedded Systems Software 
and Development Environments. The purpose of this assignment is to write a 
software that will analyze an array of data set and find the Median, Mean, 
Maximum and Minimum values. Sorting the array will be required to find the
Median which was done in a separate function. Finally, all the values should 
be printed out clearly.

This repository contains 3 files:
- stats.c: The implementation file which contains the main function and 
       the needed functions to analyze the data set array.

- stats.h: The header file which contains the definition of al the functions.

- README.md: Includes the information needed to know about the author, project
       and how to run the software.

To Compile and Run the software, type the following commands:
- gcc -o stats.out stats.c -lm
- ./stats.out



