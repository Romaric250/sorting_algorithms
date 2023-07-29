#include "sort.h"

/**
 * swap - Swap values.
 * @array: array
 * @start: start point hmm
 * @min: value to swap with start point.
 * Return: nothing oops.
 */
void swap(int *array, size_t start, size_t min)
{
	int a, b;

	a = array[start];
	b = array[min];

	array[start] = b;
	array[min] = a;
}

/**
 * selection_sort - sort an anar of integers n.
 * @array: the array to be sorted
 * @size: array size
 * Return: nothing oops
 */
void selection_sort(int *array, size_t size)
{
	size_t index = 0, start = 0, min = 0;

	if (!array || size < 2)
		return;

	while (start < size)
	{
		min = start;
		index = start + 1;
		while (index < size)
		{
			if (array[index] < array[min])
				min = index;
			index++;
		}
		if (min != start)
		{
			swap(array, start, min);
			print_array(array, size);
		}
		start++;
	}
}
