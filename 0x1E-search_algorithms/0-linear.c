#include "search_algos.h"

/**
 * linear_search - linear search alogrithm
 *
 * @array: pointer from type int that points to the array
 * @size: size of the array
 * @value: the value we will search for
 *
 * Return: index of the value we want, -1 on fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !value || !size)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		array++;
	}
	return (-1);
}
