//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//	virtual void fun()
//	{
//		cout << "fun" << endl;
//	}
//	virtual void Show() 
//	{
//		cout << "class CFather" << endl;
//	}
//
//};
//
//class CSon : public CFather
//{
//public:
//	int aa; 
//	
//	 virtual void Show()
//	{
//		cout << "class CSon" << endl;
//	}
//	
//};
//
//class CSonSon : public CSon
//{
//	int aa;
//	void Show() 
//	{
//		cout << "class CSonSon " << endl;
//	}
//};
//
//int main()
//{
//
//	CFather* fa = new CSon;
//	fa->Show();
//	*(int *)*(int *)fa; 
//	//�ұ�*(int *)��ָ��ת��Ϊint�Ͳ�ȡ������׵�ַ�����*(int *)�����ת��Ϊint�Ͳ�ȡ���������
//
//	typedef void(*p)();
//
//	((p)*((int *)*(int *)fa + 0))();
//
//	((p)*((int *)*(int *)fa + 1))();
//
//	int* pp = (int*)*((int *)*(int *)fa + 2);
//
//	
//	CSon* son = new CSonSon;
//	son->Show();
//
//	return 0;
//}