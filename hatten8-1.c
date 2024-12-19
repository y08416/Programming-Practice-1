#include <stdio.h>


int leapYear(int year);
void calculateFutureDate(int *year, int *month, int *day, int days);

int main() {
    int inputYear, inputMonth, inputDay;

   
    printf("今日の日付を入力してください（年 月 日）: ");
    scanf("%d %d %d", &inputYear, &inputMonth, &inputDay);

    int futureDays = 10000;
    
   
    calculateFutureDate(&inputYear, &inputMonth, &inputDay, futureDays);

    
    printf("今日から10,000日後は %d 年 %d 月 %d 日です。\n", inputYear, inputMonth, inputDay);

    return 0;
}


int leapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; 
    } else {
        return 0; 
    }
}


void calculateFutureDate(int *year, int *month, int *day, int days) {
    while (days > 0) {

        int daysInMonth = 31; 
        switch (*month) {
            case 4: case 6: case 9: case 11:
                daysInMonth = 30;
                break;
            case 2:
                daysInMonth = (leapYear(*year)) ? 29 : 28;
                break;
        }
        int remainingDays = daysInMonth - *day + 1;

       
        if (remainingDays >= days) {
            *day += days;
            days = 0;
        } else {

            *month += 1;
            if (*month > 12) {
                *month = 1;
                *year += 1;
            }
            *day = 1;
            days -= remainingDays;
        }
    }
}
