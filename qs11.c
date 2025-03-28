/*
11.WAP to take a matrix and find maximum element?
Input:
12 21 35
76 10 8
Output:
Max=76.
*/
#include <stdio.h>
void takeMatrix(int r, int c, int mat[][c])
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

int main()
{
  int row, col;
  printf("Enter the size of row And colomns:\n");
  scanf("%d %d", &row, &col);
  int mat[row][col];
  takeMatrix(row, col, mat);
  int max = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (max < mat[i][j])
      {
        max = mat[i][j];
      }
    }
  }
  printf("max = %d", max);

  return 0;
}