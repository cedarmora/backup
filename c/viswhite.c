#include <stdio.h>

int main() 
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		/* Having trouble inputting '\b'*/
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else 
			putchar(c);
	}
}
