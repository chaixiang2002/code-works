import java.util.Random;

class department{
     String name;
     int sums;
    department(String na,int n){
        this.name=na;
        this.sums=n;
    }
    @Override
    public int compara(department d1,department d2){
        if(d1.sums>d2.sums)
            return 1;
        else
            return -1;
    }

};
public class e1_1
{
static int  max_department(department d[],int n){
    int max=d[0].sums;
    for(int i=1;i<n;++i){
        if(d[i].sums>max){
            max=i;
        }
    }
    return max;
}
public static void main(String args[])
{
    Random r= new Random();
    department[] d=new department[6];
    d[1]=new department("内科",r.nextInt(50));
    d[2]=new department("外科",r.nextInt(50));
    d[3]=new department("妇科",r.nextInt(50));
    d[4]=new department("儿科",r.nextInt(50));
    d[5]=new department("口腔科",r.nextInt(50));
    d[0]=new department("骨科",r.nextInt(50));
    int mmax=max_department(d,6);
    System.out.println(d[mmax].name+":"+d[mmax].sums);
}
}