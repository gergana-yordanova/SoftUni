/* 
 * File:   main.c
 * Author: Gergana
 *
 * Created on 12 October 2015, 20:51
 */
#include <stdio.h>
#include <time.h>

int main()
{
    time_t timer;
    char buffer[26];
    struct tm* tm_info;

    time(&timer);
    tm_info = localtime(&timer);

    strftime(buffer, 26, "%d %B %Y %H:%M:%S", tm_info);
    puts(buffer);

    return 0;
}