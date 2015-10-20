# Sorting-Algorithms
A project completed for the Algorithms course at USF: Implementation of common quadratic and linearithmic sorting algorithms

Assignment:
Implement the following sorting algorithms in the file Sorting.hpp or Sorting.java.
For full credit, each function must:

• Implement the algorithms as described below, using the given
function signatures.

• Be generic (i.e., a function that takes as input an array of any type of
item). You may assume that the item type overloaded the comparison
operators (i.e., you may use the < and > operators on the array of
items).

• Compile with no errors. If your code fails to compile on the C4 Linux
Lab machines, you will receive major penalties on other sections of this
project.

• Correctly sort the given input data.

• Be efficient (i.e., implementations that take too long to solve sample
problems will be assessed a penalty)

• Be readable and easy to understand. You should include comments to
explain when needed, but you should not include excessive comments
that makes the code difficult to read.

• (C++ only) Have no memory leaks.

• (Java only) All of your functions should be defined as static member
functions of the class Sorting.

Your final submission should not include a main function. However, you
may implement additional helper functions as needed. Helper functions must
be located in the same file.
You will be provided with source files that include a main function, as
well as several helper functions that you may use. You should not include
either of these files in your code submission, though you may invoke their
functions (and #include them).

Algorithm: SelectionSort

Input: data: the items to sort (must be comparable)

Input: n: the number of elements in items

Output: permutation of items such that data[0] ≤ . . . ≤ data[n − 1]


Algorithm: InsertionSort

Input: data: the data to sort (must be comparable)

Input: n: the number of elements in data

Output: permutation of data such that data[0] ≤ . . . ≤ data[n − 1]


Algorithm: MergeSort

Input: data: the data to sort (must be comparable)

Input: n: the number of elements in data

Input: temp: temporary array of size n for use during MergeSort

Output: a permutation of data such that data[0] ≤ . . . ≤ data[n − 1]


Algorithm: QuickSort

Input: data: the data to sort (must be comparable)

Input: n: the number of elements in data

Output: permutation of data such that data[1] ≤ . . . ≤ data[n]




