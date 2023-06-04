0x08. C - Recursin

Repo:

GitHub repository: alx-low_level_programming
Directory: 0x08-recursion

0. Write a function that prints a string, followed by a new line.

Prototype: void _puts_recursion(char *s);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.
File: 0-puts_recursion.c

1. Write a function that prints a string in reverse.

Prototype: void _print_rev_recursion(char *s);
File: 1-print_rev_recursion.c

2. Write a function that returns the length of a string.

Prototype: int _strlen_recursion(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
File: 2-strlen_recursion.c

3. Write a function that returns the factorial of a given number.

Prototype: int factorial(int n);
If n is lower than 0, the function should return -1 to indicate an error
Factorial of 0 is 1
File: 3-factorial.c

4. Write a function that returns the value of x raised to the power of y.

Prototype: int _pow_recursion(int x, int y);
If y is lower than 0, the function should return -1
FYI: The standard library provides a different function: pow. Run man pow to learn more.
File: 4-pow_recursion.c

5. Write a function that returns the natural square root of a number.

Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1
FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.
File: 5-sqrt_recursion.c

6. Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

Prototype: int is_prime_number(int n);
File: 6-is_prime_number.c
7. Write a function that returns 1 if a string is a palindrome and 0 if not.

Prototype: int is_palindrome(char *s);
An empty string is a palindrome
File: 100-is_palindrome.c

8. Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

Prototype: int wildcmp(char *s1, char *s2);
s2 can contain the special character *.
The special char * can replace any string (including an empty string)
File: 101-wildcmp.c