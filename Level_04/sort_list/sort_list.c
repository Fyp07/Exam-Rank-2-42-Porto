
typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int tmp;
	int swapped = 1;
	t_list *node;

	while (swapped)
	{
		swapped = 0;
		node = lst;
		while (node && node->next)
		{
			if (cmp(node->data, node->next->data) == 0)
			{
				tmp = node->data;
				node->data = node->next->data;
				node->next->data = tmp;
				swapped = 1;
			}
			node = node->next;
		}
	}
	return (lst);
}