
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int *array;
	int size;
	int i;

	size = end - start + 1;
	if (size < 0)
		size *= -1;
	array = malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	
	return (array);
}
