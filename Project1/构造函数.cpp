//#include<iostream>
//using namespace std;
//class CStu 
//{
//public:
//	int age;//类型没有分配空间不能赋值
//	float f;
//	CStu()//声明只能用类名，构造函数，自动调用，没有返回值
//	{
//		age = 12;
//		f = 12.12;
//	}
//	void fun() //类的初始化函数,手动调用吧
//	{
//		age = 12;
//		f = 12.12;
//	}
//};
//int main()
//{
//	CStu stu;
//	CStu *stu1= new CStu;//指针对象不会调用构造函数,除非申请空间
//
//	//stu.fun(); //可能忘记调用
//	cout << stu.age <<" "<< stu.f << endl;
//	return 0;
//}