<!-- Logic to delete duplicate elements from array
Step by step descriptive logic to delete duplicate elements from array.

Input size and elements in array from user. Store it in some variable say size and arr.
To find duplicate elements in given array we need two loops. Run an outer loop from 0 to size. Loop structure must look like for(i=0; i<size; i++). This loop is used to select each element of array and check next subsequent elements for duplicates using another nested loop.
Run another inner loop to find first duplicate of current element. Run an inner loop from i + 1 to size. The loop structure should look like for(j=i+1; j<size; j++).
Inside the inner loop check for duplicate element. If a duplicate element is found then delete that array element. Also if a duplicate element is found then decrement size of array i.e. size = size - 1. -->