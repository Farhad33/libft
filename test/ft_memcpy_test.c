#include "test.h"

void	ft_memcpy_test(void)
{
	char	b1[10], b2[10];
	char	b3[10], b4[10];

	memset(b1, 33, 10);
	memset(b2, 63, 10);
	ft_memcpy(b1, b2, 10);

	memset(b3, 33, 10);
	memset(b4, 63, 10);
	memcpy(b3, b4, 10);

	printf("\n\n\nft_memcpy_test\n-----------------------------------------------------\n");
	char *test = (!(memcmp(b1, b3, 10)) && !(memcmp(b2, b4, 10))) ?
	"\x1B[32mPASS" : "\x1B[31mFAIL";
	printf(" 1: %-s\x1B[0m\n", test);
}
