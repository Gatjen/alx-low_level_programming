#include <stdlib.h>
#include <time.h>
/**
 *main - entry
 *return: 0 (success)
*/
int main(void)
{
	int n, m, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
