import java.math.BigDecimal;
class students{
    private String name;
    private int age;
    public students(String name,int age){
        this.name=name;
        this.age=age;
    }
    public void print(){
        System.out.println("name:"+this.name+",age:"+this.age);
    }
}
class stu{
    private String name;
    private int age;
    public stu(){}
    public void print(){
        System.out.println("name:"+this.name+",age:"+this.age);
    }
    public void setname(String name){
        this.name=name;
    }
    public void setage(int age){
        this.age=age;
    }
}
public class q6_1 {
    public static void main(String[] args){
        students c1=new students("c1",12);
        c1.print();
        stu c2=new stu();
        c2.setname("cx2");
        c2.setage(13);
        c2.print();
    }
 }