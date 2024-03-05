#include <stdio.h>

int main(){
    
    int c;
    
    while((c=getchar()))
        if (c==EOF)
        {
            break;
        }
        else if (c=='\t')
        {
            putchar('\t');
        }
        else if (c=='\b')
        {
            putchar('\b');
        }
        else if (c=='\\')
        {
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
}