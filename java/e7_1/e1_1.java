class Fu
{
	public void show()
	{
		System.out.println("fu show");
	}
}

class Zi extends Fu
{
	public void show()
	{
		System.out.println("zi show");
	}

	public void method()
	{
		System.out.println("zi method");
	}
}
class e1_1
{
	public static void main(String[] args)
	{
		Fu f = new Zi();
		f.method();
	}
}
// ????????????????????????????????????????????
// e1_1.java:26: 错误: 找不到符号
//                 f.method();
//                  ^
//   符号:   方法 method()
//   位置: 类型为Fu的变量 f
// 1 个错误