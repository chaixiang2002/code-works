#include <stdio.h>
#include <string.h>

typedef struct student{
    int num;                //学生学号
    char name[10];          //姓名
    int score;              //成绩
} student;
//void add(student* S,int _num,char _name[10],int _score);

typedef struct list{
    student list_students[100]; // 由100个学生(默认)构成的表
    int size;                   // 实际学生的数量
} list;

void init(list* L);             // 把所有的学生的学号，姓名设置成默认
void welcome(list* L);          // 欢迎界面！
void home_screen(list *L);      // 主页面！
void control(list* L);          // 检测 用户 输入按键的 函数(from 主页面)

void add_screen(list *L);       // 信息录入界面
void print_screen(list* L);     // 信息打印界面
void delete_screen(list* L);    // 信息删除界面
void exit_screen(list* L);      // 退出界面