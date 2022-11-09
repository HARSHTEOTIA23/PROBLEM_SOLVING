#include<stdio.h>
#include<math.h>
int main()
{ int a,b,c;
float d;
float x1,x2,x3,x4;
printf("enter the value of a ,b,c\n");
scanf("%d%d%d",&a,&b,&c);
d=(b*b-4*a*c);
if(d>0)
{
    printf("roots are real and distict\n");

}
else{
    if(d<0)
    {printf("imaginery and distict\n");
}
else{
    printf("equal roots\n");
}

}

if(d>0)
{
   x1=(-b+sqrt(d))/(2*a); 
   x2=(-b-sqrt(d))/(2*a); 
   printf("roots are %f %f",x1,x2);

}
else{
    if(d==0)
    {
x1=-(b)/(2*a);
x2=x1;
 printf("roots are %f %f",x1,x2);

}
else{
    x3=(b)/(2*a);
    d=d*-1;
    x1=(sqrt(d))/(2*a);
    x4=x3;
    x2=x1;
    printf("-%f + %fi\n",x3,x1);
     printf("-%f - %fi",x4,x2);
}

}

return 0;
}