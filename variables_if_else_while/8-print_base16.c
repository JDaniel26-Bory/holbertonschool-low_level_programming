#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers of base 16
 * Return: Zero value
 */

int main(void) {

	char a;
	char b;

	for(a = '0'; a <= '9'; a++)
		putchar(a);
	for(b = 'a'; b <= 'f'; b++)
		putchar(b);
    	putchar('\n');
    	return 0;
}
