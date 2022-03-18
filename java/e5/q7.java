import java.math.BigDecimal;
 public class q7 {
    public static void main(String[] args){
        BigDecimal a1=new BigDecimal(Math.log(1000));
        BigDecimal a2=new BigDecimal(Math.log(10));
        BigDecimal num =a1.divide(a2,1);
        System.out.print(num);
    }
 }