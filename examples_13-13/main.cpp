// examples_13-13
#include <stdio.h>
#include <ctype.h>
int main()
{
	char phrase[] = "When in the Course of human events, it becomes necessary for one people to dissolve the political bands which have connected them with another, and to assume among the powers of the earth, the separate and equal station to which the Laws of Nature and of Nature's God entitle them, a decent respect to the opinions of mankind requires that they should declare the causes which impel them to the separation. ";

	int index;
	int alpha, blank, punct;

	alpha = blank = punct = 0;

	/* gather data */
	index = 0;
	while (phrase[index])
	{
		if (isalpha(phrase[index]))
			alpha++;
		if (isblank(phrase[index]))
			blank++;
		if (ispunct(phrase[index]))
			punct++;
		index++;
	}

	/* print results */
	printf("\"%s\"\n", phrase);
	puts("Statistics:");
	printf("%4d alphabetic characters\n", alpha);
	printf("%4d blanks\n", blank);
	printf("%4d punctuation sybols\n", punct);

	return(0);
}