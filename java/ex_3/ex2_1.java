public class ex2_1
{
public static void main(String args[])
{
    byte a=8;
    char b='a';     //'a'的Unicode码对应的十进制数是97
    int c=12;
    long d=145;
    float e=-8.29;
    double f=365.725;
    int g=b+c;      //char型的变量b转换为int型
    long h=d-c;     //int型的变量c转换为long型
    float i=a*e;    //byte型的变量a转换为float型
    double j=i/g-f; //int型的变量g转换为float型，i/g的结果又转换为double型
    System.out.println("g="+g);//97+12=109
    System.out.println("h="+h);//145L-12=133L
    System.out.println("i="+i);//8*(-8.29F)=-66.32F
    System.out.println("j="+j);// -66.32f/109 - 365.725 =-366.3334403395653D

}
}
//2
// int a=6+10;
// int b=a*2;
// int c=b/4;
// int d=b-c;
// int e=-d;
// int f=e%4;
// double g=a%3;
// int h=a++;
// int i=--a;
// System.out.println("a="+a);//16
// System.out.println("b="+b);//32
// System.out.println("c="+c);//8
// System.out.println("d="+d);//24
// System.out.println("e="+e);//-24
// System.out.println("f="+f);//0
// System.out.println("g="+g);//1
// System.out.println("h="+h);//16
// System.out.println("i="+i);//16

 // 3.
    // int a=5,b=3;
    // boolean c=a<b;                                 //0
    // System.out.println(a+"＜"+b+"="+c);            //5<3=0;
    // boolean d=(b!=0&&a/b>5);                       //d=0
    // System.out.println(b+"!=0&&"+a+"/"+b+">5="+d); //3!=&&5/3>5=0
    // boolean e=(b!=0&&a/b<5);                       //1
    // System.out.println(b+"!=0&&"+a+"/"+b+"<5="+e);


     //4.
    // byte a=8;
    // char b='a';     //'a'的Unicode码对应的十进制数是97
    // int c=12;
    // long d=145L;
    // float e=-8.29F;
    // double f=365.725;
    // int g=b+c;      //char型的变量b转换为int型
    // long h=d-c;     //int型的变量c转换为long型
    // float i=a*e;    //byte型的变量a转换为float型
    // double j=i/g-f; //int型的变量g转换为float型，i/g的结果又转换为double型
    // System.out.println("g="+g);//97+12=109
    // System.out.println("h="+h);//145L-12=133L
    // System.out.println("i="+i);//8*(-8.29F)=-66.32F
    // System.out.println("j="+j);// -66.32f/109 - 365.725 =-366.3334403395653D


    //5
    // int i=1234578900+987543210;
    // System.out.println(i);//溢出
    // long j=1234578900+987543210;
    // System.out.println(j);//2222122110
    // long k=1234578900+987543210L;
    // System.out.println(k);//2222122110
    // long l=1234578900L+987543210L;
    // System.out.println(l);//2222122110