/*
15.WAP to take a matrix  and find kth maximum number?
Input:
12 21 35
76 10 8
K=3
Output:
3rd max=35
*/
#include<stdio.h>

// Matrix input function
void inputsMatrix(int r, int c, int mat[][c])
{
  printf("Enter The elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &mat[i][j]);
    }
  }
}
void checkMax(int r,int c,int mat[][c]){
  int totalElements = r*c;
  int temp[totalElements];
  int index = 0;
  for(int i = 0; i < totalElements-1; i++){
    for(int j = 0; j < totalElements-i-1;j++){
      if(temp[j] < temp[j+1]){
        int swap = temp[j];
        temp[j] = temp[j+1];
        temp[j+1] = swap;
      }
    }
  }
  for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            temp[index++] = mat[i][j];
             printf("%d",mat[i][j]);
        }
    }
}
int main()
{
  int row, col;
  printf("Enter the size of row And colomns:\n");
  scanf("%d %d", &row, &col);
  int mat[row][col]; // Declaring matrix
  inputsMatrix(row, col, mat); // Taking input
  int k;
  printf("Enter the kth maximum number: ");
  scanf("%d",&k);
  checkMax(row,col,mat);
  return 0;
}