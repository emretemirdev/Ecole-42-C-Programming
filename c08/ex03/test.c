#include "ft_point.h"
#include <stdio.h>

void	s_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main()
{
	t_point	point;

	s_point(&point);
	printf("%d\n", point.y);
	printf("%d\n", point.x);
	return(0);
}
