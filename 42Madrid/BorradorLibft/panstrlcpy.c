#include "libft.h"
#include <stdio.h>
#include <string.h>


size_t	ft_strlen(const char *str)
{
	const char	*start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
	int i;
	int len_src;

	len_src = ft_strlen(src);
	i = 0;

	if (size == 0)
		return len_src;
	while (size > 1 && src[i] != '\0')
	{
		dst[i] = src [i];
		i++;
		size--;
	}
	return len_src;
}

int main(void)
{
	int array = 15;
	int size = 15;

	//char str1[] = {'\0', 'H', 'o', 'l', 'a'};
	//char str2[] = {'M', 'u', 'n,', '\0', 'd', 'o'};

	char str1[array];
	char str2[] = "MundoEscondido";

	char str1_[array];
	char str2_[] = "MundoEscondido";

	//int n = strlcpy(str1, str2, size);
	int n_ = ft_strlcpy(str1_, str2_, size);
	
	printf("size: %d\n", size);
	printf("strcpy() str1: <%s>\nn: %d\n", str1, n);
	printf("ft_strcpy str1: <%s>\nn: %d\n", str1_, n_);
	
}