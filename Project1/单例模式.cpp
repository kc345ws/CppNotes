//#include<iostream>
//using namespace std;
//
//class CFather
//{
//private: //����ʵ��������
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
//			return (new CFather); //new CFather���ù��캯��
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
//int CFather::nFlag = 1; // ��̬�������������ʼ��
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