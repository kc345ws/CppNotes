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
//	CFather(int a) : CgrandFather(2 , 4)  //���๹�캯���в�������������ʼ���б��ݲ���
//	{
//		cout << "i am Father class" << endl;
//	}
//};
//
//class CSon : public CFather
//{
//public:
//	int a;
//	CSon() : CFather(1) //����Խ����ʼ��
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