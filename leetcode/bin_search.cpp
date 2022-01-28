#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid=0;
            cout<< l<<" "<<r<<" "<<mid<<endl;

        while( l<r ){
            mid=(l+r)/2;
            cout<< l<<" "<<r<<" "<<mid<<endl;
            if(target==nums[mid])
            return mid;
            else if(target<nums[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }

int main(){
    vector<int> s={-1,0,3,5,9,12};
    cout<< search(s,9)<<endl;
}