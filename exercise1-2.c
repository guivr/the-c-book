#include <stdio.h>
#include <stdlib.h>

int main()
{
    int this_number, divisor, not_prime;
    int last_prime = 0;
    int prime_pairs = 0;
    this_number = 3;

    while(this_number<100){
        divisor = this_number / 2;
        not_prime = 0;
        while (divisor > 1){
            if(this_number % divisor == 0){
                not_prime = 1;
                divisor = 0;
            }
            else{
                divisor -= 1;
            }
        }
        if(not_prime == 0){
            if((this_number-2) == last_prime){
                prime_pairs++;
                printf("%do Prime Pair: %d and %d\n", prime_pairs, last_prime, this_number);
            }
            last_prime = this_number;
        }
        this_number+=1;
    }

    return 0;
}
