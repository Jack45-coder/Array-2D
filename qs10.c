/*
10.Write a C program to read elements in a matrix and find the sum of elements of
each row and columns of matrix. C program to calculate sum of rows and columns
of matrix.
Input:
1 2 3
4 5 6
7 8 9
Output:
Sum of row 1 = 6
Sum of row 2 = 15
Sum of row 3= 24
Sum of column 1= 12
Sum of column 2= 15
Sum of column 3= 18
*/
#include <stdio.h>
void inputsArr(int r, int c, int mat[][c])
{
  printf("Enter the elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
}
void sumOfRow_Col(int r, int c, int mat[][c])
{
  printf("\nSum of elements in each row:\n");
  for (int i = 0; i < r; i++)
  {
    int rowsum = 0;
    for (int j = 0; j < c; j++)
    {
      rowsum += mat[i][j];
    }
    printf("Sum of row %d: %d\n", i + 1, rowsum);
  }
  printf("\nSum of elements in each colomns:\n");
  for (int j = 0; j < c; j++)
  {
    int colSum = 0;
    for (int i = 0; i < r; i++)
    {
      colSum += mat[i][j];
    }
    printf("Sum of column %d: %d\n", j + 1, colSum);
  }
}

int main()
{
  int r, c;
  printf("Enter the size of row nd colomns:\n");
  scanf("%d %d", &r, &c);
  int mat[r][c];
  inputsArr(r, c, mat);
  sumOfRow_Col(r, c, mat);
  return 0;
}