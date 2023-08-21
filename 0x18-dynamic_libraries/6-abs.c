#include "main.h"
/**
 * _abs -  a function that computes the absolute value of an integer
 * @number: Number to compute
 * Return: absolute value of an integer
 */
int _abs(int number)
{
	return (number * ((number > 0) - (number < 0)));
}
