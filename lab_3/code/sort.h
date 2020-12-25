
#ifndef sort_h
#define sort_h

#include <iostream>
#include <cstdlib>
#include <stdio.h>


void bubble_sort   (int *arr, unsigned n);
void insertion_sort(int *arr, unsigned n);
void choices_sort  (int *arr, unsigned n);

void array_print(int *arr, unsigned n);
void array_fill (int *arr, unsigned n);

void array_sort_grow(int *arr, unsigned n);
void array_sort_low(int *arr, unsigned n);

#endif /* sort_h */
