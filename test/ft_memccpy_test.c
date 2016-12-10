#include "test.h"

void	ft_memccpy_test(void)
{
	char	*p1, *p2;
	char	b1[12], b3[12];
	char	b2[] = "42usaSchool";
	char	b4[] = "42usaSchool";

	p1 = ft_memccpy(b1, b2, 'h', 11);
	p2 = memccpy(b3, b4, 'h', 11);

	printf("\n\n\nft_memccpy_test\n-----------------------------------------------------\n");
	char *test = (!(memcmp(b1, b3, 12)) && !(memcmp(p1, p2, 11))) ?
	"\x1B[32mPASS" : "\x1B[31mFAIL";
	printf(" 1: %10s - %10s - %10s - %10s - %-s\x1B[0m\n", b1, p1, b3, p2, test);
}
