import java.util.Arrays;
public class e1_3
{
    public static void main(String args[])
    {
        String[] name = {"张爱民","李小华","王中军","赵伟","孙大庆","何小泉"};
        int[] age = {52,11,74,15,36,60};
        int sums=0;
        for(int i=0;i<age.length;++i){
            if(age[i]>50){
                ++sums;
                System.out.print(name[i]+"\t");
            }
        }
        System.out.println("\n年龄在50岁以上的患者人数:"+sums);
    }
}