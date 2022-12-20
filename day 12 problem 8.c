#include<stdio.h>
int main()
{
  int a[500],i=0,j,n,x;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("enter the value\n");
  scanf("%d",&x);
  i=0;
  while(a[i]!=x)
    {i=i+1;}
   j=i+1;
  while(a[j]==x)
    {
      j=j+1;
    }
  j=j-1;
  printf("the starting index is %d\n",i+1);
  printf("the ending index is %d",j+1);
  return 0;
}