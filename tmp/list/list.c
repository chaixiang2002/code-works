#include <stdio.h>
#include <string.h>

#include "list.h"

patient patient_init(int _number,char _name[10],int _age,int _sex,char _sym[200]){
    patient res;
        res.number=_number;
        strcpy(res.name,_name);
        res.age=_age;
        res.sex=_sex;
        strcpy(res.symptom,_sym);
    return res;
}

void list_init(List_patient* L){
    L->size=0;
}

int  getlength(List_patient L){
    return L.size;
}

void update_length(List_patient* L){
    List_patient* p=L;
    int size=0;
    while (p->next!=NULL) {
        p=p->next;
        size++;
    }
    L->size=size;
}

void list_insert_back(List_patient* L,int i,patient P){
    int j=0;
    List_patient* p=L;
    if(i < 0){
        printf("error: i 是负数\n");
        return;
    }
    if(i > L->size){
        printf("error:溢出\n");
        return;
    }
    while (j < i-1) {
        p=p->next;
        ++j;
    }

    if(j!)

}