#include <iostream>
#include "vector"
using namespace std;

int main(){
    int m,n,count=0;
    cin>>m>>n;
    cout<<"d="<<m<<'\t'<<n<<endl;
    vector<int> ring(2*n+1,0);

  int cc=1;
  for(int i=1;count<n;i++){
      if(cc%m==0&&ring[i%(2*n)]==0){
          ring[i%(2*n)]=1;
          count++;
          cc=0;
          cout<<i;
      }
      else if (ring[i%(2*n)]==4) {
      cc-=1;
      }
      cc++;
  }


    cout<<endl;
    for(int i=1;i<ring.size();i++){
        cout<<"["<<i<<"]"<<'\t';
    }
    cout<<endl;
    for(int i=1;i<ring.size();i++){
        cout<<ring[i]<<'\t';
    }
}




