#include "test.h"

void	ft_strlcat_test(void)
{
	int i = 0;
	char dst_ft[40] = "\0";
	char dst_o[40] = "\0";
	char *src[] = {
		"abcdefghijklmnop",
		"\0",
		"42",
		"12345678910"
	};
	size_t n[] = {10, 5, 5, 0};

	printf("\n\n\nft_strlcat_test\n-----------------------------------------------------\n");
	while (i < 4)
	{
		size_t a = strlcat(dst_o, src[i], n[i]);
		size_t ft = ft_strlcat(dst_ft, src[i], n[i]);
		char *test = ((a == ft) && !(strcmp(dst_ft, dst_o))) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%4d: %4zu - %4s - %4zu - %4s - %4zu - %4s - %-s\x1B[0m\n", i + 1, n[i], src[i],ft, dst_ft, a, dst_o, test);
		i++;
	}
}
