#ifndef list_H
#define list_H

#include <stdio.h>
#include <string.h>
#define maxsize 10

typedef struct patient{
    int number;
    char name[10];
    int age;
    int sex;//女是 0，男是 非0；
    char symptom[200];
} patient;
//  patient的构造函数
patient patient_init(int _number,char _name[10],int _age,int _sex,char _sym[200]);





typedef struct List_patient{
    patient apatient;
    patient* next;
    int size;
} List_patient;
//  List_patient的成员函数(思想)
void list_init(List_patient* L);
int  getlength(List_patient L);
void update_length(List_patient* L);
void list_insert_back(List_patient* L,int i,patient P);
#endif