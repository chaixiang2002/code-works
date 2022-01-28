#include <iostream>
#include <vector>
using namespace std;
void removeElement(vector<int>& nums, int val) {
            cout<<"sa"<<endl;
        vector<int>::iterator it;
            cout<<"sa1"<<endl;

        for(it=nums.begin();it!=nums.end();it++){
            if(*it==val){
                nums.erase(it);
            }
        }
            cout<<"sa3"<<endl;

}
int main(){
    vector<int> s={3,2,2,3};
    //removeElement(s,3);
    vector<int>::iterator it33;
    it33=s.begin();
    s.erase(it33);
    vector<int>::iterator it2;
        for(it2=s.begin();it2!=s.end();it2++){
            cout<<*it2<<'\t';
        }
        return 0;
}