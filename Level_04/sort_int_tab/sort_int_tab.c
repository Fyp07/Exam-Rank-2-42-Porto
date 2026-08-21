
#include <stdio.h>

int	is_sorted(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;

	while (!is_sorted(tab, size))
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				swap(&tab[i], &tab[i + 1]);
			i++;
		}
	}
}

// int main()
// {
// 	int i = 0;
// 	int	tab[] = {1, 2, 7, 4, 5};
	
// 	printf("Antes: ");
// 	while (i < 5)
// 	{
// 		printf("%d", tab[i++]);
// 		if (i != 5)
// 			printf(" -> ");
// 	}
// 	sort_int_tab(tab, 5);
// 	i = 0;
// 	printf("\nDepois: ");
// 	while (i < 5)
// 	{
// 		printf("%d", tab[i++]);
// 		if (i != 5)
// 			printf(" -> ");
// 	}
	
// 	printf("\n");
// 	return (0);
// }