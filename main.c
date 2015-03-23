#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592
#define SECS_PER_MINS 60
#define MINS_PER_HOUR 60
#define HOURS_PER_DAY 24
#define DAYS_PER_WEEK 7
#define WEEKS_PER_MONTH 4
#define MONTHS_PER_YEAR 12
#define YEARS_PER_DECADE 10
#define DECADES_PER_CENTURY 10


void show_hello_world(void);

int main()
{
    int this_number, divisor, not_prime;
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
            printf("%d is a prime number\n", this_number);
        }
        this_number+=1;
    }

    return 0;
}
