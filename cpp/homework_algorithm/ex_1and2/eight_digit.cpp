#include <iostream>
#include <memory>
#include <system_error>
#include <utility>
#include <vector>
#include <xstring>
using namespace std;
struct  list{
    int a[3][3];
    int x,pre_x;
    int y,pre_y;
    void printt(){
        //cout<<"this list:"<<endl;
        for (int i=0; i<3; ++i){
            for (int j=0; j<3; ++j){
                if(a[i][j]==0){
                    cout<<"[]"<<'\t';
                }
                else {
                    cout<<a[i][j]<<'\t';
                }
            }
            cout<<endl;
        }
    }
    void pre_x_y(){
        pre_x=x;
        pre_y=y;
    }
};

struct s_list{
    vector<list> m_s_l;
    int k=0;
    s_list(list& mylist){
        m_s_l.emplace_back(mylist);
    }
};


//

void test(list& mylist){
    int tss[3][3]={
        1,  2,  3,
        8,  0,  4,
        7,  6,  5
    };
    for (int i=0; i<3; ++i)
        for (int j=0; j<3; ++j)
           mylist.a[i][j]=tss[i][j];// cin>>mylist.a[i][j];
    cout<<"target:"<<endl;
    mylist.x=1;mylist.y=1;//============
    mylist.printt();
}
void test_src(list& mylist){
    int tss[3][3]={
        2,  0,  3,
        1,  8,  4,
        7,  6,  5
    };
    for (int i=0; i<3; ++i)
        for (int j=0; j<3; ++j)
           mylist.a[i][j]=tss[i][j];// cin>>mylist.a[i][j];
    cout<<"src:"<<endl;
    mylist.x=1;mylist.y=0;//============
    mylist.printt();
}//
void bfs(list target,s_list& tar){
    if(target.x-1>-1){
        swap(target.a[target.y][target.x],target.a[target.y][target.x-1]);
        target.pre_x_y();
        target.x-=1;
        tar.m_s_l.emplace_back(target);
    }
    if(target.y-1>-1){
        swap(target.a[target.y][target.x],target.a[target.y-1][target.x]);
        target.pre_x_y();
        target.y-=1;
        tar.m_s_l.emplace_back(target);
    }
    if(target.x+1<3){
        swap(target.a[target.y][target.x],target.a[target.y][target.x+1]);
        target.pre_x_y();
        target.x+=1;
        tar.m_s_l.emplace_back(target);
    }
    if(target.y+1<3){
        swap(target.a[target.y][target.x],target.a[target.y+1][target.x]);
        target.pre_x_y();
        target.y+=1;
        tar.m_s_l.emplace_back(target);
    }
}
void bin_bfs(list target,list& src,int &sum,s_list& tar,s_list& sr){

}


int main(){
    list target;
    test(target);
    list src;
    test_src(src);
    int y=0,x=1;
    //game(target, src, y, x);
    return 0;
}






























//void game( list& target,list& src,int& y,int& x){
//     _sleep(1000);
//     system("cls");
//     target.printt();
//     cout<<"sr:"<<endl;
//     src.printt();
//     int control;
//     cin>>control;
//     if(control==1){//左
//         if(x-1>-1){
//             swap(src.a[y][x],src.a[y][x-1]);
//             x-=1;
//             game(target, src, y, x);
//         }
//         else {
//         cout<<"overflow edge!";
//         _sleep(1000);
//         }
//     }
//     else if(control==2){//上
//         if(y>-1){
//             swap(src.a[y][x], src.a[y-1][x]);
//             y-=1;
//             game(target, src, y, x);
//         }
//         else {
//         cout<<"overflow edge!";
//         _sleep(1000);
//         }
//     }
//     else if(control==3){//右
//         if(x<3){
//             swap(src.a[y][x], src.a[y][x+1]);
//             x+=1;
//             game(target, src, y, x);
//         }
//         else {
//         cout<<"overflow edge!";
//         _sleep(1000);
//         }
//     }
//     else if(control==4){//下
//         if(y<3){
//             swap(src.a[y][x], src.a[y+1][x]);
//             y+=1;
//             game(target, src, y, x);
//         }
//         else {
//         cout<<"overflow edge!";
//         _sleep(1000);
//         }
//     }
//     else {
//         cout <<"game over"<<endl;
//         _sleep(1000);
//     }
// }





