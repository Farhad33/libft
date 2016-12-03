#include "test.h"

void	ft_strcat_test(void)
{
	int i = 0;
	char s1[9];
	char sa[9];
	char *s2[] = {
		"",
		"Bon",
		"j",
		"our.",
		""
	};

	printf("\n\n\nft_strcat_test\n-----------------------------------------------------\n");
	while (i < 5)
	{
		char *a = strcat(sa, s2[i]);
		char *ft = ft_strcat(s1, s2[i]);
		char *test = !(strcmp(a, ft)) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %12s - %12s - %12s - %-s\x1B[0m\n", i + 1, s2[i], a, ft , test);
		i++;
	}
}
