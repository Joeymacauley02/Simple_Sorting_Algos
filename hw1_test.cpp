//---------------------------------------------------------------------------
// FILE: hw1_test.cpp
// NAME: Joey Macauley
// DATE: Spring 2022
// DESC: Implementation of 15 test total to evaluate the success of each function in simple_sorts.cpp
//---------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <gtest/gtest.h>
#include "simple_sorts.h"


/* Your job for this file is to:

    (1) Fill in the file header comment above

    (2) Implement 2 tests as described below for each sorting
        algorithm (so, 6 tests in total)

    (3) Get all of the tests to pass (including the 6 you write)

    (4) Make sure you remove all TODO comments

    (5) Make sure you comment the tests you write 

    (6) Optionally write additional tests to cover more cases for your
        algorithms

    NOTE: To disable a test, prefix the test name with DISABLED_ E.g.,
          DISABLED_EmptyArray. You should not disable any tests for
          your final submission. However, it can be helfpul when
          working on your code (especially if the test is causing
          hitting a segmentation fault in your code.
*/



//---------------------------------------------------------------------------
// Bubble Sort Tests
//---------------------------------------------------------------------------

TEST(BasicBubbleSortTest, EmptyArray)
{
  int array[] {};
  bubble_sort(array, 0);
}

TEST(BasicBubbleSortTest, ReverseOrder)
{
  int array[] {4, 3, 2, 1};
  bubble_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

TEST(BasicBubbleSortTest, InOrder)
{
  int array[] {1, 2, 3, 4};
  bubble_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

//Check to see if bubble sort algorithm works with an array that is partially ordered throughout
TEST(BasicBubbleSortTest, PartiallyUnorderedList)
{
  int array[] {4, 2, 3, 1};
  bubble_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

//Check to see if bubble sort algorithm works with an array that is consists of the same value for all but one index
TEST(BasicBubbleSortTest, AllButOne)
{
  int array[] {3, 3, 1, 3};
  bubble_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

//---------------------------------------------------------------------------
// Insertion Sort Tests
//---------------------------------------------------------------------------

TEST(BasicInsertionSortTest, EmptyArray)
{
  int array[] {};
  insertion_sort(array, 0);
}

TEST(BasicInsertionSortTest, ReverseOrder)
{
  int array[] {4, 3, 2, 1};
  insertion_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

TEST(BasicInsertionSortTest, InOrder)
{
  int array[] {1, 2, 3, 4};
  insertion_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

//Check to see if insertion sort algorithm works with an array that is partially ordered throughout
TEST(BasicInsertionSortTest, PartiallyUnorderedList)
{
  int array[] {4, 2, 3, 1};
  insertion_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

//Check to see if insertion sort algorithm works with an array that is consists of the same value for all but one index
TEST(BasicInsertionSortTest, AllButOne)
{
  int array[] {3, 3, 1, 3};
  insertion_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

//---------------------------------------------------------------------------
// Selection Sort Tests
//---------------------------------------------------------------------------

TEST(BasicSelectionSortTest, EmptyArray)
{
  int array[] {};
  selection_sort(array, 0);
}

TEST(BasicSelectionSortTest, ReverseOrder)
{
  int array[] {4, 3, 2, 1};
  selection_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

TEST(BasicSelectionSortTest, InOrder)
{
  int array[] {1, 2, 3, 4};
  selection_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

//Check to see if selection sort algorithm works with an array that is partially ordered throughout
TEST(BasicSelectionSortTest, PartiallyUnorderedList)
{
  int array[] {4, 2, 3, 1};
  selection_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

//Check to see if insertion sort algorithm works with an array that is consists of the same value for all but one index
TEST(BasicSelectionSortTest, AllButOne)
{
  int array[] {3, 3, 1, 3};
  selection_sort(array, 4);
  for (int i = 0; i < 3; ++i)
    ASSERT_LE(array[i], array[i+1]);
}

//---------------------------------------------------------------------------
// Main
//----------------------------------------------------------------------

int main(int argc, char* argv[])
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
