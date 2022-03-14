
#include <stdlib.h>
struct Node{
    int size;
    int rank;//优先级
    int cnt;//储存在节点u中，相同元素的数的个数
    int key;//
    Node *son[2];
    bool operator<(const Node& T)const{return rank < T.rank;}//重载 ‘<'
    int cmp(int x){
        if(x==key) return -1;//重复值将无法插入
        return x<key?0:1;
    }
    void update(){
        if(son[0]!=nullptr)
            size+=son[0]->size;
        if(son[1]!=nullptr)
            size+=son[1]->size;
    }
};
// void l_rotate(Node* &T1,int d){//d=0,左旋;d=1,右旋
//     Node *T2=T1->son[1];    //1.先T2 指向 T的右儿子
//     T1->son[1]=T2->son[0];  //2. T1 抢走 T2的左儿子,(结果丢了 自己的 右儿子)
//     T2->son[0]=T1;          //3. T2 气的把 T1 当作 左儿子
//     T1->update();           //T1 数数 自己有多少儿子 (成了儿子，必须先undate())
//     T2->update();           //T2 数数 自己有多少儿子
//     T1=T2;          //T1 的称号必须给 地位高
// }
void rotate(Node* &T1,int d){//d=0,左旋;d=1,右旋 (以左为例)
    Node *T2=T1->son[d^1];    //1.先T2 指向 T的右儿子
    T1->son[d^1]=T2->son[d];  //2. T1 抢走 T2的左儿子,(结果丢了 自己的 右儿子)
    T2->son[d]=T1;          //3. T2 气的把 T1 当作 左儿子
    T1->update();           //T1 数数 自己有多少儿子 (成了儿子，必须先undate())
    T2->update();           //T2 数数 自己有多少儿子
    T1=T2;          //T1 的称号必须给 地位高
}

void insert(Node* &T,int x){
    if(T==nullptr){
        T=new Node;
        T->key=x;
        T->rank=rand();//????????
        T->size=1;
        T->son[0]=T->son[1]=nullptr;
    }
    else {
        int d=T->cmp(x);
        insert(T->son[d], x);
        T->update();
        if()
    }

}
