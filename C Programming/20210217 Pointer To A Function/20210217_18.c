/* C uses a sorting library. In principle we have:
Selection Sort
Binary Sort
Merge Sort
Radix Sort
Insertion Sort
Find the differences between the methods and who is the fastest when. */

/*
• Selection Sort repeatedly searches for the smallest element from the unsorted part 
of the array and places it at the end of sorted part of the array. Selection sort first 
finds the smallest element in the unsorted array and swaps it with the first element. 
Then it finds the second smallest element in the unsorted array and swaps it with the 
second element, and the algorithm keeps doing this until the entire array is sorted.

• A Binary Search is a sorting algorithm, that is used to search an element in a sorted array. 
A binary search technique works only on a sorted array, so an array must be sorted to apply binary 
search on the array. It is a searching technique that is better than the linear search technique 
as the number of iterations decreases in the binary search.

• Merge Sort is one of the best examples of Divide & Conquer algorithm. In Merge sort, we divide 
the array recursively in two halves, until each sub-array contains a single element, and then we 
merge the sub-array in a way that it results into a sorted array. merge() function merges two 
sorted sub-arrays into one, wherein it assumes that array[l .. n] and arr[n+1 .. r] are sorted.

• The Radix sort is a non-comparative sorting algorithm. The Radix sort algorithm is the most 
preferred algorithm for the unsorted list. It sorts the elements by initially grouping the individual 
digits of the same place value. The idea of Radix Sort is to do digit by digit sort starting from least 
significant digit(LSD) to the most significant digit(MSD), according to their increasing/decreasing order. 
Radix sort is a small method that is used several times when alphabetizing an oversized list of names. 
Specifically, the list of names is initially sorted according to the first letter of every name, that is, 
the names are organized in twenty-six categories.

• Insertion Sort is a sorting algorithm where the array is sorted by taking one element at a time. 
The principle behind insertion sort is to take one element, iterate through the sorted array & 
find its correct position in the sorted array.
Step 1 − If the element is the first one, it is already sorted.
Step 2 – Move to next element
Step 3 − Compare the current element with all elements in the sorted array
Step 4 – If the element in the sorted array is smaller than the current element, iterate to the next element. Otherwise, shift all the greater element in the array by one position towards right
Step 5 − Insert the value at the correct position
Step 6 − Repeat until the complete list is sorted 
*/
