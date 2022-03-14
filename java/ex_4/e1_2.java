import java.util.Arrays;
public class e1_2
{
    public static void main(String args[])
    {
        int[] amount = {60,27,42,63,19,31};
        int[] number=Arrays.copyOf(amount,amount.length);
        for(int a:amount)
            System.out.print(a+"\t");
        System.out.println();
        for(int a:number)
            System.out.print(a+"\t");
    }
}