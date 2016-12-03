#include "test.h"

void	ft_strncat_test(void)
{
	int i = 0;
	char s1[20] = "To be \0 123";
	char sa[20] = "To be \0 123";
	char *s2[] = {
		"123",
		"or not to be",
		"efefef",
		"to be"
	};
	size_t n[] = {0, 7, 0};

	printf("\n\n\nft_strncat_test\n-----------------------------------------------------\n");
	while (i < 4)
	{
		char *a = strncat(sa, s2[i], n[i]);
		char *ft = ft_strncat(s1, s2[i], n[i]);
		char *test = !(strcmp(a, ft)) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %2zu - %12s - %12s - %12s - %-s\x1B[0m\n", i + 1, n[i], s2[i], a, ft , test);
		i++;
	}
}
