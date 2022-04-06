import java.util.*;
interface maveable{
    default void mave_left(){System.out.println("walk left!");}
    default void mave_right(){System.out.println("walk right!");}
    default void mave_up(){System.out.println("walk up!");}
    default void mave_down(){System.out.println("walk down!");}
}

class car implements maveable{
    public void mave_left(){System.out.println("car walk left!");}
    public void mave_right(){System.out.println("car walk right!");}
    public void mave_up(){System.out.println("car walk up!");}
    public void mave_down(){System.out.println("car walk down!");}
}
class Ship implements maveable{
    public void mave_left(){System.out.println("Ship walk left!");}
    public void mave_right(){System.out.println("Ship walk right!");}
    public void mave_up(){System.out.println("Ship walk up!");}
    public void mave_down(){System.out.println("Ship walk down!");}
}
class Aircraft implements maveable{
    public void mave_left(){System.out.println("Air walk left!");}
    public void mave_right(){System.out.println("Air walk right!");}
    public void mave_up(){System.out.println("Air walk up!");}
    public void mave_down(){System.out.println("Air walk down!");}
}


public class e3_5{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        maveable[] maveArrays=new maveable[3];
        maveArrays[0]=new car();
        maveArrays[1]=new Ship();
        maveArrays[2]=new Aircraft();
        System.out.println("please emter a number!");
        int i=in.nextInt();
        maveArrays[i].mave_left();
        maveArrays[i].mave_right();
        maveArrays[i].mave_up();
        maveArrays[i].mave_down();
    }
}