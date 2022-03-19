#include "function.h"

#include <float.h>
#include <stdio.h>
#include <stdlib.h>

void add_screen(list* L){
    system("cls");
    printf("===============================================\n");
    printf("            【  信息录入界面   】               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("    请输入名字：                                \n");
    scanf("%s",L->list_students[L->size].name);
    printf("                                               \n");
    printf("    请输入成绩：                               \n");
    scanf("%d",&(L->list_students[L->size].score));
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("===============================================\n");
    _sleep(1000);
    home_screen(L);
}