#include "search_algos.h"

/**
 * binary_search - binary search alogrithm
 *
 * @array: pointer from type int that points to the array
 * @size: size of the array
 * @value: the value we will search for
 *
 * Return: index of the value we want, -1 on fail
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size, mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (low != high)
		{
			printf("Searching in array: ");
			for (i = low; i < high; i++)
			{
				if (i == high - 1)
				{
					printf("%d", array[i]);
					break;
				}
				printf("%d, ", array[i]);
			}
			printf("\n");
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
	}
	if (array[mid] == value)
		return (mid);
	return (-1);
}
