#include<stdio.h>
int main()
{ int i=1,j,m,k;
  
         for(i=1;i<=4;i++)
           {  for(m=1;m<=4-i;m++)
             {printf(" ");}
             for(j=i;j<=(2*i-1);j++)
               {
                 if(j>0)
                 {printf("%d",j);}
                   }
            
               if(i>1)
               {
                 for(k=j-2;k>=i;k--)
                   {printf("%d",k);}
               }
             printf("\n");
           }
       
 return 0;  
  }