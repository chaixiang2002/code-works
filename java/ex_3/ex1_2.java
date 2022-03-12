import java.util.*;

public class ex1_2{
    public static void main(String[] ard){
        Scanner in=new Scanner(System.in);
        double y,x=in.nextDouble();
        if(x<1) y=x;
        else if(x>=1 && x<10) y=2*x-1;
        else  y=3*x-11;

        System.out.printf("y="+y);
    }
}