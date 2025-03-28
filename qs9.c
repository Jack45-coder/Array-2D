/*
9.WAP to print the transpose of a matrix. The transpose of a matrix is found by
interchanging its rows into columns or columns into rows.
Input:
1 2 3
4 5 6
Output:
1 4
2 5
3 6
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
void transposeMatrix(int r,int c, int mat[][c]){
  printf("Your transpose matrix is:\n");
  for(int i = 0;i < c;i++){
    for(int j = 0; j < r; j++){
      printf("%d  ",mat[j][i]);
    }
    printf("\n");
  }
}
int main()
{
  int r, c;
  printf("Enter the size of row nd colomns:\n");
  scanf("%d %d",&r,&c);
  int mat[r][c];
  inputsArr(r,c,mat);
  transposeMatrix(r,c,mat);

  return 0;
}