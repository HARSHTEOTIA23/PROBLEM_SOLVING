#include<stdio.h>
#include<math.h>
int factorial(int x)
{
    if(x==0)
      return 1;
  else{if(x==1)
  {return 1;}
    else{ return x*factorial(x-1);}}
}
int main()
{
  int n,x,f,i;
  float sum=0;
  printf("enter the no. of terms\n");
  scanf("%d",&n);
  printf("enter the no.\n");
  scanf("%d",&x);
  for(i=1;i<n;i++)
    {f=factorial(i);
      if(i%2==0)
      {
      sum=sum+(pow(x,i))/f;}
      else{  sum=sum-(pow(x,i))/f;}
    }
  sum=sum+1;
  printf("\n%f",sum);
  return 0;
    }