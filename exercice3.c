#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void str_rev(char * str)
{
	int i = strlen(str);
        while(i >= 0)
        {
		printf("%c\n",str[i]);
	        i--;
        }
}
int main()
{
	char * word = "coda";
	
	str_rev(word);
	exit(0);
}
