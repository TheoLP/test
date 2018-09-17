#include <stdio.h>
#include <string.h>
#include "palin2.h"
#include <readline/readline.h>
#include <readline/history.h>


#define MAX 20
typedef char string[MAX];

char *Palin(string s)
{
    int i=0, j;
    scanf("%19s",s);
    j=strlen(s)-2;
    while (i<j && s[i]==s[j]) { i++; j--;}
    printf("%s %s un palindrome\n",s,s[i]==s[j]?"est":"n'est pas");
    return 0;
}