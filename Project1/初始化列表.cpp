//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int a;
//	float f;
//	//成员变量初始化只和声明顺序有关,与初始化列表书写顺序无关
//	CStu(int d , float c) : a(d) , f(c) //初始化列表
//	{
//		/*a = 13;*/ //赋值会覆盖初始化
//		/*cout << a << " " << f << endl;*/ //不建议在构造函数加除赋值以外的东西
//	}
//	void show()
//	{
//		cout << a << " " << f << endl;
//	}
//};
//int main()
//{
//	CStu stu(13 , 13.231);
//	stu.show();
//	return 0;
//}