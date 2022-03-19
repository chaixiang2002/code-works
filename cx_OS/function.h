#include <stdio.h>
#include <string.h>

typedef struct student{
    int num;
    char name[10];
    int score;
} student;
//void add(student* S,int _num,char _name[10],int _score);

typedef struct list{
    student list_students[100];
    int size;
} list;

void init(list* L);         //�����е�ѧ����ѧ�ţ��������ó�Ĭ��
void welcome(list* L);      //��ӭ���棡
void home_screen(list *L);  //��ҳ�棡
void control(list* L);             //��� �û� ���밴���� ����(from ��ҳ��)

void add_screen(list *L);
void print_screen(list* L);
void delete_screen(list* L);
void exit_screen(list* L);