#include <unistd.h>

void	ft_putchar(char c);

void	format(int x, int y, int maxx, int maxy)
{
	if (y == maxy)
	{
		if (x == maxx)
			ft_putchar('/');
		else if (x == 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (y == 1)
	{
		if (x == maxx)
			ft_putchar('\\');
		else if (x == 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (x == 1 || x == maxx)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush01(int x, int y)
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
