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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int	len_little;
	int j;

	i = 0;
	j = 0;
	if (!little[0])
		return((char *) big);
	len_little = ft_strlen(little);
	while (i < len && big[i])
	{
		if (big[i] != little[j])
			j = 0;
		else
		j++;
		if (j == len_little)
			return ((char *)(big + (i - j)));
		i++;
	}
	return (NULL);
}

int	main()
{
	// char	*s = strnstr("HOLAQUE", "AQU", 6);
	// printf("s = %p\n", s);
	char	*s2 = ft_strnstr("abcabcabc", "cab", 7);
	printf("s2 = %p\n", s2);
}