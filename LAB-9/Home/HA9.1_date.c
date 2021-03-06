// WAP to create a new data type DATE with the help of structure and typedef.
// Write the following user defined functions for the date manipulations.
//  a) To return next date.
// b) To return next month.
// c) To return next year.
// d) To add few days in a date.
// e) To add few months in a date.
// f) To add few years in a date.
// g) To return month name from a date.
// h) To display date in various format such as DD-MM-YYYY, DD.MM.YY etc.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LEAP_YEAR(y) (y % 4 == 0 && y % 100 != 0) || y % 400

typedef struct {
    int year, month, day;
} Date;

Date next_date(Date*);
Date next_month(Date*);
Date next_year(Date*);
void add_days(Date*, int);
void add_months(Date*, int);
void add_years(Date*, int);
char* month_name(Date*);
void get_formatted(Date*, char, char*);
int days_of_month(int, int);
char* get_month_name(int);

int main() {
    Date date = { 2020, 04, 22 };
    char* str_date = malloc(10);
    add_days(&date, 10);
    get_formatted(&date, '.', str_date);
    printf("Date: %s\n", str_date);
    free(str_date);
    return 0;
}

Date next_date(Date* dt) {
    Date new_date = *dt;
    add_days(&new_date, 1);
    return new_date;
}

Date next_month(Date* dt) {
    Date new_date = *dt;
    add_months(&new_date, 1);
    return new_date;
}

Date next_year(Date* dt) {
    Date new_date = *dt;
    add_years(&new_date, 1);
    return new_date;
}

void add_days(Date* dt, int n) {
    int day = dt->day + n;
    int month = dt->month;
    int year = dt->year;
    int days = days_of_month(month, year);
    month += day / days;
    dt->day = day % days;
    dt->month = month % 12;
    dt->year + (month / 12);
}

void add_months(Date* dt, int n) {
    int month = dt->month + n;
    dt->month = month % 12;
    dt->year += month / 12;
}

void add_years(Date* dt, int n) {
    dt->year += n;
}

char* month_name(Date* dt) {
    return get_month_name(dt->month);
}

void get_formatted(Date* dt, char del, char* formatted_date) {
    sprintf(formatted_date, "%02d%c%02d%c%04d",
        dt->day, del, dt->month, del, dt->year
    );
}

int days_of_month(int month, int year) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;

        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
    }
    if (LEAP_YEAR(year))
        return 29;
    return 28;
}

char* get_month_name(int month) {
    switch (month) {
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
    }
}
