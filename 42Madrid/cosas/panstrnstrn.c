#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*strnstr(const char *big, const char *little, size_t len)
{
	int	contador;
	int	len_little;
	int len_big;

	char	*init_little;

	contador = 0;
	len_little = ft_strlen(little);
	len_big= ft_strlen(big);
	*init_little = &little;
	if (!little)
		return ((char *)big);
	while (*big && len_big < len)
	{
		if (*big == *little)
			little++;
		else
			little = init_little;
		if ((int)(little - init_little) == len_little)
		{
			big = big - contador;
			return ((char *)(big - little));
		}
		big++;
	}
	return (NULL);
}

int	main(void)
{
	char str1[] = "Un dia vi un soldado vestido de uniforme";
	char str2[] = "dia";
	char *strnstr[] = strnstrn(str1, str2, 3);
	printf("<%s>", strnstr);
}