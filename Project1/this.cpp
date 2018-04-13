//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int a;
//	CStu(int a)
//	{
//		this->a = a; //CStu* this->a属于类的成员变量 a属于局部变量 区分同名
//		this->show();
//	}
//	void show()
//	{
//		cout << a << endl;
//	}
//
//	CStu* GetAddr()
//	{
//		return this;//或者*this 返回函数的地址
//	}
//};
//int main()
//{
//	CStu stu(12);
//	stu.show();
//	CStu st1(13); //this创建对象后才有，this指针不是成员，是类成员函数的隐含参数，作用域是类的内部函数
//	CStu st(123);
//	CStu* p = st.GetAddr();
//	cout << p << endl;
//	p = stu.GetAddr();
//	cout << p << endl;
//	return 0;
//}