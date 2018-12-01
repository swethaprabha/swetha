#include <stdio.h>

int main(int argc, char *argv[])
{
	char n;
	scanf("%c",&n);
	if(n>='a'&&n<='z'||(n>='A'&&n<='Z'))
	{
		if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
			printf("Vowel\n");
		else
			printf("Consonant\n");
	}
	else
		printf("Invalid\n");
	
	return 0;
}
