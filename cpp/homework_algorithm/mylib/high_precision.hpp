

#include <algorithm>
#include <iostream>
#include <ostream>

#include <string>
#include <algorithm>

#include <vector>


class hp{
private:
    std::vector<int> num;
public:
    hp(std::string s){
        reverse(s.begin(),s.end());
        for(auto& t:s){
            this->num.emplace_back( (int)(t-'0') );
        }
    }
    void add(hp& be){
        std::vector<int>::iterator it=this->num.begin();
        std::vector<int>::iterator it2=be.num.begin();
        while (it!=this->num.end()) {
            if(it2==be.num.end())
                break;
            *it+=*it2;
            if(*it>9){
                int t=(*it)/10;
                *it=(*it)%10;
                ++it;
                ++it2;
                *it+=t;
                continue;
            }
            ++it;
            ++it2;
        }
        while (it2!=be.num.end()) {
            if(*it2>9){
                this->num.emplace_back( (*it2)%10 );
                int t=(*it2)/10;
                ++it2;
                *it2+=t;
            }
            this->num.emplace_back( *it2 );

            ++it2;
        }
        while (it!=this->num.end()) {
            //std:: cout<<"s:"<<*it<<'\t';
            if(*it>9){
                int t=(*it)/10;
                *it=(*it)%10;

                ++it;
                if(it==this->num.end()){
                    this->num.emplace_back(t);
                }else {
                    *it+=t;
                }
                continue;;
            }
            ++it;
        }
    }
    void print(){
        std::vector<int>::iterator it=this->num.end()-1;
        for(;it>=this->num.begin();--it){
            std::cout<<*it;
        }
    }
};

void test(){
    hp num1("99999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
    num1.print();
    std::cout<<std::endl;
    hp num2("999999999999999999999999999999999999999999999999999999999999999999888888888888888888888888888888888888888888888888");
    num2.print();
    std::cout<<std::endl;

    num1.add(num2);
    num1.print();
    std::cout<<std::endl;



}