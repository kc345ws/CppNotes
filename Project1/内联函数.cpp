//#include<iostream>
//using namespace std;
//
//#define SUM(x) x*x
//
//inline void fun(int i) //递归函数不能做内联函数
//{
//	cout << (i*i) << endl;
//}
////类内函数通常将定义写在头文件中
//
//class CStu
//{
//public:
//	void fun() //定义在类内的函数默认为内联函数
//	{
//
//	}
//	void fun1()
//	{
//
//	}
//	void fun1();
//};
//
//void CStu::fun1()//定义在类外的函数默认不是内联函数
//{
//
//}
//
//int main()
//{
//	cout << (SUM( 2+ 3)) << endl;
//	fun(2+3);
//}
//
//inline void fun()
//{
//
//}