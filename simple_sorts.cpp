//---------------------------------------------------------------------------
// FILE: simple_sorts.cpp
// NAME: Joey Macauley
// DATE: CPSC 223 - Spring 2022
// DESC: Implementation for basic sorting algorithms (swap, bubble, selection, and insertion)
//---------------------------------------------------------------------------

#include <iostream>
#include "simple_sorts.h"

void swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void bubble_sort(int array[], int n)
{
    bool sorted = false;
    for (int i = 1; i < n; ++i)
    {
        sorted = true;
        for (int j = 1; j <= (n - i); ++j)
        {
            if (array[j - 1] > array[j])
            {
                swap(array[j - 1], array[j]);
                sorted = false;
            }
        }
    }
}

void insertion_sort(int array[], int n)
{
    int val = 0, j = 0;
    for (int i = 1; i < n; ++i)
    {
        val = array[i];
        j = i;
        while (j > 0 and array[j - 1] > val)
        {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = val;
    }
}

void selection_sort(int array[], int n)
{
    int index = 0;
    for (int i = 0; i < (n - 1); ++i)
    {
        index = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] < array[index])
            {
                index = j;
            }
        }
        swap(array[i], array[index]);
    }
}
