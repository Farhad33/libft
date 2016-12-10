#include "test.h"

void	ft_memset_test(void)
{
	printf("\n\n\nft_memset_test\n-----------------------------------------------------\n");

	char str1[50];
    char str2[50];
	char str3[50] = "42usaSchool";
	char str4[50] = "42usaSchool";

	ft_memset(str2, '*', 7);
	memset(str1, '*' , 7);
	char *test1 = !(strcmp(str1, str2)) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
	printf("  1: %10c - %10i - %10s - %10s - %-s\x1B[0m\n",'*' , 7, str2, str1, test1);

	memset(str4, '\0' , 7);
	ft_memset(str3, '\0', 7);
	char *test2 =
	!(strcmp(str3, str4)) ? "\x1B[32mPASS" : "\x1B[31mFAIL";
	printf("  2: %10c - %10i - %10s - %10s - %-s\x1B[0m\n",'*' , 7, str3, str4, test2);
}
