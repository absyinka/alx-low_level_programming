#include "main.h"
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	char password[84];
	int i = 0, sum = 0, d1, d2;

	srand(time(0));

	while (sum < 2772)
	{
		password[i] = 33 + rand() % 94;
		sum += password[i++];
	}
	password[i] = '\0';
	if (sum != 2772)
	{
		d1 = (sum - 2772) / 2;
		d2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			d1++;
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + d1))
			{
				password[i] -= d1;
				break;
			}
		}
		for (i = 0; password[i]; i++)
		{
			if (password[i] >= (33 + d2))
			{
				password[i] -= d2;
				break;
			}
		}
	}
	printf("%s", password);

	return (0);
}
