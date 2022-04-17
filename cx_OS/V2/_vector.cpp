#include <iostream>     //输入输出流
#include <vector>       //学习的重点
#include <stack>
#include <queue>
#include <deque>
using namespace std;    // 使用 std 命名空间

int main(){
    //声明并初始化vector的方法 a, b, c, b
    vector<int> cx_vec(3,5);         // (3,5)  指放3个5进容器
    vector<char> b;             // 格式：   容器<放入数据类型> 想取的名字
    vector<vector<int>> c;      // 二维容器
    vector<int> d(10);          //预先申请10个空间,  不够vector会自动申请更大的；

    // //========================================================================

    // //数值放入容器
    // for(int i=0;i<5;++i){// vector 支持下标访问
    //     d[i]=i;
    // }

    // for(int i=0;i<5;++i){// 通过push_back()函数把 数值 放入 容器b
    //     b.push_back( 'a'+i );
    // }

    // for(int i=0;i<5;++i){// 二维容器
    //     c.push_back( a );
    // }

    // vector<int>::iterator it=a.begin();
    // for ( ; it!=a.end(); ++it) {// auto 自动识别 变量类型  （谁用谁知道！！！爽） 迭代器
    //     *it=10;
    // }

    // //===============================================================================

    //  // 打印容器里的内容
    // for(int i=0;i<10;++i){// 下标访问
    //     cout<<d[i]<<'\t';         // => printf("%d\t",d[i]);
    // }
    // cout<<endl;
    // cout<<endl;

    // for(char t:b){
    //     cout<<t<<'\t';
    // }
    // cout<<endl;
    // cout<<endl;

    // for(auto tmp:c){
    //     for(auto tmp2: tmp){
    //         cout<<tmp2<<'\t';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<<endl;

    // for(int i=0;i<5;++i){
    //     for(int j=0;j<5;j++){
    //         cout<<c[i][j]<<'\t';
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // cout<<endl;

    // vector<int>::iterator it2=a.begin();
    // for ( ; it2!=a.end(); ++it2) { // 迭代器
    //     *it2=10;
    // }
    // cout<<endl;
    // cout<<endl;

    // //=====================================




    // cout<<"Hello,world"<<endl;
    // cout<<"Hello,world"<<endl;
    // cout<<"Hello,world"<<endl;
    // cout<<"Hello,world"<<endl;

    stack<int> st;
    for(int i=0;i<5;i++){
        st.push(i);
    }
    for(int i=0;i<5;i++){
        cout<<st.top();
        st.pop();
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<st[i]<<" ";
        //cout<<mydep.back()<<" ";
    }

    // queue<int> myque;
    // for(int i=0;i<5;i++){
    //     myque.push(i);
    // }
    // for(int i=0;i<5;i++){
    //     cout<<myque.front()<<" ";
    //     myque.pop();
    // }
    //  cout<<endl;

    // deque<int> mydep;
    // for(int i=0;i<5;i++){
    //     mydep.push_back(i);
    // }
    // for(int i=0;i<5;i++){
    //     cout<<mydep.back()<<" ";
    //     //cout<<mydep.back()<<" ";
    //     mydep.pop_back();
    // }

    // for(int i=0;i<5;i++){
    //     cout<<mydep[i]<<" ";
    //     //cout<<mydep.back()<<" ";
    // }

    return 0;
}






/*

vector的属性(成员函数)



*/