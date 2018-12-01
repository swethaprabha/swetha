#include <stdio.h>

int main(int argc, char *argv[])
{
	int n;
	scsnf("%d",&n);
	if(n>0)
	{
		if(n%2==0)
			printf("Even\n");
		else
			printf("Odd\n");
	}
	else
		printf("Invalid\n");
	
	return 0;
}
