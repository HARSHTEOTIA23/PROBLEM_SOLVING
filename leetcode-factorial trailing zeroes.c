#include<stdio.h>
int main()
{ int n,i,m1,n1,sum;
printf("enter the no.\n");
scanf("%d",&n);
m1=n/5;
n1=m1;
sum=0;
while(m1!=0)
{ m1=m1/5;
 sum=sum+1;

}
printf("the no. factorial trilling zeroes is %d",n1+sum-1);
return 0;
}