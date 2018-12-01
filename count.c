#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	int c=0;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n%10;
		c++;
	}
	printf("%d",c);
	return 0;
}
