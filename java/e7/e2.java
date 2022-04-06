import java.util.*;
import java.lang.Math;
abstract class Shapes  {
    public  int x,y; //x，y为的坐标
    public  int width,height;
    public  Shapes(int x,int y,int width,int height)  {
        this.x=x;
        this.y=y;
        this.width=width;
        this.height=height;
    }
    public abstract double getArea();
    public abstract double getPerimeter();
    }
Class Rectangle extends Shape{
    public double getArea(){
        return super.length*super.height;
    }
    public double getPerimeter(){
        return 2*(super.length+super.height);
    }
}
Class Circle extends Shape{
Double radius;//半径
    public double getArea(){
        return Math.PI*(radius*radius);
    }
}