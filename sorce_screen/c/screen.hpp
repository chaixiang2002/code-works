
#include <algorithm>
#include <iostream>
#include <ostream>
#include <string>
#include <system_error>

using namespace std;
struct student {
  int num;
  std::string name;
  int math_score;
  int english_score;
  int datebase;
  //void add(int nu, std::string na, int m, int e, int d) {}
};

struct listt {
  student S[1000];
  int s_num;
  void init() {
    s_num = 0;
    for (int i = 0; i < 1000; i++) {
      S[i].num = i + 1;
    }
    for (int i = 0; i < 1000; i++) {
      S[i].name = "defailt";
    }
  }
};
void wel(listt *L);
void function_screen(listt *L);
void add_screen(listt *L);
void according_screen(listt *L);
void delete_sreen(listt *L);
void find_screen(listt *L);
void Ecs__(listt *L);
void delete_screen_name(listt *L);
void delete_screen_num(listt *L);
void sort(listt *L);
void sortt(listt *L, int x);
void according_2(listt *L);
void sort11(listt *L, int x);