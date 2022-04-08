#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int m,res=0;
    cin>>m;
    if(m==1){
        cout <<1<<endl;
        return 0;
    }
    queue<int> myque;
    myque.push(1);
    ++res;
    while (!myque.empty()) {
        int size=myque.size();
        myque.push(1);
        ++res;
        for(int i=0;i<size-1;++i){
            int a=myque.front();
            myque.pop();
            myque.push(a+myque.front());
            ++res;
            if(myque.back()==m){
                cout << res <<endl;

                return res;
            }
        }
        myque.pop();
        myque.push(1);
        ++res;
    }
    return 0;
}