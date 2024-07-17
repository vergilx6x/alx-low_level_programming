#include "search_algos.h"

/**
 * print_array - prints the given array.
 *
 * @array: Array of integers.
 * @left: smalletst index of the array.
 * @right: largest index of the array.
 * Return: Nothing.
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i == right)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * binary_search - searches for a value in an array
 * using the Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	int  m, left = 0, right = (size - 1);

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);

		m = left + (right - left) / 2;
		if (value == array[m])
			return (m);
		else if (value > array[m])
			left = m + 1;
		else if (value < array[m])
			right = m - 1;
	}

	return (-1);
}
