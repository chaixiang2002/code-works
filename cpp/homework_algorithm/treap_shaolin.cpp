#include <iostream>
#include <vector>
using namespace std;
/*3 Treap树的应用
// 少林寺的第一个和尚是方丈，作为功夫大师，他规定每个加入少林的年轻和尚，
//要选一个老和尚来一场功夫战斗。每个和尚有一个独立的id和独立的战斗等级grade，
//新和尚可以选择跟他的战斗等级最接近的老和尚战斗。
// 方丈的id是1，战斗等级是109。他丢失了战斗记录，
//不过他记得和尚们加入少林的早晚顺序。请帮他恢复战斗记录。
// 输入:第一行是一个整数n，0 <n <=100,000，和尚的人数，但不包括大师本人。
//下面有n行，每行有两个整数k，g，表示一个和尚的id和战斗等级，0<= k ,g<=5,000,000。
//和尚以升序排序，即按加入少林的时间排序。最后一行用0表示结束。
*/

void test(int& n,vector<int>& shao){
    int a[]={1,3,2};
    for(int i=1;i<n;++i){
        shao[i]=a[i];
    }
}
int main(){
    int n;
    vector<int> shao;
    shao[1]=109;
    test(n,shao);

}