#include "function.h"

#include <float.h>
#include <stdio.h>
#include <stdlib.h>


void print_screen(list* L){
    system("cls");
    printf("===============================================\n");
    printf("            【  信息打印界面   】               \n");
    printf("                                               \n");
    printf("|   0     |   num    |   name    | score  |                \n");
    int i=0;
    //printf("%d,%s\n",L->size,L->list_students[0].name);
    for(i=1;i<= L->size; ++i)
        printf("|%9d|%9d|%9s|%9d|   \n",i,L->list_students[i].num,L->list_students[i].name,L->list_students[i].score);
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                         (输入'0'自动回到主页面)\n");
    printf("===============================================\n");
    int tmp;
    scanf("%d",&tmp);
    home_screen(L);
}