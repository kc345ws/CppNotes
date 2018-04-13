//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	//静态整型常量才可直接赋值
//	static int a; //类外初始化 所有类公用的会互相影响
//	int a; //每个类私有的不会相互影响
//	static void fun() //不能用this 只能调用静态成员
//	{
//		cout << "I'm static" << endl;
//	}
//	CStu() //:a(2) //静态成员不能使用构造函数赋值
//	{
//
//	}
//};
//int CStu::a = 13; //类外初始化不加static
//int main()
//{
//	//类名作用域调用
//	cout << CStu::a << endl;
//	CStu::fun();
//	//对象调用
//	CStu stu;
//	cout << stu.a << endl;
//	stu.fun();
//	return 0;
//}