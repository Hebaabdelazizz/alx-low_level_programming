#include <stdio.h>

/**
 * main - Entry point
 * Desc:  rogram that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2, followed
 * by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long prev, next, ans;
	unsigned long prev_half1, prev_half2, next_half1, next_half2;
	unsigned long half1, half2;
	int i;

	i = 1;
	prev = 1;
	next = 2;
	printf("%lu, %lu, ", prev, next);
	while (i <= 90)
	{
		ans = prev + next;
		prev = next;
		next = ans;
		printf("%lu, ", ans);
		i++;
	}
	prev_half1 = prev / 10000000000, next_half1 = next / 10000000000;
	prev_half2 = prev % 10000000000, next_half2 = next % 10000000000;
	for (i = 91; i < 97; i++)
	{
		half1 = prev_half1 + next_half1;
		half2 = prev_half2 + next_half2;
		if (half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 96)
			printf(", ");
		prev_half1 = next_half1;
		prev_half2 = next_half2;
		next_half1 = half1;
		next_half2 = half2;
	}
	printf("\n");
	return (0);
}
