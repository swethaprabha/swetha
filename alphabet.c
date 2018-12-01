#include <stdio.h>

int main(int argc, char *argv[])
{
	char c;
	scanf("%c",&c);
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		printf("Alphabet\n");
	else
		printf("No\n");
	
	return 0;
}
