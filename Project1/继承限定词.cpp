//#include<iostream>
//using namespace std;
//
//class CPeople
//{
//private:
//
//	void fun1()
//	{
//		cout << "Father private" << endl;
//	}
//
//protected:
//
//	void fun2()
//	{
//		cout << "Father protected" << endl;
//	}
//
//public:
//
//	void fun3()
//	{
//		cout << "Father public" << endl;
//	}
//
//
//};
////public 父类怎么样，子类怎么样
////protected 继承之后，父类publi降级为portected 同级或低级不变，不会改变父类的属性
////private 全部变为private
//class Cxiaoming : public CPeople 
//{
//public:
//	int a;
//};
//
//class Cxiaohua : public Cxiaoming
//{
//	void fun5()
//	{
//		fun()3;
//	}
//};
//int main()
//{
//	Cxiaoming xm;
//	xm.fun3();
//	xm.fun2();
//	xm.fun1();
//	return 0;
//}