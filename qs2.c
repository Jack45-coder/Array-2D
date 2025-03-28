/*
  2.wap to take input in 2d array and find the sum of all element ?
  Input :
  row=2, column=3.
  5 6 7 8 2 1
  Output :
  Sum= 29

*/
#include <stdio.h>

int main()
{
  int r, c;
  int sum = 0;
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
      sum+=arr[i][j];
    }
  }
  printf("%d",sum);

  return 0;
}