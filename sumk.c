#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,k,sum=0,i;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		sum+=a[i];
	}
	printf("%d\n",sum);
	return 0;
}
