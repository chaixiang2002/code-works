#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <vector>

#define half_M LONG_MAX/2
class hp{ // 比较、加、减、乘、除、快速幂、LCM公倍数、GCD公因数、
public:
    std::vector<int> num;
    bool sign;

    hp(hp& hp1){
        this->num.assign(hp1.num.begin(),hp1.num.end());
    }
    hp(std::string s){
        auto it=s.begin();
        auto it2=s.end()-1;

        if(*it=='-'){
            this->sign=0;

        }else {
            this->sign=1;
        }
        int n=0;
        while(*it2>'/' && *it2<':'){
            if(n==31){
                this->num.emplace_back( stio(s,) )
                n=0;
            }
            ++n;
            --it2;
        }

    }

        // reverse(s.begin(),s.end());
        // for(auto& t:s){
        //     this->num.emplace_back( (int)(t-'0') );
        // }

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
                }

                ++it1;
                ++it2;
            }
            return true;// 相等 算大于
        }

    }

    /* 真值加法 */
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


    static hp subtract(hp& x,hp& y){
        hp* res;
        std::vector<int>::iterator it,it2;
        if(hp::compare(x, y)){
            res=new hp(x);
            it=(*res).num.begin();
            it2=y.num.begin();
        }else {
            res=new hp(y);
            it=(*res).num.begin();
            it2=x.num.begin();
        }
        // 确保it大，it2小，  x被y减
        int t=0;// 借位数
        while(it!=x.num.end()&&it2!=y.num.end()){
            *it+=t-(*it2);
            t=0;
            if(*it<0){
                t=-1;
                *it+=10;
            }

            ++it;
        }
        while(it!=x.num.end()){
            *it+=t;
            t=0;
            if(*it<0){
                t=-1;
                *it+=10;
            }

            ++it;
        }
        return (*res);
    }

    void print(){
        std::vector<int>::iterator it=this->num.end()-1;
        for(;it>=this->num.begin();--it){
            std::cout<<*it;
        }
    }
};




unsigned long long fastpow(int& a,int n){

    unsigned long long base=(unsigned long long )a;
    unsigned long long sum=1;
    while(n){
        if(n&1)
            sum=sum*base;
        base*=base;

        n>>=1;
    }
    return sum;;
}

class Matrix{
public:
    std::vector<std::vector<int>> M;
    int m,n;//行，列
    Matrix(int n){
        this->m=n;
        this->n=n;
        // std::vector<std::vector<int>> ss(n);
        // for(int i=0;i<n;++i){
        //     ss[i].resize(n);
        this->M.resize(n);
        for(int i=0;i<n;++i){
            M[i].resize(n);
        }
    }
    Matrix(int m,int n){
        this->m=m;
        this->n=n;
        std::vector<std::vector<int>> s(m);
        for(int i=0;i<m;++i){
            s[i].resize(n);
            for(int j=0;j<n;++j){

                s[i][j]=rand()%10;

            }
        }
        this->M.swap(s);

    }
    void print(){
        int m=this->m;
        int n=this->n;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                std::cout<<this->M[i][j]<<"\t";
            }
            std::cout<<std::endl;
        }
            std::cout<<std::endl;
    }
    static Matrix Multi(Matrix& A,Matrix& B){
        int i=A.m,j=B.n,k=A.n;
        Matrix res(A.m,B.n);
        if(A.n!=B.m){
            std::cout<<"error: A.n!=B.m "<<std::endl;
            return res;
        }

        for(i=0;i<A.m;++i){
            for(j=0;j<B.n;++j){
                int sum=0;
                for (k=0; k<A.n; ++k) {
                    sum+=A.M[i][k]*B.M[k][j];
                }
                res.M[i][j]=sum;
            }
        }

        return res;
    }

    static Matrix fastpow(Matrix a,int n){
        Matrix res(a.m);
        for(int i=0;i<a.m;++i)
            res.M[i][i]=1;

        while(n){
            if(n&1)
                res=Multi(a, res);
            a=Multi(a, a);
            n>>=1;
        }

        return res;
    }
};





void test(){
    printf("%d\n",half_M);
    hp num1("999999");
    num1.print();
    std::cout<<std::endl;
    hp num2("999999999999999999988888888888888888888888888888888888888888888");
    num2.print();
    std::cout<<std::endl;

    //num1.add(num2);
    //num1.print();
    std::cout<<std::endl;
    std::cout<<"num1>num2?"<<std::endl;
    std::cout<< hp::compare(num1,num2) <<std::endl;
    std::cout<<"num1-num2=?"<<std::endl;
    //hp::subtract(num1, num2).print();
    int a=2,n=63;
    std::cout<<"a:"<<a<<"\t"<<"n:"<<n<<"="<< fastpow(a, n) <<std::endl;
    std::cout<<std::endl;
    Matrix myM(3,3);
    Matrix myM2(3,3);
    myM.print();
    // myM2.print();
    // Matrix::Multi(myM, myM2).print();
    // Matrix tryy(2);
    // tryy.print();
    Matrix::fastpow(myM, 2).print();
    Matrix::Multi(myM, myM).print();

}
void fibonacci(int n){}