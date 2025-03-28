/*
  1.WAP to take row and column from user and take input and print matrix?
  Input :
  row=2, column=3.
  5 6 7 8 2 1
  Output :
  5 6 7
  8 2 1
*/
#include <stdio.h>
int main()
{
  int r, c;
  printf("Enter the Size of Row nd Colomns:\n");
  scanf("%d %d", &r, &c);
  int arr[r][c];

  printf("Enter the Elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("Your matrix here\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}