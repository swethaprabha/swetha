#include <stdio.h>

int main(int argc, char *argv[])
{
	int n,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
          sum+=n;
		  n--;
	}
	printf("%d",sum);
	return 0;
}
