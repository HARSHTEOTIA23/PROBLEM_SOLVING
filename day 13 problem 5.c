#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{int n,a[100000],b[100000],d,i,j,k=0,c[100000],m,l;
scanf("%d ",&n);
scanf("%d",&d);
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}
i=0;
for(i=0;i<d;i++)
{
   b[i]=a[i];
}
for(j=d;j<n;j++)
{
    c[k]=a[j];
    k=k+1;
}
for(i=0;i<k;i++)
{
    a[i]=c[i];
}
l=0;
for(m=i;m<n;m++)
{
    a[m]=b[l];
    l=l+1;
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
return 0;
}