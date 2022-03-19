## C++ 引用 vs 指针

引用很容易与指针混淆，它们之间有三个主要的不同：

* 不存在空引用。引用必须连接到一块合法的内存。
* 一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
* 引用必须在创建时被初始化。指针可以在任何时间被初始化。

**int& r = i;** 和 **int r = i;** 不同之处应该是内存的分配吧，后者会再开辟一个内存空间


#### 1.C++ **把引用作为参数**

```
void swap(int& x, int& y)
{
   int temp;
   temp = x; /* 保存地址 x 的值 */
   x = y;    /* 把 y 赋值给 x */
   y = temp; /* 把 x 赋值给 y  */

   return;
}
 /* 调用函数来交换值 */
   swap(a, b);
```

以引用作为参数的函数，可以把变量传入，但不能传入常量。

```
struct Demo
{
  char name[10000];
  int  count;
};

int main()
{
  Demo my_demo = {0};
  Demo *my_demo_p = &my_demo;
  Demo &my_demo_ref = my_demo;

  // 方式1：传递实参
  func1(my_demo);

  // 方式2：传递指针
  func2(my_demo_p);

  // 方式3：传递引用
  func3(my_demo_ref);

  return 0;
}
如上所示，参数传递可以有三种方式，则三种函数可以这样定义：

// 方式1：传递实参
void func1(Demo demo)
{
  cout << demo.name;
}

// 方式2：传递指针
void func2(const Demo *demo_p)
{
  cout << demo->name;
}

// 方式3：传递引用
void func3(const Demo &demo_ref)
{
  cout << demo.name;
}
```

可以看出，引用和实参的使用方式很像，但注意以下几点：

* 从内存使用的角度来说，传递实参，则会将数据拷贝过去（创建了副本），即 func1 对传入的数据做任何修改，都不会影响 my_demo。
* 既然传递实参要创建副本，就意味着效率更低。例子中结构体的 name 成员长度为 10000，就是要突出这个效率问题。

引用和指针也很像，它们都不会创建副本，因此效率都很高。它们的主要区别在于：

* 选择成员的时候，引用使用点 **.** 来查找，而指针则使用 **->** 来查找。
* 指针可能传递一个 NULL 过来，因此在使用前必须检查有效性；引用则必然代表某个对象，不需要做此检查。

  ```
  #include <iostream>
  using namespace std;

  // 函数声明
  void swap(int& x, int& y);

  int main ()
  {
     // 局部变量声明
     int a = 100;
     int b = 200;

     cout << "交换前，a 的值：" << a << endl;
     cout << "交换前，b 的值：" << b << endl;

     /* 调用函数来交换值 */
     swap(a, b);

     cout << "交换后，a 的值：" << a << endl;
     cout << "交换后，b 的值：" << b << endl;

     return 0;
  }

  // 函数定义
  void swap(int& x, int& y)
  {
     int temp;
     cout << "调用的函数中的交换:"<<endl;
     cout  << x <<endl;
     cout << y <<endl;
     temp = x; /* 保存地址 x 的值 */
     x = y;    /* 把 y 赋值给 x */
     y = temp; /* 把 x 赋值给 y  */
     cout  << x <<endl;
     cout << y <<endl;
     return;
  }
  ```

实现了真正的交换:

```
100
200
200
100
交换后，a 的值：200
交换后，b 的值：100
```

#### 2.C++ **把引用作为返回值**

```

#include <iostream>

using namespace std;

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double& setValues(int i) {
   double& ref = vals[i];
   return ref;   // 返回第 i 个元素的引用，ref 是一个引用变量，ref 引用 vals[i]


}

// 要调用上面定义函数的主函数
int main ()
{

   cout << "改变前的值" << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "vals[" << i << "] = ";
       cout << vals[i] << endl;
   }

   setValues(1) = 20.23; // 改变第 2 个元素
   setValues(3) = 70.8;  // 改变第 4 个元素

   cout << "改变后的值" << endl;
   for ( int i = 0; i < 5; i++ )
   {
       cout << "vals[" << i << "] = ";
       cout << vals[i] << endl;
   }
   return 0;
}
```

返回一个引用时，要注意被引用的对象不能超出作用域。所以返回一个对局部变量的引用是不合法的，但是，可以返回一个对静态变量的引用

```
int &changevalue()
{
    static int a_return =-29;
    return a_return;
}

int main()
{
    int &a_return=changevalue();
    a_return =20;
    cout<<changevalue()<<endl;
    system("pause");
}
```
