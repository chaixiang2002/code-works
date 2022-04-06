import java.util.*;
class Rectangle{
    public int longth,width;
    public Rectangle(int len,int width){
        this.longth=len;
        this.width=width;
    }
    public int getArea(){
        return this.longth*this.width;
    }
    public int getCir(){
        return 2*(this.longth+this.width);
    }
    public void print(){
        System.out.println("len: "+this.longth+" wid: "+this.width+"  area: "+getArea());
    }
}
class Square extends Rectangle{
    public Square(int len){
        super(len,len);
    }
}

public class e4{
    public static void main(String[] arg){
        Rectangle[] myR=new Rectangle[10];
        int sum_area=0;
        for(int i=0;i<10;++i){
            myR[i]=new Square(i);
            sum_area+=myR[i].getArea();
            myR[i].print();
        }
        System.out.println(sum_area);
    }
}