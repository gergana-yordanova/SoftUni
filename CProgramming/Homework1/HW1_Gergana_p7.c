/* 
 * File:   main.c
 * Author: Gergana
 *
 * Created on 13 October 2015, 10:39
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    double d;
    scanf("%d", &d);
    double sq;
    sq=sqrt(d);
    printf("%.7f",sq);
    return (EXIT_SUCCESS);
}

