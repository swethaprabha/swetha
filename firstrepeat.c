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
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]&&a[i]!='*')
            {
                a[j]='*';
                c++;
            }
        }
        if(c>0)
        {
            t=1;
            printf("%d",a[i]);
            break;
        }
    }
    if(t==0)
    printf("unique\n");
    return 0;
}