import java.util.*;

public class ex1_3{
    public static void main(String[] ard){
        Scanner in=new Scanner(System.in);
        double score=in.nextDouble();
        if(score>=90)
            System.out.printf("优秀");
        else if(score>=80 && score<90)
            System.out.printf("良好");
        else if(score>=70 && score<80)
            System.out.printf("中等");
        else if(score>=60 && score<70)
            System.out.printf("及格");
        else
            System.out.printf("不及格");
    }
}