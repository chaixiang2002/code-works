#include "function.h"

#include <float.h>
#include <stdio.h>
#include <stdlib.h>

void welcome(list *L){
    system("cls");
    printf("===============================================\n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("    welcome to the grade inquiry system!       \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("===============================================\n");
    _sleep(1000);
    home_screen(L);
}