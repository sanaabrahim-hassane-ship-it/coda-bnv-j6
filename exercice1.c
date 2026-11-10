#include <stdlib.h>
#include <stdio.h>

int str_ln(char * word)
{
	int i = 0;
	int longueur_chaine = 0;
	while(word[i] != '\0')
        {
                longueur_chaine++;
                i++;
        }
        return longueur_chaine;
}
int main()
{
	int i = 0;
	char * word = "Les gens sont fainéants\n";
	int longueur_chaine = 0;
	
	longueur_chaine = str_ln(word);
	printf("Longueur de la chaine : %d\n", longueur_chaine);
	exit(0);
}
