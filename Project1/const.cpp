//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int a;
//	CStu() //构造函数析构函数不能为常函数
//	{
//		a = 12;
//	}
//	void show() const //常函数明确函数作用
//	{
//		//a = 13; //常函数可以使用数据类的成员但不能修改数据成员
//		int b = 2;//常函数内部允许修改数据成员
//		cout << "I'm show()" << endl;
//	}
//	void fun()
//	{
//		cout << "I'm fun()" << endl;
//	}
//};
//int mina()
//{
//	CStu stu;
//	stu.show();
//	const CStu st;
//	st.show();
//	//st.fun(); //常对象只能调用常函数
//	return 0;
//}