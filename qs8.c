/*
8.WAP take two matrix and check whether they are equal or not.
Example 1.
i/p= [0],[0] : 1
[0],[1] : 2
[1],[0] : 3
[1],[1] : 4
second matrix :
[0],[0] : 1
[0],[1] : 2
[1],[0] : 3
[1],[1] : 4
O/p= Both matrix Equal.
Example 2.
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
int checkMatrix(int r, int c, int r2, int c2, int mat[][c], int mat2[][c2])
{
  if (r != r2 && c != c2)
  {
    return 0;
  }
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (mat[i][j] != mat2[i][j])
      {
        return 0;
      }
    }
  }
  return 1;
}
int main()
{
  int r, c, r2, c2;
  printf("Enter the size of 1st matrix of row nd colomns:\n");
  scanf("%d %d", &r, &c);
  int mat[r][c];
  inputsArr(r, c, mat);
  printf("Enter the size of 2nd matrix of row nd colomns:\n");
  scanf("%d %d", &r2, &c2);
  int mat2[r2][c2];
  inputsArr(r2, c2, mat2);
  if (checkMatrix(r, c, r2, c2, mat, mat2))
  {
    printf("The matrices are equal.\n");
  }
  else
  {
    printf("The matrices are not equal.\n");
  }

  return 0;
}