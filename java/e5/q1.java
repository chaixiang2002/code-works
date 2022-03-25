import java.util.*;
class students{
    String name;
    int age;
    void learn(){
        System.out.println("leran");
    }
    void exam(){
        System.out.println("exam");
    }
    void print(){
        System.out.println(this.name);
        System.out.println(this.age);
    }
   public students(String _name,int _age){
        this.name=_name;
        this.age=_age;
    }
}
public class q1 {
    public static void main(String[] args){
        students cx=new students("cx",12);
        cx.learn();
        cx.exam();
        cx.print();

    }
 }