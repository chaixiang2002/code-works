#include <iostream>
#include <vector>
using namespace std;

struct route{
    int x=0;
    int y=0;
    route(int i,int j){
        this->x=i;
        this->y=j;
    }
    void printt(){
        cout<<x<<'\t'<<y<<endl;
    }
};
struct s_route{
    route r[200];
    s_route(int x,int i,int j){
        for(int k=0;k<)
    }
}

void walks(s_route& r,int i,int j,int* a){
    cout<<a[3][1];
}

int main(){
    int a[4][5]={0};
    a[2][0]=1;
    a[3][1]=1;
    a[0][4]=1;
    a[3][4]=1;
    s_route r;

    return 0;
}
// route aa(1,2);
//     aa.printt();

