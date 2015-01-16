#include <stdio.h>

int main() 
{
	int space, tab, newline;
	char c;

	space = 0;
	tab = 0;
	newline = 0;

	/* If this is used to input via keyboard, the way to send the EOF signal is ^D aka Ctrl D */ 
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++space;
		if (c == '\t')
			++tab;
		if (c == '\n')
			++newline;
	}
	printf("Space: %d Tab: %d Newline: %d\n", space, tab, newline);
	return 0;
}
