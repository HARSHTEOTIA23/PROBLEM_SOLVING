#include<stdio.h>
int main()
{   int i=1,j;
  char a=65;
  for(i=1;i<=3;i++)
    { 
      for(j=1;j<=i;j++)
      {printf("%c",a);}
      printf("\n");
      a=a+1;
    }
  return 0;
}