Set Matrix Zero
Problem Statement
Given a matrix, if any element in the matrix is 0, you must set its entire row and column to 0. Return the updated matrix.

Examples
Example 1:
Input:

matrix = [[1, 1, 1],
          [1, 0, 1],
          [1, 1, 1]]
Output:

[[1, 0, 1],
 [0, 0, 0],
 [1, 0, 1]]


Example 2:
Input:

matrix = [[0, 1, 2, 0],
          [3, 4, 5, 2],
          [1, 3, 1, 5]]
Output:

[[0, 0, 0, 0],
 [0, 4, 5, 0],
 [0, 3, 1, 0]]


Solution Approach
Traverse the matrix to identify the rows and columns that contain 0.

Use auxiliary arrays to mark these rows and columns.

Traverse the matrix again and set elements to 0 if they belong to a marked row or column.
