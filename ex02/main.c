int ft_ultimate_range(int **range, int min, int max);
#include <stdio.h>

int	main()
{
	int min;
	int max;
	int **range;
	int size;
	int i;

	min = 23;
	max = 56;
	**range = NULL;
	size = ft_ultimate_range(**range, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d\n", *range[i]);
		i++;
	}
	return (0);
}
