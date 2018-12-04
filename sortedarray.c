#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,i,c=0,k=0,t;
    scanf("%d",&n);
	int a[n],temp[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]!='*'&&a[i]==a[j])
			{
				a[j]='*';
				c++;
			}
		}
		if(c!=0&&a[i]!='*')
		{
			te[k]=a[i];
			k++;
		}
	}
	if(k==0)
		printf("unique");
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
