#include <stdio.h>

int main()
{
    int i,j,c=0,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]&&a[i]!='*')
            {
                a[j]='*';
                c++;
            }
        }
        if(c==1)
        {
            printf("%d\n",a[i]);
            break;
        }
        
    }
    
    return 0;
}