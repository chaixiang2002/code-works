public class Classname{
    static int objectice_num;
    int num;
    public Classname(String name){
        System.out.println("object's name is :"+name);
    }


    public static void main(String[] args){
        Classname.objectice_num=0;
        Classname object1=new Classname("c1");
        object1.objectice_num++;
        Classname object2=new Classname("c2");
        object2.objectice_num++;
        Classname object3=new Classname("c3");
        object3.objectice_num++;
        Classname object4=new Classname("c4");
        object4.objectice_num++;
System.out.println(Classname.objectice_num);
    }
}