#include <stdlib.h>

/**
 * **alloc_grid - dynamically create ad array
 * and initialize each element to zero
 * @width: no. of columns
 * @height:
 * no. of rows
 *
 * Return: pointer to 2d array or NULL if failure occur
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int index, i, j;

	if (width <= 0 || height <= 0)
		return (0);
	a = (int **)malloc(size(int *) * height);
	if (a == 0)
	{
		free(a);
		return (0);
	}
	for (index = 0; index < height; index++)
	{
		*(a + index) = (int *)malloc(sizeof(int) * width);
		if (*(a + index) == 0)
		{
			for (i = 0; i < index; i++)
				free(*(a + i));
			free(a);
			return (0);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(a + i) + j) = 0;
	}
	return (a);
}
