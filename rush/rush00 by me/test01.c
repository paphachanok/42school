#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush00(int x, int y)
{
	int	maxx;
	int	maxy;

	maxx = x;
	maxy = y;
	while (y >= 1)
	{
		while (x > 0)
		{
			if (y == 1)
			{
				if (x == 1)
					ft_putchar('/');
				else if (x == maxx)
					ft_putchar('\\');
				else
					ft_putchar('*');
			}
			else if (y == maxy)
			{
				if (x == 1)
					ft_putchar('\\');
				else if (x == maxx)
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
		x--;
		}
		ft_putchar('\n');
	x = maxx;
	y--;
	}
}

int	main(void)
{
	rush00(5, 5);
	//rush00(5, 3);
	//rush00(5, 1);
	//rush00(1, 1);
	//rush00(1, 5);
	//rush00(10, 10);
}
