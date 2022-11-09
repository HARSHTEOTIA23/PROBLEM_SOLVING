#include<stdio.h>
int main()
{  int a,b,k,i;
printf("enter the base,power,and position from right\n");
  scanf("%d%d%d",&a,&b,&k);
  long long pow=1,m;
  for(i=0;i<b;i++)
  {
    pow=pow*a;
  }
  printf("%lld\n",pow);
for(i=1;i<=k;i++)
{
    m=pow%10;
  pow=pow/10;
}
printf("\n");
printf("%lld",m);
return 0;
}