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
    printf("             ��ӭʹ����Ϣ��ѯϵͳ!              \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("===============================================\n");
    _sleep(1500);
    home_screen(L);
}

void home_screen(list *L){
    system("cls");
    printf("===============================================\n");
    printf("                                               \n");
    printf("    1.���ѧ����Ϣ         2.��ӡ��������Ϣ      \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("    3.ɾ��ѧ��             4.�˳�ϵͳ           \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("===============================================\n");

    control(L);//��� �û�������
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


void add_screen(list* L){
    system("cls");
    printf("===============================================\n");
    printf("            ��  ��Ϣ¼�����   ��               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("    ���������֣�                                \n");
    scanf("%s",L->list_students[L->size].name);
    printf("                                               \n");
    printf("    ������ɼ���                               \n");
    scanf("%d",&(L->list_students[L->size].score));
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("===============================================\n");
    _sleep(1000);
    home_screen(L);
}

void print_screen(list* L){
    system("cls");
    printf("===============================================\n");
    printf("            ��  ��Ϣ��ӡ����   ��               \n");
    printf("                                               \n");
    printf("|   0     |   num    |   name    | score  |                \n");
    int i=0;
    //printf("%d,%s\n",L->size,L->list_students[0].name);
    for(i=1;i<= L->size; ++i)
        printf("|%9d|%9d|%9s|%9d|   \n",i,L->list_students[i].num,L->list_students[i].name,L->list_students[i].score);
    printf("                                               \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                         (����'0'�Զ��ص���ҳ��)\n");
    printf("===============================================\n");
    int tmp;
    scanf("%d",&tmp);
    home_screen(L);
}

void delete_screen(list* L){
    system("cls");//��������
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
    //����������
}


void exit_screen(list *L){
    system("cls");
    printf("===============================================\n");
    printf("                                               \n");
    printf("                                               \n");
    printf("         ��ӭ���ٴ�ʹ����Ϣ��ѯϵͳ��            \n");
    printf("                                               \n");
    printf("         ףԸ��2022�꣬���쿪�ģ������ҿƣ�      \n");
    printf("                                               \n");
    printf("                                               \n");
    printf("                            ���ߣ�����          \n");
    printf("                            ʱ�䣺2022/3/19    \n");
    printf("===============================================\n");
    _sleep(4000);
    system("cls");
}





