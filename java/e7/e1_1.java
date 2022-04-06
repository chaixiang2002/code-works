import java.util.*;
abstract class Student {
    final static int CourseNo = 3;
    private String name;
	private String type;
    private int[]  courses;
    private String  courseGrade;

public Student(){ }

    public Student(String name,String type)
    {
        this.name = name;
        this.type = type;
        courses = new int[this.CourseNo];///??????????
        courseGrade="";
    }
    public abstract void calculateGrade();

	public String getName( )
{  	return name;    }

	public String getType( )
    {
         return type; //返回学生类型
    }
	public String getCourseGrade( )
    {
      return courseGrade;
    }

    public int getCourseScore(int courseNumber)
    {
      return courses[courseNumber];
    }

    public void setName(String name)
    {
      this.name = name;
    }

	public void setType(String type)
    {
      this.type = type;
    }

    public void setCourseScore(int courseNumber, int courseScore)
    {
        this.courses[courseNumber]=courseScore;//______4_______;//按课程索引号设置课程成绩
    }
	public void setCourseGrade(String courseGrade) {
		this.courseGrade = courseGrade;
	}
}

class Postgraduate extends Student {//______5_____
    public Postgraduate(String name)
    {
       super(name,"研究生");
    }
    public void calculateGrade()
    {
        int total = 0;
        double average = 0;
        for (int i = 0; i < CourseNo; i++) {
            total =total + getCourseScore(i);
        };
        average = total / CourseNo;
        String currentGrade="";
        if (average>=90){
            currentGrade = "优秀";
        }
        else if (average>=80&&average<90) {
            currentGrade = "良好";
        }
        else if (average>=70&&average<80) {
            currentGrade = "一般";
        }
        else if (average>=60&&average<70) {
            currentGrade = "及格";
        }
        else{
            currentGrade = "不及格";
        }
        setCourseGrade(currentGrade);
     }
 }

 class Undergraduate extends Student {
    public Undergraduate(String name)
	{
        super(name,"Undergraduate");
    }
    public void calculateGrade() {
      int total = 0;
	  double average = 0;
      for (int i = 0; i < CourseNo; i++) {
         total=total+getCourseScore(i); // 累加各门课程成绩
      };
      average = total / CourseNo;
      String currentGrade="";
      if (average>=80&&average<100){
    	  currentGrade = "优秀";
      }
	  else if (average>=70&&average<80){
		  currentGrade = "良好";
	  }
	   else if (average>=60&&average<70){
		   currentGrade = "一般";
	   }
	   else if (average>=50&&average<60){
		   currentGrade = "及格";
	   }
	   else{
		   currentGrade = "不及格";
	   }
      setCourseGrade(currentGrade);
    }
}

public class e1_1 {
	public static void main(String[] args) {
		Student[] studentArray = new Student[5];
		studentArray[0]=new Undergraduate("张三");//____11______ 	 //本科生张三
		studentArray[1]=new Undergraduate("李四");//____12______	//本科生李四
		studentArray[2]=new Postgraduate("王五");//____13______	//研究生王五
		studentArray[3]=new Postgraduate("赵六"); //____14______	//本科生赵六
		studentArray[4]=new Postgraduate("钱七"); // ____15______	//研究生钱七

		 for (int i=0; i<studentArray.length;i++) {
			 studentArray[i].setCourseScore(0,87);
			 studentArray[i].setCourseScore(1,90);
			 studentArray[i].setCourseScore(2,78);
		 }
	     for (int i=0; i<5 ;i++) {
	    	 studentArray[i].calculateGrade();
		 }
	     System.out.println("姓名" + "     类型" +"    成绩");
		 System.out.println("-----------------------");

		 for (int i=0; i<5 ;i++) {
	       System.out.println(studentArray[i].getName( )+"   "+
	    		   studentArray[i].getType( )+"  "+
	    		   studentArray[i].getCourseGrade( ));
		 }
	  }

}