#include "function.h"

#include <float.h>
#include <stdio.h>
#include <stdlib.h>
/* ��100��ѧ��(Ĭ��)��ʼ�� */
void init(list* L){
    L->size=0;                              // ��ʵ��ѧ��������Ϊ 0
    int i=0;
    for(i=0;i<100;++i){
        L->list_students[i].num=rand();     // ��100ѧ����Ĭ�ϣ���ѧ����Ϊ �����     rand()��������ɺ���
    }
    for(i=0;i<100;++i){
        strcpy(L->list_students[i].name,"defailt");     // ��100ѧ����Ĭ�ϣ���������Ϊ ��defailt��
    }
}

/* ����ӭ���桿 */
void welcome(list *L){
    system("cls");                  //ϵͳ�ĺ��� ������
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
    _sleep(1500);                  //ϵͳ�ĺ��� ��������Ļ1.5s��ͣ
    home_screen(L);                // ���롾��ҳ�桿
}

/* ����ҳ�桿 */
void home_screen(list *L){
    system("cls");                  //ϵͳ�ĺ��� ������
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

//��� �û� ���밴���� ������������ҳ�桿�õ�
void control(list* L){
    int tmp;
    scanf("%d",&tmp);
    switch (tmp) {
    case 1:                 //������롮1������ ���롾��Ϣ¼����桿
        L->size+=1;
        add_screen(L);
        break;
    case 2:                //������롮2������ ���롾��Ϣ��ӡ���桿
        print_screen(L);
        break;
    case 3:                //������롮3������ ���롾��Ϣɾ�����桿
        delete_screen(L);
        break;
    default:                //��������������� ���롾�˳����桿
        exit_screen(L);
        break;
    }
}

/* ����Ϣ¼����桿 */
void add_screen(list* L){
    system("cls");                  //ϵͳ�ĺ��� ������
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
    home_screen(L);                 // �ص�����ҳ�桿
}

/* ����Ϣ��ӡ���桿 */
void print_screen(list* L){
    system("cls");                  //ϵͳ�ĺ��� ������
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
    home_screen(L);                 // �ص�����ҳ�桿
}

/* ����Ϣɾ�����桿 */
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

/* ���˳����桿 */
void exit_screen(list *L){
    system("cls");                  //ϵͳ�ĺ��� ������
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
    _sleep(4000);                  //ϵͳ�ĺ��� ��������Ļ4s��ͣ
    system("cls");                  //ϵͳ�ĺ��� ������
}





