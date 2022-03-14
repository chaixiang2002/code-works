import java.util.*;
public class e1_4
{//未实现
    public static void main(String args[])
    {
        List<department> d=new ArrayList<department>();
        department ddd=new department("内科",60);
        d.add(ddd);
        d.add(new department("外科",27));
        d.add(new department("妇科",42));
        d.add(new department("儿科",63));
        d.add(new department("口腔科",19));
        d.add(new department("骨科",31));

        // Collections.sort(d,new Comparator<department>()){
        //     public int compara(department o1,department o2){
        //         return o1.sums.comparaTo(o2.sums);
        //     }
        // }
        Collections.sort(d,ddd);
        System.out.println("科室名称：就诊患者人数");
        for(department dd:d){
            System.out.println(dd.name+"："+dd.sums);
        }
        // d[1]=new department("内科",60);
        // d[2]=new department();
        // d[3]=new department();
        // d[4]=new department("儿科",63);
        // d[5]=new department("口腔科",19);
        // d[0]=new department("骨科",31);
    }
}