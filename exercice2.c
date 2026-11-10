#include <stdlib.h>
#include <stdio.h>

int str_cmp(char *str1, char *str2)
{
	if(str1 == str2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char * first_word = "les gens sont fainéants";
	char * second_word = "je suis en retard";
	int i = 0;
	char * words;

	printf("%d\n", str_cmp(first_word, second_word));
	exit(0);
}
