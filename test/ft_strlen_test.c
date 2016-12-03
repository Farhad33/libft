
#include "test.h"

void	ft_strlen_test(void)
{
	char *inputs[] = {
		"chat",
		"",
		"aaa\0aaa"
	};
	int i = 0;

	printf("\n\n\nft_strlen_test\n-----------------------------------------------------\n");
	while (i < 3)
	{
		size_t a = strlen(inputs[i]);
		size_t b = ft_strlen(inputs[i]);
		char *test = a == b ? "\x1B[32mPASS" : "\x1B[31mFAIL";
		printf("%2d: %12s - %12zu - %12zu - %-s\x1B[0m\n", i + 1, inputs[i], a, b, test);
		i++;
	}
}
