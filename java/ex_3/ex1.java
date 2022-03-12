import java.util.*;

public class ex1{
    public static void main(String[] ard){
        Scanner in=new Scanner(System.in);
        double a=in.nextDouble(),b=in.nextDouble(),c=in.nextDouble();
        double s=(a+b+c)/2;
        System.out.printf("area="+Math.sqrt(s*(s-a)*(s-b)*(s-c)));
    }
}