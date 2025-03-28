/*
13.WAP to take a matrix  and arrange in ascending order?
Input:
12 21 35
76 10 8
Output:
8 10 12
21 35 76
*/
#include <stdio.h>

// Matrix input function
void inputsMatrix(int r, int c, int mat[][c])
{
  printf("Enter The elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
}

// Sorting function
void ascending_Matrix(int r, int c, int mat[][c])
{
  int totalelements = r * c;
  int temp[totalelements];
  int k = 0;

  // Copy matrix elements into 1D array
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      temp[k++] = mat[i][j];
    }
  }

  // BUBBLE SHORT:-
  for (int i = 0; i < totalelements; i++)
  {
    for (int j = 0; j < totalelements; j++)
    {
      if (temp[j] > temp[j + 1])
      {
        int swap = temp[j];
        temp[j] = temp[j + 1];
        temp[j + 1] = swap;
      }
    }
  }

  // Copy sorted elements back to matrix
  k = 0;
  for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            mat[i][j] = temp[k++];
        }
    }
}

// Print matrix function
void printMatrix(int r, int c, int mat[r][c]){
  printf("Sorted Matrix:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d  ",mat[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int row, col;
  printf("Enter the size of row And colomns:\n");
  scanf("%d %d", &row, &col);
  int mat[row][col]; // Declaring matrix
  inputsMatrix(row, col, mat); // Taking input
  ascending_Matrix(row,col,mat); // Sorting matrix
  printMatrix(row,col,mat);  // Printing sorted matrix

  return 0;
}