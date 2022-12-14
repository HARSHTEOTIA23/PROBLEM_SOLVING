#include<stdio.h>
int pattern(int n)
{
  return n*(n+1)*(n+2);
}
int main()
{
  int n,sum=0,m,i;
  printf("enter the no. of terms\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { m=pattern(i);
      sum=sum+m;
          }
  printf("\n%d",sum);
  return 0;
}