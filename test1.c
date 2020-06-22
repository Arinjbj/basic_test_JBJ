#include <stdio.h>

int main()
{
	char sample[30];
	scanf("%[^\n]s", sample);

	printf("Hello, World!\n");
	printf("%s", sample);
	return 0;
}
