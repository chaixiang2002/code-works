class Person {
	//姓名
	String name;
	//年龄
	int age;
	//国籍
	//String country;
	static String country;

	public Person(){}

	public Person(String name,int age) {
		this.name = name;
		this.age = age;
	}

	public Person(String name,int age,String country) {
		this.name = name;
		this.age = age;
		this.country = country;
	}

	public void show() {
		System.out.println("姓名："+name+",年龄："+age+",国籍："+country);
	}
}

class q6 {
	public static void main(String[] args) {
		//创建对象1
		Person p1 = new Person("王者",16,"中国");
		p1.show();

		//创建对象2
		Person p2 = new Person("潘长江",42);
		p2.show();

		//创建对象3
		Person p3 = new Person("网红",20);
		p3.show();

		p3.country = "中国";
		p3.show();

		p1.show();
		p2.show();
	}
}