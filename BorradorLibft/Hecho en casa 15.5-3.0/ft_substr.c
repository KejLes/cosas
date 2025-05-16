#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
    i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
    char	*str;
    size_t	i;

    str = (char *) s;
    i = 0;
    while (i != n)
    {
        str[i] = '\0';
        i++;
    }
}

char	*ft_strdup(const char *s)
{
	size_t	len_s;
	size_t	i;
	char	*ptr;

	len_s = ft_strlen(s);
	i = 0;
	ptr = (char *)malloc((len_s + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < len_s)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n);
	return (ptr);
}


char    ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    int len_s;
    char *ptr_substr;

    i = 0;
    if (s == NULL)
        return (NULL);
    len_s = ft_strlen(s);
    if (start >= len_s)
        return (ft_strdup(""));
    len += start;
    ptr_substr = calloc((len + 1), sizeof(char));
    if (ptr_substr == NULL)
        return(NULL);
    while ((i < (len - 1)) && s[i] != '\0')
    {
        ptr_substr[i] = s[i];
        i++;
    }
    ptr_substr[i] = '\0';
    return (ptr_substr);
}

int main(void)
{
    char str[] = "123456789012345";
    int start = 4;
    int len = 5;

    char substr[] = ft_substr(str, start, len);
    printf("str: <%s>\nsubstr: <%s>\n", str, substr);
    return (0);
}