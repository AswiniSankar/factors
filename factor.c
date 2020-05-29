#include<stdio.h>
int main()
{
int n,i,c=0,k;
scanf("%d",&n);

for(k=2;k<=n;k++)
{
   if(n%k==0)
   {
    c=1;
     //printf("%d ",i);
    for(i=2;i<=k/2;i++)
     {
  
      if(k%i==0)
       { c=0;
          break;
       }
     }
  if(c==1)
    {printf("%d ",k);
      
   }
   
      
  }
   
}

printf("\n");
return 0;
}
