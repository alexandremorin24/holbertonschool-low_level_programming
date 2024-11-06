#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *  is_prime_number - checks if a number is a prime number
 * @n: the integer to check for primality
 * @i: the current divisor being tested
 *
 * Description: This function uses recursion to determine if the integer `n`
 * is a prime number. It calls a helper function that checks divisibility
 * starting from the smallest divisor.
 *
 * Return: 1 if `n` is prime, 0 otherwise
 */

int prime_number_helper(int n, int i);

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	if (n % 2 == 0)
		return (0);

	return (prime_number_helper(n, i));
}

/**
 * prime_number_helper - recursive helper function for is_prime_number
 * @n: the integer to check
 * @i: the current divisor being tested
 *
 * Description: This function checks if `n` is divisible by `i` or any integer
 * less than or equal to the square root of `n`. If a divisor is found,
 * it returns 0, indicating that `n` is not prime. If no divisors are found
 * and the base case is reached, it returns 1, indicating that `n` is prime.
 *
 * Return: 1 if `n` is prime, 0 otherwise
 */

int prime_number_helper(int n, int i)
{
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (prime_number_helper(n, i + 1));

	return (1);
}
