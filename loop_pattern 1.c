#include<stdio.h>
int main()
{int i=1,j=1;
  for(i=1;i<=4;i++)
    { for(j=i;j<2*i;j++)
      {printf("%d",j);}
      printf("\n");
      }
  return 0;
}