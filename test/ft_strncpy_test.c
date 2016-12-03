
#include "test.h"

void	ft_strncpy_test(void)
{
	int i = 0;
	char dst[10];
	char *src[] = {
		"abc",
		"",
		"aaa\0aaa"
	};
	size_t len[] = {2, 5, 3};

	printf("\n\n\nft_strncpy_test\n-----------------------------------------------------\n");
	while (i < 3)
	{
		char *a = strncpy(dst, src[i], len[i]);
		char *ft = ft_strncpy(dst, src[i], len[i]);
		char *test = !(strcmp(a, ft)) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %5zu - %5s - %12s - %12s - %-s\x1B[0m\n", i + 1, len[i], src[i], a, ft , test);
		i++;
	}
}
