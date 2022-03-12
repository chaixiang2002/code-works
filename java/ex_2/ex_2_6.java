/*
This file is named as "DataTypes.java".
*/
public class ex_2_6
{
public static void main(String args[])
{
final double PI=3.14;
byte b=024;                 //-128~127,默认0；8位
    short c=0x17af;         //16位,默认0
int d=10000;                //32位,默认0
long e=-145L;               //64位，默认0L
float f=-8.29F;             //32位，默认 0.0f
double g=1.6E-4;            //64位，默认 0.0d
char h='h';                 //16位
boolean i=false;

System.out.println("b="+b);
System.out.println("c="+c);
System.out.println("d="+d);
System.out.println("e="+e);
System.out.println("f="+f);
System.out.println("g="+g);
System.out.println("h="+h);
System.out.println("i="+i);
}
}