#include <iostream>
#include <cmath>
using namespace std;
double pow(double x,double n){
    double r=1;
    for(int i=0;i<n;++i){
        r*=x;
    }
    return r;
}

int main(){
    int flag=1;
       double A,B,D,E,F;
       scanf("%lf%lf%lf%lf%lf",&A,&B,&D,&E,&F);


       if((A!=B)||((A==B)==0))
              flag=0;
       else{
              if((pow(D/A,2)+pow(E/A,2)-4*(F/A))/4>0){
                    flag=1;
              }
       }


       if(flag){
         printf("Center of a circle is(%.2f,%.2f)\n",-D/(A*2),-E/(A*2));
            printf("Radius of the circle is %.2lf\n",sqrt((pow(D/A,2)+pow(D/A,2)-4*(F/A))/4)); }
       if(flag==0){
              printf("No circle");
       }


return 0;
}




// double A,B,D,E,F,f,g,h,i,j,d,e;
//     cin>>A>>B>>4D>>E>>F>>f>>g>>h>>A>>
//     return 0;



//     sqrt((pow(D/A,2)+pow(D/A,2)-4*(F/A))/4));
