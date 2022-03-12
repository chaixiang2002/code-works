import java.util.*;

public class ex1_4{
    public static void main(String[] ard){
        Scanner in=new Scanner(System.in);
        int head=in.nextInt(),feet=in.nextInt();
        if(head<=0 || feet<=0 || feet%2!=0 || feet<2*head || feet>4*head){
            System.out.printf("不合法！");
            return;
        }
        int rabbit,chicken;
        rabbit=(feet-2*head)/2;
        chicken=head-rabbit;
        System.out.printf("兔子和鸡分别为：%d,%d",rabbit,chicken);
    }

}