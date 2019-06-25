#include "holberton.h"
/**
 * jack_bauer - print every minute of the day
 *
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int hh = 0;
	int mm = 0;

	while (h < 3)
	{
		while (hh < 10)
		{
			while (m < 6)
			{
				while (mm < 10)
				{
					if (!(h == 2 && hh >= 4))
					{
					_putchar(h + '0');
					_putchar(hh + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(mm + '0');
					_putchar('\n');
					}
					mm++;
				}
				mm = 0;
				m++;
			}
			m = 0;
			hh++;
		}
		hh = 0;
		h++;
	}
}
