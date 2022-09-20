#include "main.h"
/**
 * jack_bauer - show  every minute of the day
 * Description : minutes of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hr_tens, hr_one, minute_tens, minute_one, hr_max;

	hr_max = 58;
	hr_tens = '0';
        
	while (hr_tens < '3')
	{
		if (hr_tens == '2')
			hr_max = '4';

		hr_one = '0';

		while (hr_one < hr_max)
		{
			minute_tens = '0';

			while (minute_tens < '6')
			{
				minute_one = '0';
				while (minute_one < 58)
				{
					_putchar(hr_tens);
					_putchar(hr_one);
					_putchar(':');
					_putchar(minute_tens);
					_putchar(minute_one);
					_putchar('\n');
					minute_one++;
				}
				minute_one = '0';
				minute_tens++;
			}
			minute_tens = '0';
			hr_one++;
		}
		hr_one = '0';
		hr_tens++;
	}
}
