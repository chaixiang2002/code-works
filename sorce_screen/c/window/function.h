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

void init(list* L);         //把所有的学生的学号，姓名设置成默认
void welcome(list* L);      //欢迎界面！
void home_screen(list *L);  //主页面！
void control(list* L);             //检测 用户 输入按键的 函数(from 主页面)

void add_screen(list *L);
void print_screen(list* L);
void delete_screen(list* L);
void exit_screen(list* L);