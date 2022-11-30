#include<stdio.h>
int main()
{
  int i,k,j,b=1;
  for(i=1;i<=10;i++)
    {
      for(k=1;k<=10-i;k++)
      {printf(" ");}

      for(j=b;j<b+2*i-1;j++)
        { printf("%d",j);
          
          }
      b=b+2*i-1;
      printf("\n");
    }
  return 0;
}