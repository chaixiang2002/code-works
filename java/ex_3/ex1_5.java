import java.util.*;

public class ex1_5{
    public static void main(String[] ard){
        A:for(int i=1;i<=5;i++)
    	{
    	  System.out.println("输出第"+i+"行数据：");
                for(int j=1;j<=5;j++)
                {
        	       System.out.print(j+",");
        	       if( j==3 )
        	       {
                        System.out.print("\n");
                        break A;
        	       }
                }
    	}

    }
}
 // int x = 3;
// int y = 4;
// switch(x+3){
//   case 6: y=1;
//   case 9: y=8;
// default: y *= 2;
// System.out.println(y);
// }for(int i=1;i<=5;i++)
    	// {
    	//   System.out.println("输出第"+i+"行数据：");
        //         for(int j=1;j<=5;j++)
        //         {
        // 	       System.out.print(j+",");
        // 	       if( j==3 )
        // 	       {
        //                  System.out.print("\n");
        //                  break;
        // 	      }
        //           }
    	// }