#include <stdio.h>

int main(){
    int c,count;
    count=0;
    while((c=getchar()))
        if (c==' ') 
            ++count;
        else if (c==EOF){
            printf("Number of spaces: %d\n",count);
            break;
        }
}