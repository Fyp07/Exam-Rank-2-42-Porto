
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int swapped = 1;

	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				swapped = 1;
			}
			i++;
		}	
	}
}

int main()
{
	int i = 0;
	int tab[] = {7, 2, 8, 1, 5};
	int len = 5;

	while (i < len)
		printf("%d ", tab[i++]);
	printf("\n");
	sort_int_tab(tab, len);
	i = 0;
	while (i < len)
		printf("%d ", tab[i++]);
	return (0);
}