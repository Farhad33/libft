#include "test.h"

void	ft_strdup_test(void)
{
	int i = 0;
	char *src[] = {
		"abcd",
		"\0",
		"42"
	};

	printf("\n\n\nft_strdup_test\n-----------------------------------------------------\n");
	while (i < 3)
	{
		char *a = strdup(src[i]);
		char *ft = ft_strdup(src[i]);
		char *test = (!(strcmp(a, ft))) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%4d: %10s - %10s - %10s - %-s\x1B[0m\n", i + 1, src[i], ft, a , test);
		i++;
	}
}
