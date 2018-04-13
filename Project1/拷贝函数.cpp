//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	CStu()
//	{
//
//	}
//
//	CStu(const CStu& a) //拷贝构造 --特殊的构造函数
//	{
//
//	}
//};
//void fun(CStu a)
//{
//
//}
//CStu fun()
//{
//	CStu a;
//	return a; //返回一个临时对象
//}
//int main()
//{
//	CStu st1;
//	//fun(st1);//函数参数传递对象的值调用拷贝构造
//	//fun();//不是引用的函数返回值调用拷贝构造
//	//CStu stnew(st1); //用一个现有对象给一个新对象初始化时调用拷贝构造
//	//CStu st2 = st1; //用现有对象给新的对象赋值调用拷贝构造
//	//CStu stnew = CStu(st1); //临时对象给新的对象初始化时调用拷贝构造取决于编译器
//	//CStu* stnew = new CStu(st1);//指针对象初始化调用拷贝构造
//	//CStu st2;
//	//st2 = st1;//赋值不会调用拷贝构造
//	
//	return 0;
//}
//
////何时使用拷贝构造：
////新建一个对象，并将其初始化为同类现有项目
////1.CStu a1(a); 2.CStu a2 = a; 3.CStu a3 = CStu(a); 4.CStu* a4 = new CStu(a);
////当程序生成对象副本时（1.函数参数传递对象的值 2.函数不是引用函数返回对象时）
////引用函数返回值时不创建副本