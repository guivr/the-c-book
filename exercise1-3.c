#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int function();
int array[SIZE];
int i = 0;
int last_char = 0;
int stop = 0;

int main()
{
    while(stop != 1){
        function();
    }
    while(i < last_char){
        printf("%c", array[i]);
        i++;
    }
    return 0;
}

function(){
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
