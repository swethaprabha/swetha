#include <stdio.h>

int main(int argc, char *argv[])
{
	int a,b,c;
	int max=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		max=a;
	if(b>a&&b>c)
		max=b;
	if(c>a&&c>b)
		max=c;
	printf("%d\n",max);
	
	return 0;
}
