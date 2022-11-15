#include<stdio.h>
int main()
{ int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},i,j,row,r,b[4][4],t;
  for(i=0;i<4;i++){
    
  printf("\n");
    for(j=0;j<4;j++)
      {
        printf("\t%d",a[i][j]);
      }}
    printf("\n");
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      {
        b[j][i]=a[i][j];
      }
  for(i=0;i<4;i++){
    printf("\n");
    for(j=0;j<4;j++)
      {
      printf("%d\t",b[i][j]);
        
      }}
  for(r=0;r<4;r++)
    {   row=r;
      i=0;
      j=3;
      while(i<j)
        {
            t=b[row][i];
             b[row][i]=b[row][j];
              b[row][j]=t;
          i++;
          j--;
          
          }}
        

printf("\n");
  for(i=0;i<4;i++){
    printf("\n");
    for(j=0;j<4;j++)
      {
       printf("%d\t",b[i][j]);
      }    

    }
    
return 0;
}