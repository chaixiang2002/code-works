import java.util.Scanner;
public class e1_7
{
public static void main(String args[])
{
    double[][] paitent=new double[4][3];
    Scanner in=new Scanner(System.in);
    for(int i=0;i<paitent.length;++i){
        for(int j=0;j<paitent[i].length;++j){
            paitent[i][j]=in.nextDouble();
        }
    }
    for(int i=0;i<paitent.length;++i){
        for(int j=0;j<paitent[i].length;++j){
            System.out.print(paitent[i][j]+"\t");
        }
        System.out.println();
    }

}
}