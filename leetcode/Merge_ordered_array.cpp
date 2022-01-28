#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for(int i=0;i<n;i++){
        nums1.pop_back();
    }
    int i=0,j=0,couut=0;
       for(i=0;i<m+n;i++){
           if(j<n&&nums2[j]<nums1[i]){
               nums1.insert(nums1.begin()+i,nums2[j]);
               j++;
           }
           else{
               couut++;
           }
           if(j<n&&couut>m&&nums1[i]==0){
               nums1.push_back(nums2[j]);
               j++;
           }
       }
    vector<int>::iterator it;
    for(int i=0 ;i<m+n;i++){
        cout<<nums1[i]<<'\t';
    }

}
int main(){
    int m=6,n=3;
    vector<int>nums1{-1,0,0,3,3,3,0,0,0};
    vector<int>nums2{1,2,2};


   /*  vector<int>::iterator it;
    for(it=nums1.begin();it!=nums1.end();it++)
    {
        cout<<*it<<'\t';
    }
    cout<<endl;
    for(it=nums2.begin();it!=nums2.end();it++)
    {
        cout<<*it<<'\t';
    }
    cout<<endl; */

    //merge
    merge(nums1,m,nums2,n);

    return 0;
}