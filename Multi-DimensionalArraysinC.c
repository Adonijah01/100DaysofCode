Multi-dimensional arrays in C are arrays that have more than one index. They can be thought of as arrays of arrays, where each element of the array is itself an array.

The most common type of multi-dimensional array is a two-dimensional array, which is often used to represent matrices. Here's an example of how to declare and initialize a two-dimensional array in C:

int matrix[3][3] = {
  {1, 2, 3},
  {4, 5, 6},
  {7, 8, 9}
};

In this example, matrix is a two-dimensional array with three rows and three columns. The elements of the array are initialized using an initializer list, which is enclosed in braces {}. The outer braces represent the rows of the array, while the inner braces represent the elements in each row.

You can access the elements of a multi-dimensional array using the square bracket notation. For example, to access the element in the second row and third column of the matrix above, you would write:
int x = matrix[1][2]; // x = 6
Note that the indices of a multi-dimensional array are zero-based, meaning the first element has an index of 0, not 1. In the example above, matrix[1][2] refers to the element in the second row (index 1) and third column (index 2) of the array.

Example of code to explain arrays in C.

Here's an example of how to display the elements of an array in C:

c

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // calculate size of array

    printf("Elements of array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // print each element
    }
    printf("\n");

    return 0;
}

In this example, we declare an array arr and initialize it with five integers. We then calculate the size of the array n using the formula sizeof(arr) / sizeof(arr[0]), which gives us the number of elements in the array.

We then use a for loop to iterate over the array and print each element using the printf function. The %d format specifier is used to indicate that we want to print an integer.

The output of this program would be:


Elements of array: 1 2 3 4 5

