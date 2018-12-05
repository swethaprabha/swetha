#include<stdio.h>
int main()
{
    int n,i,j,c=0,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(j=0;j<n;j++)
        {
             if(j%2==0)
             {
                 if(a[j]%2!=0)
                 printf("%d ",a[j]);
             }
             else
             {
                 if(a[j]%2==0)
                 printf("%d ",a[j]);
             }
        }
    
    return 0;
}