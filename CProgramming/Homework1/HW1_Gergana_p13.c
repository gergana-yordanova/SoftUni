/* 
 * File:   main.c
 * Author: Gergana
 *
 * Created on 12 October 2015, 20:51
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int curDay, curMonth, curYear;
    int bDay, bMonth, bYear;
    time_t timer;
    struct tm* tm_info;
    int Age;

    time(&timer);
    tm_info = localtime(&timer);

    curDay = tm_info->tm_mday;
    curMonth =1+tm_info->tm_mon;
    curYear = tm_info->tm_year + 1900;
    printf("Please, enter your birthday in the format DD.MM.YYYY:\n");
    scanf("%d.%d.%d", &bDay, &bMonth, &bYear);
    
           
    
    if (curMonth > bMonth)   
    Age = curYear - bYear;
    else
    Age = curYear - bYear - 1;      
    if (curMonth == bMonth && curDay >= bDay) 
        Age = curYear - bYear; 
    
    printf("Now: %d\n", Age);
    
    Age = Age + 10;
            
    printf("After 10 years: %d\n", Age);
      return (0);
}