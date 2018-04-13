//#include<iostream>
//using namespace std;
//
//class CgrandFather
//{
//public:
//	CgrandFather(int a, int b)
//	{
//		cout << "i am grandFather" << endl;
//	}
//};
//
//class CFather : public CgrandFather
//{
//public:
//	CFather(int a) : CgrandFather(2 , 4)  //父类构造函数有参数，子类必须初始化列表传递参数
//	{
//		cout << "i am Father class" << endl;
//	}
//};
//
//class CSon : public CFather
//{
//public:
//	int a;
//	CSon() : CFather(1) //不能越级初始化
//	{
//		cout << "i am son" << endl;
//	}
//};
//
//int main()
//{
//	CSon son;
//	return 0;
//}