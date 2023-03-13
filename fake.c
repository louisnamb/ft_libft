#include <unistd.h>
#include <stdio.h>

static int	num_splits(const char *str, char c)
{
	size_t	i;
	size_t	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

int find_c(char *str, char c)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			i++;
		str++;
	}
	return (i + 1);
}
int main(int argc, const char *argv[])
{
        char *sp = "abciiiidefghijk";
        char d = 'i';
	printf("%d ", find_c(sp, d));
	printf("\n%d ", num_splits(sp, d)); 
	return 0;
}
