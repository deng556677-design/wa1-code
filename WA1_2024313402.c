#include <stdio.h>

int main(void)
{
    int year = 0;
    int month = 0;
    int isLeap = 0;
    int days = 0;
    int weeks = 0;
    int rest = 0;

    printf("=== 습관 트래커 ===\n");

    printf("연도를 입력하세요 (2000~2100): ");
    scanf("%d", &year);

    if(year < 2000 || year > 2100)
    {
        printf("[오류] 연도는 2000~2100 사이여야 합니다.\n");
        printf("프로그램을 종료합니다.\n");
        return 0;
    }

    printf("월을 입력하세요 (1~12): ");
    scanf("%d", &month);

    if(month < 1 || month > 12)
    {
        printf("[오류] 월은 1~12 사이여야 합니다.\n");
        printf("프로그램을 종료합니다.\n");
        return 0;
    }

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        isLeap = 1;
    }
    else
    {
        isLeap = 0;
    }

    if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }
    else if(month == 2)
    {
        if(isLeap == 1)
            days = 29;
        else
            days = 28;
    }
    else
    {
        days = 31;
    }

    weeks = days / 7;
    rest = days % 7;

    printf("\n[%d년 %d월]\n", year, month);

    if(isLeap == 1)
    {
        printf("%d년은 윤년입니다.\n", year);
    }
    else
    {
        printf("%d년은 윤년이 아닙니다.\n", year);
    }

    printf("이 달은 %d일까지 있습니다.\n", days);
    printf("%d일 = %d주 %d일입니다.\n", days, weeks, rest);

    return 0;
}