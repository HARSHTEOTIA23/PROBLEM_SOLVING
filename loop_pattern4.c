#include<stdio.h>
int main()
{   int i=1;
  char a;
  for(i=1;i<=4;i++)
    {
      for(a=96+i;a<(96+2*i);a++)
        {printf("%c",a);}
      printf("\n");
    }
  return 0;
}