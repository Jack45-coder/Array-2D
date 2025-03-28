/*
6.WAP to take a input and count that number present in a matrix?
Input:
1 2 3
3 4 5
K=3
Output :
Count=2
*/
#include <stdio.h>
void inputsArr(int r, int c, int mat[][c]){
  printf("Enter the elements:\n");
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      scanf("%d",&mat[i][j]);
    }
  }
}
int targetCheck(int r, int c, int mat[][c]){
  int k;
  int count = 0;
  printf("Enter the K: ");
  scanf("%d",&k);
   for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      if(mat[i][j] == k){
        count++;
      }
    }
   }
   printf("%d",count);
   return count;
}
int main(int argc, char const *argv[])
{
  int r, c;
  printf("Enter the size of row nd colomns:\n");
  scanf("%d %d",&r,&c);
  int mat[r][c];
  inputsArr(r,c,mat);
  targetCheck(r,c,mat);

  return 0;
}