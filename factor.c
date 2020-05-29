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
/*
#include<stdio.h>
#include<math.h>
void factor(int);
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
factor(n);
return 0;
}
void factor(n)
{
  int i;
  while(n%2==0)
 {
   printf("%d ",2);
   n=n/2;
 }
  if(n>0)
  {
  for(i=3;i<=sqrt(n);i=i+2)
  {
       while(n%i==0)
       {
      printf("%d ",i);
        n=n/i;
       }
  }
  if(n>2)
     printf("%d ",n);
  }
}*/
