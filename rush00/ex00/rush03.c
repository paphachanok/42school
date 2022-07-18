#include <unistd.h>

void	ft_putchar(char c);

void	format(int x, int y, int maxx, int maxy)
{
	if (y == 1 || y == maxy)
	{
		if (x == maxx)
			ft_putchar('A');
		else if (x == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (x == 1 || x == maxx)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush03(int x, int y)
{
	int	maxx;
	int	maxy;

	maxx = x;
	maxy = y;
	while (y >= 1)
	{
		while (x > 0)
		{
			format(x, y, maxx, maxy);
			x--;
		}
		ft_putchar('\n');
		x = maxx;
		y--;
	}
}
