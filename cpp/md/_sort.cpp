#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <ctime>
using namespace std;
//快排、二路并归

void quick_sort(vector<int>& nums,int front,int end){
    if (front<end) {
        int l=front;
        int r=end;
        int tmp=nums[front];
        while (l<r) {
            while(l<r&&nums[r]>=tmp) --r;
            if(l<r) nums[l++]=nums[r];
            while (l<r&&nums[l]<tmp) ++l;
            if(l<r) nums[r--]=nums[l];
        }
        nums[l]=tmp;
        quick_sort(nums, 0, l-1);
        quick_sort(nums, l+1, end);
    }

}

void way_merge222(vector<int>& nums,int l,int r){
    vector<int> nums2;
    swap(nums,nums2);
    int m=(l+r)/2;
    int i=l,j=m+1;
    while (i>m&& j>r) {
        if(i<=m&&nums2[i]<nums2[j]){
            nums.push_back(nums2[i]);
            i++;
        }
        else if(j<=r) {
            nums.push_back(nums2[j]);
            j++;
        }
    }
}
void way_merge(vector<int>& nums,int l,int r){
    if(l<r){
        way_merge(nums, l, (l+r)/2);
        way_merge(nums, (l+r)/2+1, r);
        way_merge222(nums, l, r);
    }
}


int main(){
    vector<int> ss;
    for (int i=0; i<44; ++i ) {
        ss.push_back(rand());
    }
    clock_t startt=clock();
    quick_sort(ss, 0, ss.size()-1);
    //way_merge(ss, 0,ss.size()-1 );
    clock_t endd=clock();
    double tt= (double)(endd-startt);
    cout <<"time:"<<tt<<endl;
    for (int i=0; i<40; ++i ) {
        cout<<ss[i]<<'\t';
    }
    return 0;
}

