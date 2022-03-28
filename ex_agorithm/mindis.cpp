#include <iostream>
#include <vector>
using namespace std;

class point{
private:
    int x,y;
    int dis;
///////////////////////////////////////
    static int min_dis;
    static int p1;
    static int p2;
    static vector<vector<int>> pan;
    static int bound_x;
    static int bound_y;
    static int offset_x;
    static int offset_y;
///////////////////////////////////////
public:
    point(int _x,int _y):x(_x),y(_y),dis(INT_MAX){}
    int distance(){

    }
    void init_pan(vector<int> px,vector<int>py){
        this->bound_x=0;
        this->bound_y=0;
        for(int i=0;i<px.size();++i){
            if(px[i]>bound_x)
                bound_x=px[i];
            if(py[i]>bound_y)
                bound_y=py[i];
        }
        offset_x=
        offset_y=
        this->pan[px[i]][py[i]]=i;//假设没有重复的点
    }
};





void createpan(){
    int PX[]={-11,15,4,-5,2,3,-2,-7,-4,10};
    int PY[]={4,-3,6,-6,-1,2,7,5,-7,0};
    vector<point> points;

}









int main(){
    return 0;
}