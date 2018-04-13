//#include<iostream>
//using namespace std;
////接口类:全都是纯虚函数，可以有构造函数和成员
////只要有纯虚函数的类 就不能创建对象
//class CFather //有纯虚函数的类，必须用子类重写该纯虚函数，才能实例化对象
//{
//public:
//	int a;
//	CFather() 
//	{
//
//	};
//	virtual void fun() = 0; //可以没有实现函数
//	virtual void guu() = 0;
//	virtual ~CFather() = 0;
//};
//
//class CSon : public CFather
//{
//public:
//	void fun()
//	{
//		cout << "CSon" << endl;
//	}
//};
//
//int main()
//{
//	CSon pf;
//
//	return 0;
//}