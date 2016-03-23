/* 
 * File:   main.c
 * Author: Gergana
 *
 * Created on 13 October 2015, 14:45
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int i;
    int n;
     printf("Enter an integer.");
     scanf("%d",&n);
    for (i=2; i<=n+1; i++)
    {
        if (i%2 == 0)
     printf("%d ",i);
   else
      printf("%d ",-i);
 
   }
    return (0);
}
