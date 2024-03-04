#include <stdio.h>

int main(){
    
    int c,last,index;
    char word[100];
    index=0;
    while((c=getchar()))
        if (c==EOF)
        {
            printf("%s\n",word);
            break;
        }
        else if (last !=' ' || c!=' ')
        {
            last=c;
            word[index]=c;
            ++index;
        }
}