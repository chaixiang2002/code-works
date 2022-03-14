import java.util.Arrays;
public class tmp
{
    public static void main(String args[])
    {
        int[] amount = {60,27,42,63,19,31};

        int[] number = amount;
        //int[] number=Arrays.copyOf(amount,amount.length);













        for(int a:amount)
            System.out.print(a+"\t");
        System.out.println();

        for(int a:number)
            System.out.print(a+"\t");
        System.out.println();

        System.out.println("a[1]"+amount[1]);
        number[1] = 100;

        for(int a:number)
            System.out.print(a+"\t");
        System.out.println("\na[1]"+amount[1]);

    }
}