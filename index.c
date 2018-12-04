#include<stdio.h>
int main()
{
    int n,i,t,k=0,j;
    scanf("%d",&n);
    int a[n],te[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            te[k]=a[i];
            
            k++;
        }
    }
   
    if(k==0)
    printf("-1");
   
    else
    {
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(te[i]>te[j])
            {
                t=te[i];
                te[i]=te[j];
                te[j]=t;
                
            }
        }
    }
    
    for(i=0;i<k;i++)
    printf("%d ",te[i]);
}
    return 0;
}