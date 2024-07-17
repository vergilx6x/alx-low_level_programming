#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else if (array[i] != value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}
	}

	return (-1);
}
