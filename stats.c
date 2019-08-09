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
  @file stats.c 
  @brief Embedded Software HW1
   * Instructions:
 
        This is the 1st HW of the Coursera Course Embedded Software.
 
                main() - The main entry point for your program
                print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
                print_array() - Given an array of data and a length, prints the array to the screen             [DONE]
                find_median() - Given an array of data and a length, returns the median value                   [DONE]
                find_mean() - Given an array of data and a length, returns the mean                             [DONE]
                find_maximum() - Given an array of data and a length, returns the maximum                       [DONE]
                find_minimum() - Given an array of data and a length, returns the minimum                       [DONE]
                sort_array() - Given an array of data and a length, sorts the array from largest to smallest.   [DONE]
                        (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
     * @author G H Giri
     * @date 09/08/2019
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
  unsigned char sorted_array[SIZE];
  int maximum = 0, minimum = 0, median = 0, mean = 0;
  
  printf("Embedded Software HW1 \n");
  printf("Unsorted array \n");
  print_array(test);
  sort_array(test);
  printf("\nSorted array \n");
  print_array(test);
  printf("\n");
  maximum = find_maximum(test);
  minimum = find_minimum(test);
  median  = find_median(test);
  mean   = find_mean(test);
  print_statistics(median, mean, maximum, minimum);
 
 }
 
void sort_array(unsigned char test[]) {

}
void print_statistics(int median, int mean, int maximum, int minimum) {

}

void print_array(unsigned char test[]) {

}
 
int find_maximum(unsigned char test[]) {

}

int find_minimum(unsigned char test[]) {
  
}

int find_median(unsigned char sorted_array[]) {

}
 
int find_mean(unsigned char test[]) {

 };