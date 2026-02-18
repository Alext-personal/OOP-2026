#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct l_word
{
    int lenght;
    char word[1001];
}words[1001];
int main()
{
    char input[1001];
    scanf("%[^\n]",input);
    char *p = strtok(input," ");
    int i = 0;
    while (p != NULL)
    {
        int len = strlen(p);
        words[i].lenght = len;
        strcpy (words[i].word, p);
        ++i;
        p = strtok(NULL," ");
    }
    for (int j = 0; j < i-1 ; ++j)
        for (int k = j+1; k < i  ; ++k)
            if (words[j].lenght < words[k].lenght)
            {
                char temp[1001];
                strcpy(temp,words[j].word);
                strcpy(words[j].word,words[k].word);
                strcpy(words[k].word,temp);
                int aux = words[j].lenght;
                words[j].lenght = words[k].lenght;
                words[k].lenght = aux;
            }
    for (int j = 0; j < i ; ++j)
    {
        printf("%s\n", words[j].word);
    }
}