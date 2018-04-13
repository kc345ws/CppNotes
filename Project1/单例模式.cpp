//#include<iostream>
//using namespace std;
//
//class CFather
//{
//private: //不能实例化对象
//	CFather()
//	{
//
//	}
//
//public:
//	static int nFlag ;
//
//	static CFather* CreateOJ()
//	{
//		if (nFlag == 1)
//		{
//			return (new CFather); //new CFather调用构造函数
//			nFlag = 0;
//		}
//		else
//			return NULL;
//	}
//
//	~CFather()
//	{
//		nFlag = 1;
//	}
//
//};
//
//int CFather::nFlag = 1; // 静态变量必须类外初始化
//
//class CSon 
//{
//public:
//};
//
//int main()
//{
//	CFather* pf = CFather::CreateOJ();
//	delete pf;
//	CFather* pf1 = CFather::CreateOJ();
///*
//	if(pf1==NULL)
//	{ 
//
//	}*/
//	return 0;
//}