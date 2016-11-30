
#include "test.h"

void	ft_strcpy_test(void)
{
	int i = 0;
	char dst[10];
	char *src[] = {
				"abc",
				"",
				"aaa\0aaa"
	};

	printf("\n\n\nft_strcpy_test\n-----------------------------------------------------\n");
	while (i < 3)
	{
		char *a = strcpy(dst, src[i]);
		char *ft = ft_strcpy(dst, src[i]);
		char *test = !(strcmp(a, ft)) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %12s - %12s - %12s - %-s\x1B[0m\n", i + 1, src[i], a, ft , test);
		i++;
	}
}
