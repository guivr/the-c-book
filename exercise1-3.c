#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    int array[SIZE];
    int last_char, i, stop;
    i = last_char = stop = 0;
    while(stop != 1){
        array[last_char] = getchar();
        if(last_char == '\n'){
            stop = 1;
        }
        else{
            last_char+=1;
            if(last_char == SIZE){
                stop = 1;
            }
        }
    }
    while(i < last_char){
        printf("%c", array[i]);
        i++;
    }
    return 0;
}
