#include <iostream>

#include <vector>
using namespace std;
bool judge(vector<int>& a){//vvvvvvvv
    int q=a.at(1)+a[2]+a[3]+a[4];
    int w=a.at(4) +a[6]+a[7]+a[8];
    int e=a[0]+a[2]+a[5]+a[8];
    int r=a[0]+a[3]+a[6]+a[9];
    int t=a[1]+a[5]+a[7]+a[9];
    if (q==w&&q==e&&q==r&&q==t) return true;
    return false;
}
void recursions(vector<int>& nums, int head,int& count){
    if(head==nums.size()-1){
        //判断五角星五条直线是否和相等
        if(judge(nums)) ++count;
        return;
    }
    for(int i=head;i<nums.size();++i){
        vector<int> copy(nums.begin(),nums.end());
        swap(copy[head],copy[i]);
        recursions(copy,head+1,count);
    }
}

int main(){
    int a[10]={1,2,3,4,5,6,8,9,10,12};
    vector<int> nums;
    for (int i=0; i<10; ++i) {
    nums.push_back(a[i]);
    }
    int count=0;
    recursions(nums, 0, count);
    cout<<count/10<<endl;


    return 0;
}


