import java.util.*;
public class e1_9
{
public static int[] sort(int[] nums ){
    for(int i=1;i<nums.length;++i)
        for(int j=0;j<nums.length-i;++j){
            if(nums[j]>nums[j+1]){
                int t=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=t;
            }
        }
    return nums;
}

public static void main(String args[])
{
    Random in=new Random();
    int[] nums=new int[10];
    for(int i=0;i<10;++i)
        nums[i]=in.nextInt(1000);

    int[] res=sort(nums);
    for(int i=0;i<10;++i)
        System.out.print(res[i]+"\t");
}
};