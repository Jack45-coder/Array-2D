/*
  3.wap to take input in 2d array and find the multiply of all element ?
  Input :
  row=2, column=2.
  3 2 4 1
  Output :
  Multiple= 24.

*/
#include <stdio.h>


int main()
{
   int r, c;
  int multi = 1;
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
for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      multi*=arr[i][j];
    }
  }
  printf("%d",multi);

  return 0;
}