#include <stdio.h>
#include <string.h>

typedef struct student{
    int num;                //ѧ��ѧ��
    char name[10];          //����
    int score;              //�ɼ�
} student;
//void add(student* S,int _num,char _name[10],int _score);

typedef struct list{
    student list_students[100]; // ��100��ѧ��(Ĭ��)���ɵı�
    int size;                   // ʵ��ѧ��������
} list;

void init(list* L);             // �����е�ѧ����ѧ�ţ��������ó�Ĭ��
void welcome(list* L);          // ��ӭ���棡
void home_screen(list *L);      // ��ҳ�棡
void control(list* L);          // ��� �û� ���밴���� ����(from ��ҳ��)

void add_screen(list *L);       // ��Ϣ¼�����
void print_screen(list* L);     // ��Ϣ��ӡ����
void delete_screen(list* L);    // ��Ϣɾ������
void exit_screen(list* L);      // �˳�����