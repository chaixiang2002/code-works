public class e1_6
{
public static void main(String args[])
{
    int[][] a = {{12,23,34},{6,8},{132,354,671,539}};
    for(int i=0;i<a.length;++i){
        for(int j=0;j<a[i].length;++j){
            System.out.print(a[i][j]+"\t");
        }
        System.out.println();
    }
}
}