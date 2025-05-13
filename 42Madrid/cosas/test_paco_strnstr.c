extern "C"
{
#define new tripouille
#include "libft.h"
#undef new
}

#include "sigsegv.hpp"
#include "check.hpp"
#include "leaks.hpp"
#include <string.h>

int iTest = 1;
int main(void)
{
	signal(SIGSEGV, sigsegv);
	title("ft_strnstr\t: ")

	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";
	/* 1 */ check(ft_strnstr(haystack, needle, 0) == 0); showLeaks();
	/* 2 */ check(ft_strnstr(haystack, needle, -1) == haystack + 1); showLeaks();
	/* 3 */ check(ft_strnstr(haystack, "a", -1) == haystack); showLeaks();
	/* 4 */ check(ft_strnstr(haystack, "c", -1) == haystack + 4); showLeaks();
	/* 5 */ check(ft_strnstr(empty, "", -1) == empty); showLeaks();
	/* 6 */ check(ft_strnstr(empty, "", 0) == empty); showLeaks();
	/* 7 */ check(ft_strnstr(empty, "coucou", -1) == 0); showLeaks();
	/* 8 */ check(ft_strnstr(haystack, "aaabc", 5) == haystack); showLeaks();
	/* 9 */ check(ft_strnstr(empty, "12345", 5) == 0); showLeaks();
	/* 10 */ check(ft_strnstr(haystack, "abcd", 9) == haystack + 5); showLeaks();
	/* 11 */ check(ft_strnstr(haystack, "cd", 8) == NULL); showLeaks();
	/* 12 mbueno-g */ check(ft_strnstr(haystack, "a", 1) == haystack); showLeaks();
	/* 13 opsec-infosec */ check(ft_strnstr("1", "a", 1) == NULL); showLeaks();
	/* 14 opsec-infosec */ check(ft_strnstr("22", "b", 2) == NULL); showLeaks();
	write(1, "\n", 1);
	return (0);
}



///////////////////////////// lo siguiente es otro archivo


#include "my_utils.h"

int single_test_strnstr(int test_number, char *str1, char *str2, size_t n)
{
	set_signature_tn(test_number, "ft_strnstr(%p: %s, %s, %lu)", str1, escape_str(str1), escape_str(str2), n);
	char * res = ft_strnstr(str1, str2, n);
	char * res_std = strnstr(str1, str2, n);

	return same_offset(str1, res_std, str1, res);
}

int test_strnstr(void)
{
	int res = 1;

	char empty[10];

	empty[0] = 0;
	empty[1] = 'a';

	res = single_test_strnstr(1, "abc", "xyz", 0) && res;
	res = single_test_strnstr(2, "abc", "xyz", 1) && res;
	res = single_test_strnstr(3, "", "", 0) && res;
	res = single_test_strnstr(4, "", "", 1) && res;
	res = single_test_strnstr(5, "", "", 2) && res;
	res = single_test_strnstr(6, "", "teste", 0) && res;
	res = single_test_strnstr(7, "", "teste", 1) && res;
	res = single_test_strnstr(8, "", "teste", 2) && res;
	res = single_test_strnstr(9, "teste", "", 0) && res;
	res = single_test_strnstr(10, "teste", "", 1) && res;
	res = single_test_strnstr(11, "teste", "", 2) && res;
	res = single_test_strnstr(12, "abcdefgh", "abc", 2) && res;
	res = single_test_strnstr(13, "abcdefgh", "abc", 3) && res;
	res = single_test_strnstr(14, "abcdefgh", "abc", 4) && res;
	res = single_test_strnstr(15, "abcdefgh", "abc", 5) && res;
	res = single_test_strnstr(16, "abc", "abcdef", 2) && res;
	res = single_test_strnstr(17, "abc", "abcdef", 3) && res;
	res = single_test_strnstr(18, "abc", "abcdef", 4) && res;
	res = single_test_strnstr(19, "abc", "abcdef", 5) && res;
	res = single_test_strnstr(20, "aaxx", "xx", 2) && res;
	res = single_test_strnstr(21, "aaxx", "xx", 3) && res;
	res = single_test_strnstr(22, "aaxx", "xx", 4) && res;
	res = single_test_strnstr(23, "aaxx", "xx", 5) && res;
	res = single_test_strnstr(24, "aaxx", "xx", 6) && res;

	res = single_test_strnstr(25, empty, "xx", 0xffffffff) && res;

	unsigned char s1[10] = "abcdef";
	unsigned char s2[10] = "abc\xfdxx";
	res = single_test_strnstr(26, (char *)s1, (char *)s2, 3) && res;
	res = single_test_strnstr(27, (char *)s1, (char *)s2, 4) && res;
	res = single_test_strnstr(28, (char *)s1, (char *)s2, 5) && res;

	s1[3] = 0;
	s2[3] = 0;
	int other = single_test_strnstr(29, (char *)s1, (char *)s2, 7);
	if (!other) {
		fprintf(errors_file, BRED "You are not stoping at the '\\0'\n" NC);
		res = 0;
	}
	return res;
}

int	main()
{
	handle_signals_with_time();
	test(strnstr);
}