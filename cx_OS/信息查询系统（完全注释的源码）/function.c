#include "function.h"

#include <float.h>
#include <stdio.h>
#include <stdlib.h>
/* 将100个学生(默认)初始化 */
void init(list* L){
    L->size=0;                              // 将实际学生数量设为 0
    int i=0;
    for(i=0;i<100;++i){
        L->list_students[i].num=rand();     // 将100学生（默认）的学号设为 随机数     rand()随机数生成函数
    }
    for(i=0;i<100;++i){
        strcpy(L->list_students[i].name,"defailt");     // 将100学生（默认）的姓名设为 “defailt”
    }
}

/* 【欢迎界面】 */
void welcome(list *L){
    system("cls");                  //系统的函数 ，清屏
    printf("===============================================\n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("             欢迎使用信息查询系统!              \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("===============================================\n");
    _sleep(1500);                  //系统的函数 ，保持屏幕1.5s暂停
    home_screen(L);                // 进入【主页面】
}

/* 【主页面】 */
void home_screen(list *L){
    system("cls");                  //系统的函数 ，清屏
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

//检测 用户 输入按键的 函数，给【主页面】用的
void control(list* L){
    int tmp;
    scanf("%d",&tmp);
    switch (tmp) {
    case 1:                 //如果输入‘1’，就 进入【信息录入界面】
        L->size+=1;
        add_screen(L);
        break;
    case 2:                //如果输入‘2’，就 进入【信息打印界面】
        print_screen(L);
        break;
    case 3:                //如果输入‘3’，就 进入【信息删除界面】
        delete_screen(L);
        break;
    default:                //如果输入其他，就 进入【退出界面】
        exit_screen(L);
        break;
    }
}

/* 【信息录入界面】 */
void add_screen(list* L){
    system("cls");                  //系统的函数 ，清屏
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
    home_screen(L);                 // 回到【主页面】
}

/* 【信息打印界面】 */
void print_screen(list* L){
    system("cls");                  //系统的函数 ，清屏
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
    home_screen(L);                 // 回到【主页面】
}

/* 【信息删除界面】 */
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

/* 【退出界面】 */
void exit_screen(list *L){
    system("cls");                  //系统的函数 ，清屏
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
    _sleep(4000);                  //系统的函数 ，保持屏幕4s暂停
    system("cls");                  //系统的函数 ，清屏
}





