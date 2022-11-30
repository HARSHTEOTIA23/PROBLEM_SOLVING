#include<stdio.h>
int main()
{int i=1,j=1,k;
  for(i=1;i<=4;i++)
    {for(k=1;k<=4-i;k++)
      {
        printf(" ");
      }
      for(j=i;j<2*i;j++)
      {   printf("%d ",j);}
      printf("\n");
      }
  return 0;
}