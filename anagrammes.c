#include <stdio.h>
#include "anagrammes.h"
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
#define true 1
#define false 0

typedef int bool;

bool Anag(char *S1, char *S3)
{
int i, j;
bool echec = false;
char *S2;

//longueur identique
if (strlen(S1)!= strlen(S3))
    {
        return false;
    }
    S2 = strdup(S3);

for (i = 0 ; S1[i]!='\0' && !echec ; i++)
    {
        for (j=0 ; S2[i]!='\0' && S1[i]!=S2[j] ; j++){}
        if (S1[i]!=S2[j]) //S1[i] pas trouvé dans S2
            echec = true ;
        else
            S2[j] = ' '; // on grille le carac utilisé

    }
    free (S2);
    return !echec;  
}
