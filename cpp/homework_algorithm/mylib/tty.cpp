#include <iostream>
#include <ostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
int main(){
    //
    long long a=LLONG_MAX;
    int b=INT_MAX/2+1;
    std::cout<<a <<'\t'<< b<<std::endl;

    //
    std::string s="-11";
    auto it=s.begin();
    while (it!=s.end()) {
        std::cout<<*it;
        ++it;
    }

    //
        auto it2=s.begin()+2;
        std::cout<< std::stoi(s,0,16);
}
