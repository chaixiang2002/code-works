#include "function.h"
#include <float.h>
#include <stdio.h>
#include <stdlib.h>

void init(list* L){
    L->size=0;
    int i=0;
    for(i=0;i<10;++i){
        L->list_students[i].num=rand();
    }
    for(i=0;i<10;++i){
        strcpy(L->list_students[i].name,"defailt");
    }
}

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
        L->size;
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
    home_screen(L);
}

void print_screen(list* L){
    system("cls");
    printf("===============================================\n");
    printf("            【  信息打印界面   】               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("    请输入名字：                                \n");
    scanf("%s",L->list_students[L->size].name);
    printf("                                               \n");
    printf("    请输入成绩：                               \n");
    scanf("%d",&(L->list_students[L->size].score));
    printf("                                               \n");
    printf("                                               \n");
    printf("                         (输入'0'自动回到主页面)\n");
    printf("===============================================\n");
    int tmp;
    scanf("%d",&tmp);
    home_screen(L);
}

void delete_screen(list* L){
    system("cls");//清屏函数
    // printf("===============================================\n");
    // printf("                                               \n");
    // printf("                                               \n");
    // printf("                                               \n");
    // printf("                                               \n");
    // printf("                                               \n");
    // printf("                                               \n");
    // printf("                                               \n");
    // printf("                                               \n");
    // printf("                                               \n");
    // printf("===============================================\n");
    //？？？？？
}

void exit_screen(list *L){
    system("cls");
    printf("===============================================\n");
    printf("                                               \n");
    printf("                                               \n");
    printf("         欢迎您再次使用信息查询系统！            \n");
    printf("                                               \n");
    printf("         祝愿您2022年，天天开心，永不挂科！      \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                            作者：柴祥          \n");
    printf("                            时间：2022/3/19    \n");
    printf("===============================================\n");
}