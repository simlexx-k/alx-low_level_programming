/**
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of addition
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of subtraction
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of multiplication
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - Divides two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: Result of division, or 0 if division by zero
 */
int div(int a, int b)
{
    if (b == 0)
        return (0); /* Avoid division by zero */

    return (a / b);
}

/**
 * mod - Computes the modulus of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of modulus operation, or 0 if second integer is 0
 */
int mod(int a, int b)
{
    if (b == 0)
        return (0); /* Avoid modulo by zero */

    return (a % b);
}

