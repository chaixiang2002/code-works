#include "function.h"

#include <float.h>
#include <stdio.h>
#include <stdlib.h>

void home_screen(list *L){
    system("cls");
    printf("===============================================\n");
    printf("                                               \n");
    printf("    1.添加学生信息         2.打印所有人信息      \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("    3.删除学生             4.退出系统           \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("===============================================\n");

    control(L);//检测 用户的输入
}

void control(list* L){
    int tmp;
    scanf("%d",&tmp);
    switch (tmp) {
    case 1:
        L->size+=1;
        add_screen(L);
        break;
    case 2:
        print_screen(L);
        break;
    case 3:
        delete_screen(L);
        break;
    default:
        exit_screen(L);
        break;
    }
}