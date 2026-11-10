#include <stdio.h>

int count_words(char *str)
{
        int nombre_de_mots = 0;
        int i = 0;
        while(str[i] != '\0')
        {
                nombre_de_mots++;
                i++;
        }
        return nombre_de_mots;
}
