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

main()
{
    int c = 0;
    while(c<3){
        show_hello_world();
        c = c+1;
    }
    return 0;
}

void show_hello_world(void){
    printf("\n\nWe have %d secs per mins\n%d mins per hour\n%d hours per day\n%d days per week\n", SECS_PER_MINS, MINS_PER_HOUR, HOURS_PER_DAY, DAYS_PER_WEEK);
    printf("%d weeks per month\n%d months per year\n%d years per decade\nAnd %d decades per century", WEEKS_PER_MONTH, MONTHS_PER_YEAR, YEARS_PER_DECADE, DECADES_PER_CENTURY);
    printf("\n\nAnd this, ladies and gentlemans,\nis preprocessor's DEFINE in C programming language.\nHope you like it. Blah XD\n\n");
}
