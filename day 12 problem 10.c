#include<stdio.h>
int main()
{
  int n,a[1000],i,j;
  printf("enter the no. of elements\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  i=n-1;
  while(i!=0)
    {
      if(a[i]==a[i-1])
      {
        break;
      }
      else{i=i-1;}
    }
  printf("\n");
  printf("the last index is %d and the element is %d",i,a[i]);
  return 0;
}