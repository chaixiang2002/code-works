public class ex1_7
{
public static void main(String args[])
{
    for(int i=1;i<=100;++i){
        int sq=(int)(Math.sqrt(i));
        for(int j=2;j<=sq;++j){
            if(i%j==0)
                break;
            if(j==sq && i%j!=0)
                System.out.print(i+"\t");
        }
    }

}
}