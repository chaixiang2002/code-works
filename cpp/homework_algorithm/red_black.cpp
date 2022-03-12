#include <iostream>
#include <vector>
using namespace std;

void walks(vector<vector<int>>& list,int& y,int& x,int& record,int& longg,int& deep){
    //左x-1,y=;
    if (x-1>-1&&list[y][x-1]==0) {
        x-=1;
        list[y][x]=1;++record;
        walks(list, y, x, record, longg, deep);
    }
    else if (y-1>-1 && list[y-1][x]==0) {
        y-=1;
        list[y][x]=1;++record;
        walks(list, y, x, record, longg, deep);
    }
    else if (x+1<longg && list[y][x+1]==0) {
        x+=1;
        list[y][x]=1;++record;
        walks(list, y, x, record, longg, deep);
    }
    else if (y+1<deep && list[y+1][x]==0) {
        y+=1;
        list[y][x]=1;++record;
        walks(list, y, x, record, longg, deep);
    }
    return;
}

int main(){
    int longg=5,deep=4;
    vector<int> row(longg,0);
    vector<vector<int>> list(deep,row);
    int record=0;//计数
    //black
    list[2][0]=-1;
    list[3][1]=-1;
    list[3][4]=-1;
    int y=2,x=1;
    walks(list, y, x, record,longg,deep);
    cout<<"record="<<record<<endl;
    return 0;
}


