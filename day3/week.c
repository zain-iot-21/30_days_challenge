#include <stdio.h>

#define DAYS_IN_WEEK 7

int main()
{

    char *days[DAYS_IN_WEEK] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("Days of the week:\n");
    for (int i = 0; i < DAYS_IN_WEEK; i++)
    {
        printf("%d. %s\n", i + 1, days[i]);
    }

    return 0;
}
