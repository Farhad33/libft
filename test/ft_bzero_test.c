#include "test.h"

void	ft_bzero_test(void)
{
	char str7[50] = "42usaSchool";
	char str8[50] = "42usaSchool";

	printf("\n\n\nft_bzero_test\n-----------------------------------------------------\n");
	ft_bzero(str7, 7);
	bzero(str8, 7);
	char *test4 = !(strcmp(str8, str7)) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
	printf("  2: %10c - %10i - %10s - %10s - %-s\x1B[0m\n",'*' , 7, str7, str8, test4);

	char str5[50];
	char str6[50];
	ft_bzero(str6, 7);
	bzero(str5, 7);
	char *test3 = !(strcmp(str5, str6)) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
	printf("  1: %10c - %10i - %10s - %10s - %-s\x1B[0m\n",'*' , 7, str6, str5, test3);

}
