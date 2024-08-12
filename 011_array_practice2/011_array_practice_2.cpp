#include<stdio.h>
int main(void)
{
	int a, b, c, d, e, f[10];
	printf("\n input 10 numbers :\n");
	for (a = 0; a < 10; a++)
	{
		scanf_s("%d", &f[a]);
	}

	for (a = 0; a < 10; a++)
	{
		c = a;
		d = f[a];
		for (b = a + 1; b < 10; b++)
		{
			if (c < f[b])
			{
				c = b;
				d = f[a];
			}
		}

		if (a != c)
		{
			e = f[a];
			f[a] = f[c];
			f[c] = e;
		}
		printf("\n	%d \n", f[a]);
	}



	return 0;
}