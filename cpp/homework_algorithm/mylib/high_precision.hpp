

#include <algorithm>
#include <iostream>
#include <ostream>

#include <string>
#include <algorithm>

#include <vector>


class hp{ // 比较、加、减、乘、除、快速幂、LCM公倍数、GCD公因数、
private:
    std::vector<int> num;
public:
    hp(std::string s){
        reverse(s.begin(),s.end());
        for(auto& t:s){
            this->num.emplace_back( (int)(t-'0') );
        }
    }

    /* 真值比较 */
    static bool compare(hp& p,hp& q){
        if(p.num.size()>q.num.size()){
            return true;
        }else if (p.num.size()<q.num.size()) {
            return false;
        }else {
            std::vector<int>::iterator it1=p.num.end()-1;
            std::vector<int>::iterator it2=q.num.end()-1;
            while (it1>=p.num.begin()) {
                if(*it1>*it2){
                    return true;
                }else if (*it1<*it2) {
                    return false;
                }else

                ++it1;
                ++it2;
            }
            return true;// 相等 算大于
        }

    }
    void add(hp& be){
        std::vector<int>::iterator it=this->num.begin();
        std::vector<int>::iterator it2=be.num.begin();
        int t=0;// 进位数
        while(it!=this->num.end()&&it2!=be.num.end()){
            *it+=*it2+t;
            t=0;
            if(*it>9){
                t=(*it)/10;
            }
            *it=(*it)%10;

            ++it;
            ++it2;
        }
        while(it!=this->num.end()){
            *it+=t;
             t=0;
            if(*it>9){
                t=(*it)/10;
            }
            *it=(*it)%10;

            ++it;
        }
        while(it2!=be.num.end()){
            *it2+=t;
            t=0;
            if(*it2>9){
                t=(*it2)/10;
            }
            this->num.emplace_back( (*it2)%10 );

            ++it2;
        }
        if(t!=0){
            this->num.emplace_back( t );
        }
    }



    void subtract(hp& be){
        std::vector<int>::iterator it=this->num.begin();
        std::vector<int>::iterator it2=be.num.begin();
        int t=0;// 借位数

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
    std::cout<<"num1>num2?"<<std::endl;
    std::cout<< hp::compare(num2,num1) <<std::endl;



}