TASK 0) 98 Battery st, Write a function that takes a pointer to an int as parameter and updates the value it points to to 98. Prototype: void reset to 98(int *n)

TASK 1) Don't swap horses in crossing a stream, Write a function that swaps the values of two integers. Prototype: void swap_int(int *a, int *b);

TASK 2) This report, by its very length, defends itself against the risk of being read, Write a function that returns the length of a string. Prototype: int _strlen(char *s);

TASK 3) I do not fear computers. I fear the lack of them, Write a function that prints a string, followed by a new line, to stdout. Prototype: void _puts(char *str);

TASK 4) I can only go one way. I've not got a reverse gear, Write a function that prints a string, in reverse, followed by a new line. Prototype: void print_rev(char *s);

TASK 5) A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes , Write a function that reverses a string. Prototype: void rev_string(char *s);

TASK 6) Half the lies they tell about me aren't true, Write a function that prints every other character of a string, starting with the first character, followed by a new line. Prototype: void puts2(char *str);

TASK 7) Winning is only half of it. Having fun is the other half, Write a function that prints half of a string, followed by a new line. Prototype: void puts_half(char *str); The function should print the second half of the string If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

TASK 8) Arrays are not pointers, Write a function that prints n elements of an array of integers, followed by a new line.
Prototype: void print_array(int *a, int n); where n is the number of elements of the array to be printed Numbers must be separated by comma, followed by a space The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf 

TASK 9) strcpy, Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest. Reiturn value: the pointer to dest FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

TASK 10) Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers, Write a function that convert a string to an integer. Prototype: int _atoi(char *s); The number in the string can be preceded by an infinite number of characters You need to take into account all the - and + signs before the number
If there are no number in the string, the function must return 0 You are not allowed to use long You are not allowed to declare new variables of ???type??? array You are not allowed to hard-code special values We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code. FYI: The standard library provides a similar function: atoi. Run man atoi to learn more. 

TASK 0) 0. strcat Write a function that concatenates two strings. Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte Returns a pointer to the resulting string dest
FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

TASK 1) 1. strncat, Write a function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest
FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

TASK 2) strncpy, Write a function that copies a string. Prototype: char *_strncpy(char *dest, char *src, int n);
Your function should work exactly like strncpy FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.

TASK 3) strcmp, Write a function that compares two strings. Prototype: int _strcmp(char *s1, char *s2);
Your function should work exactly like strcmp. FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.

TASK 4) I am a kind of paranoid in reverse. I suspect people of plotting to make me happy, Write a function that reverses the content of an array of integers. Prototype: void reverse_array(int *a, int n); Where n is the number of elements of the array

