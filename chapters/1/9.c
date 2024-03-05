#include <stdio.h>

int main(){
    
    int c,last;
        
    while((c=getchar()))
        if (c==EOF)
        {
            break;
        }
        else if (last !=' ' || c!=' ')
        {
            putchar(c);
        }
}