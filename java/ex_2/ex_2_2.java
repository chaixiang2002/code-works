import java.util.*;
public class ex_2_2{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt(),b=in.nextInt(),c=in.nextInt();
        int r1=a>b?a:b;
        int r2=r1>c?r1:c;
        System.out.println("Max_nums:"+r2);
    }
}