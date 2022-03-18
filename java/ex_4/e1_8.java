import java.util.*;
class num{
    int val;
    static int key_o=0;
    num(int vall){
        this.val=val;
        if(vall%2==0)
            num.key_o+=1;
    }

};
public class e1_8
{
public static void main(String args[])
{
    num[] nums=new num[10];
    Random r=new Random();
    for(int i=0;i<10;++i)
        nums[i] =new num(r.nextInt());

    for(int i=0;i<10;++i)
        System.out.print(nums[i].val+"\t");
    int fo=10-num.key_o;
    System.out.println();
    System.out.print("o:"+num.key_o+",j:"+fo);

}
};