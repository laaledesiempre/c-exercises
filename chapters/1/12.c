#include <stdio.h>
#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */
/* cuenta lineas, palabras, y caracteres de la entrada */
int main( )
{
    int c,i, state;
    char buff[50];
    state = OUT;
    i=0;
    while ((c = getchar( )) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN)
                {
                    state = OUT;
                    printf("%s\n",buff);
                    for (i=0;i<50;++i)
                        buff[i]=0;
                    i=0;
                }
        }
        else if (state == OUT) {
            state = IN;
            buff[i]=c;
            ++i;
        }
        else if (state == IN) {
            buff[i]=c;
            ++i;
        }
    }
}