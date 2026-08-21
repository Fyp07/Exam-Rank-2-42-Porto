
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int *array;
	int size;
	int i;

	size = end - start + 1;
	if (size < 0)
		size *= -1;
	i = 0;
	array = malloc(size * sizeof(int));
	if (start < end)
	{
		while (end >= start)
		{
			array[i] = end;
			end --;
			i++;
		}
	}
	else if (start > end)
	{
		while (end <= start)
		{
			array[i] = end;
			end++;
			i++;
		}	
	}
	return (array);
}
