//#include<iostream>
//using namespace std;
//
//class CGrandFather
//{
//public:
//	CGrandFather()
//	{
//		cout << "CGrandFather" << endl;
//	}
//	~CGrandFather()
//	{
//		cout << "CGrandFather" << endl;
//	}
//};
//
//class CFather : public CGrandFather
//{
//public:
//	CFather()
//	{
//		cout << "CFather" << endl;
//	}
//	~CFather()
//	{
//		cout << "CFather" << endl;
//	}
//};
//
//class CSon : public CFather
//{
//public:
//	CSon()
//	{
//		cout << "CSon" << endl;
//	}
//	~CSon()
//	{
//		cout << "CSon" << endl;
//	}
//};
//
//int main()
//{
//	{
//		CSon son; //先构造再析构 构造和析构调用顺序相反
//	}
//	return 0;
//}