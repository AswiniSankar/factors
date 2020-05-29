#include<stdio.h>
void fact(int,int*);
int main()
{
  int a[10],n,i;
  printf("enter the limit\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  fact(n,a);

   return 0;
}

void fact(int n,int *a)
{
  int i,b[10],j,c=0,t,t1;
  for(i=0;i<n;i++)
  {  c=0;
     for(j=1;j<=a[i];j++)
     { 
         if(a[i]%j==0)
         {
            c++;
         }
     }
     b[i]=c;
  }
  /*for(j=0;j<n;j++)
   printf("%d ",b[j]);
  printf("\n");*/
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(b[i]==b[j])
      {
           if(a[i]<a[j])
            {t=a[i];
             a[i]=a[j];
             a[j]=t;
             t1=b[i];
             b[i]=b[j];
             b[j]=t1;
            }
      }
       if(b[i]<b[j])
        {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                t1=b[i];
                b[i]=b[j];
                b[j]=t1;
        }
     }
  }
   for(i=0;i<n;i++)
   printf("%d ",a[i]);
  printf("\n");
  
}



