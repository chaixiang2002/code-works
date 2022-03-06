public class ex_2_5{
    public static void main(String[] args){
        int a;
        a = 0b10100001 & 0b10000000;
        //c = ?0b10000000
        System.out.println("\t0b"+Integer.toBinaryString(a));

        int b;
        b = 0b10001001 | 0b10000000;
        //b = ?0b10001001
        System.out.println("\t0b"+Integer.toBinaryString(b));

        int c;
        c = ~0b11011110;
        //c = ?0b00100001
        System.out.println("\t0b"+Integer.toBinaryString(c));

        int d;
        d = 0b10010001 ^ 0b10000000;
        //d = ? 0b00010001
        System.out.println("\t0b"+Integer.toBinaryString(d));

        int e;
        e = 0b11110 << 3;
        //e = ?0b11110000
        System.out.println("\t0b"+Integer.toBinaryString(e));

        int f;
        f =   0b10000000100000001010000010000000 >> 3;
        //f = ?0b10000000100000001010000010000
        System.out.println("\t0b"+Integer.toBinaryString(f));

        int g;
        g =   0b10000000100000101000000010000000 >>> 3;
        //g = ? 0b00010000000100000101000000010000
        System.out.println("\t0b"+Integer.toBinaryString(g));
    }
}