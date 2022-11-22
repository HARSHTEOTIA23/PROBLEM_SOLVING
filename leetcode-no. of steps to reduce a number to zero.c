#include<stdio.h>
int main()
{
int n,i=0;
printf("enter the no.\n");
scanf("%d",&n);
while(n!=0)
{
if(n%2==0)
{
    n=n/2;
    i=i+1;
}
else{
    n=n-1;
    i=i+1;
}
}
printf("the no. of steps to reduce the no. to zero is %d",i);
return 0;
}