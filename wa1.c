#include <stdio.h>

int main(void)
{
    int month, day;

    while (1)
    {
        printf("Enter month and day: ");
        scanf("%d %d", &month, &day);

        if (month < 1 || month > 12)
            break;

        if (day < 1 || day > 31)
            break;

        printf("%d/%d\n", month, day);
    }

    return 0;
}