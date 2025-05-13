
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>


size_t	ft_strlen(const char *s)
{
	int	i;
	
	i = 0;	
	while (s[i] != '\0')
        i++;
	return (i);
}


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	len_dst = ft_strlen(dst);
	int	len_src = ft_strlen(src);
	int i = 0;

	if (size <= len_dst)
		return len_src + size;
	while((len_dst + i) < (size - 1) && src[i] != '\0')
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return len_dst + len_src;
}


int	main()
{
	char str1[11] = {'H', 'o', 'l', 'a', '\0'};
	char str2[] = "Adios";

	printf("\"%d\"\n", str1[4]);
	printf("\"%d\"\n", str1[5]);


	printf("Size: \nDest: %s\n", str1);


}
