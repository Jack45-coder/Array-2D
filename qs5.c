/*
5.WAP to calculate the multiply of two matrices?
Input:
1 2    5 6
3 4    7 8
Output :
19 22
43 50
*/
#include <stdio.h>
int main()
{

  int r, c;
  printf("Enter the size of rows and columns:\n");
  scanf("%d %d", &r, &c);

  int arr1[r][c], arr2[r][c], result[r][c];

  printf("Enter elements for first matrix:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("Enter elements for second matrix:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr2[i][j]);
    }

    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        result[i][j] = 0;
        for (int k = 0; k < c; k++)
        {
          result[i][j] += arr1[i][k] * arr2[k][j];
        }
      }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        printf("%d ", result[i][j]);
      }
      printf("\n");
    }
  }

  return 0;
}