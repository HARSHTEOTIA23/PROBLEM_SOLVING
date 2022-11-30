#include<stdio.h>
int main()
{ int i,j;
  char a=69;
  char b=a;
  for(i=1;i<=5;i++)
    {b=a;
      for(j=1;j<=i;j++)
      { printf("%c",b);
        b=b+1;}
      printf("\n");
      a=a-1;
    }
  return 0;
}