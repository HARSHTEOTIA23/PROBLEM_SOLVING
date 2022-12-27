#include<stdio.h>
int main()
{int a,z,i,n[1000],j=0;
  printf("enter the range\n");
  printf("enter the start\n");
  scanf("%d",&a);
  printf("enter the ending\n");
    scanf("%d",&z);
  for(i=a;i<=z;i++)
    {
      if(i%2!=0)
      {n[j]=i;
        j=j+1;}
    }
  for(i=z;i>=2;i--)
    {
      if(i%2==0)
      {n[j]=i;
        j=j+1;}
    }
  for(i=0;i<z-a+1;i++)
    {
      printf("%d ",n[i]);
    }
  return 0;
  }