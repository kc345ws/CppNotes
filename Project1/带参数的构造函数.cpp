//#include<iostream>
//using namespace std;
//class CStu
//{
//public:
//	int age;
//	float f;
//
//	CStu()//系统默认构造函数，写了构造函数则覆盖
//	{
//
//	}
//
//	//CStu() //多个构造函数构成函数重载
//	//{
//	//	age = 12;
//	//	f = 13.2;
//	//}
//
//	CStu(int a, float b) //构造函数如果有参数必须传递参数，可以指定默认值
//	{
//		age = a;
//		f = b;
//	}
//
//	/*CStu(int a, float b ); *///类外定义只需在类内声明
//};
////CStu::CStu(int a, float b ) //类外定义,函数定义时不允许使用默认值
////{
////	age = a;
////	f = b;
////}
//
//int main()
//{
//	CStu stu(12,12.33);//构造函数传递参数
//	CStu* stu1 = new CStu(124,24.22);
//	CStu stu2; //不传参数不写括号
//	cout << stu.age << " " << stu.f << endl;
//	cout << stu1->age << " " << stu1->f << endl;
//}