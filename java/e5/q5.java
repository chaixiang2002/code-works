import java.math.BigDecimal;

abstract class qq{
    public abstract int area();
    public abstract int c();
}

class rectanglee{
    private int len;
    private int width;
    rectanglee(int l,int w){
        this.len=l;
        this.width=w;
    }
    public int get_len(){
        return this.len;
    }
    public int get_wid(){
        return this.width;
    }
    public int area(){
        return get_len()*get_wid();
    }
    public int c(){
        return 2*(get_len()+get_wid());
    }
    public void print(){
        System.out.println("area:"+area()+",c:"+c());
    }
}
 public class q5 {
    public static void main(String[] args){
        rectanglee rec=new rectanglee(4,5);
        rec.print();
    }
 }