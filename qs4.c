/*
4.WAP to calculate the sum of two matrices?
Input:
1 2   5 6
3 4   7 8
Output :
6  8
10 12
*/
#include <stdio.h>
void inputsMatrix(int r, int c, int arr[][c])
{
  printf("Enter the elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
void sumOfTwoMatrix(int r, int c, int arr[][c], int arr2[][c], int sumofmat[][c])
{
  printf("Sum of two matrix:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      sumofmat[i][j] = arr[i][j] + arr2[i][j];
      printf("%d ", sumofmat[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int r, c;
  printf("Enter the Size of Row nd Colomns:\n");
  scanf("%d %d", &r, &c);
  int arr[r][c];
  inputsMatrix(r, c, arr);
  int arr2[r][c];
  inputsMatrix(r, c, arr2);
  int sumofmat[r][c];
  sumOfTwoMatrix(r, c, arr, arr2, sumofmat);
  return 0;
}