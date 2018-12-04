#include <stdio.h>
int main()
{
 int n,i,j,t,c=0;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
     for(j=i+1;j<n;j++)
     {
         if(a[i]<a[j])
         {
             t=a[i];
             a[i]=a[j];
             a[j]=t;
         }
     }
 }

 for(i=0;i<n;i++)
 {
     if(a[i]==0)
     c++;
 }
 if(c==n)
 printf("0");
 else
 for(i=0;i<n;i++)
 printf("%d",a[i]);
	return 0;
}
