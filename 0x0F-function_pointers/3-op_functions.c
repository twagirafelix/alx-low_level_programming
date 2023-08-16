#include "3-calc.h"
/**
 * op_add - adds two numbers.
* op_sub - subctracts two numbers.
* op_mul - multiplies two numbers.
*op_div - divides two numbers.
*op_mod - calculates the module of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */
int (*get_op_func(char *s))(int, int)

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}
