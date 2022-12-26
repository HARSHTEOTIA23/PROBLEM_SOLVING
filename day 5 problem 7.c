#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[100],n,i=0,j,temp;
  printf("enter the no. of elements ");
  printf("\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
  scanf("%d",&a[i]);
          }
  i=0;
  j=n-1;
  while(i<j)
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      i=i+1;
      j=j-1;
          }
  printf("the reversed linked list is\n");
  
  for(i=0;i<n;i++)
    {
  printf("%d\n",a[i]);
          }
  return 0;
  
}