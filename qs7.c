/*
7.WAP to take a input from user and find at which index that number is present in
the matrix?
Input:
8 6 1
4 2 5
K=6
Output :
6 present on [0,1].
Input:
8 6 1
4 2 5
K=12
Output :
12 not present.
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
int checkElements(int r, int c, int mat[][c])
{
  int elements;
  int found = 0;
  printf("Enter the elements: ");
  scanf("%d", &elements);
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (mat[i][j] == elements)
      {
        printf("%d elements found at index %d %d\n",elements ,i, j );
        found = 1;
        break;
      }
    }
  }
  if (!found)
  {
    printf("%d elements was not found!", elements);
  }
}
int main()
{
  int r, c;
  printf("Enter the size of row nd colomns:\n");
  scanf("%d %d", &r, &c);
  int mat[r][c];
  inputsArr(r, c, mat);
  checkElements(r, c, mat);
  return 0;
}