#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy (char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE]; /* la línea más larga se guarda aquí */
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
    }
    if (max > 0 ) /* hubo una línea */
        printf("%s", longest);
    return 0 ;   
}

int getline(char s[], int limit)
{
    int c,i;
    for(
        i=0;
        i<limit-1 && (c=getchar()) !=EOF && c!='\n';
        ++i
        )
        {
        s[i]=c;
        printf("\nindex: %d\n",i);
        }
    printf("\nline ended\n");
    if (c=='\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i;
    i=0;
    while ((to[i]=from[i])!='\0') ++i;
}