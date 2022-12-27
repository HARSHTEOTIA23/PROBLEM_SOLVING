#include<stdio.h>
int main()
{int a,z,i,n[1000],j=0;
  printf("enter the no of elements\n");
 scanf("%d",&a);
  printf("enter the elements\n");
  for(i=0;i<a;i++)
    {
      scanf("%d",&n[i]);
    }
  while(j<a)
    {
      z=n[j];
      n[j]=n[j+1];
      n[j+1]=z;
      j=j+2;
    }
  for(i=0;i<a;i++)
    {
  printf("%d ",n[i]);}
  return 0;
  }