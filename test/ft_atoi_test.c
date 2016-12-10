#include "test.h"

void	ft_atoi_test(void)
{
	int i = 0;
	char *src[] = {
		"42",
		"	42",
		"42 33",
		" 42 majid 00",
		"majid 42",
		"-42"
	};

	printf("\n\n\nft_atoi_test\n-----------------------------------------------------\n");
	while (i < 6)
	{
		int a = atoi(src[i]);
		int ft = ft_atoi(src[i]);
		char *test = (a == ft) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%4d: %10s - %10i - %10i - %-s\x1B[0m\n", i + 1, src[i], ft, a , test);
		i++;
	}
}
