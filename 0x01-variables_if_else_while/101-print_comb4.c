#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers mu8st be separated by ,, followed by a space
 * The two digits must bedifferent
 * 01 and 10 are considered the same combination of thew two digits 0 and 1
 * prints only the smallest combination of the two digits
 * Number must be bprinted in ascending order, with two digits
 * you can only use the putchar function
 * (every other fuction is forbidden
 * you can only use putchar five times maximum in your code
 * you are not allowed to use any variable of type char
 * All yor code should be in the same function
 * Return:0
 */
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{

		d = 0;
		while (d < 10)
		{

			c = 0;
			while (c < 10)
			{
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');

					}

				}

				c++;

			}
			d++;

		}
		e++;

	}
	putchar('\n');
	return (0);

}
