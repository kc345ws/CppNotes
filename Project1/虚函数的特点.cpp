//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//	//virtual void Show() //��д����麯��
//	//{
//	//	cout << "class CFather" << endl;
//	//}
//	virtual CFather& Show()
//	{
//		cout << "class CFather" << endl;
//		return (*this);
//	}
//};
//
//class CSon : public CFather
//{
//public:
//	int aa; //�麯�� ָ��Գ�Ա����û��Ч��
//	//������д�ĺ�����Ĭ�����麯����������ʾ��virtual
//	/* virtual void Show()
//	{
//		cout << "class CSon" << endl;
//	}*/
//	virtual CSon& Show() //Э�䷵�����Ϳ��Բ�ͬ
//		//�麯���������������������캯��(��������)
//	{
//		cout << "class CSon" << endl;
//		return (*this);
//	}
//};
//
////class CSonSon : public CSon
////{
////	int aa;
////	void Show() //�������ͱ�����ͬ������Ҳ������ͬ
////	{
////		cout << "class CSonSon " << endl;
////	}
////};
//int main()
//{
//
//	CFather* fa = new CSon;
//	fa->Show();
//	CSon* son = new CSonSon;
//	son->Show();
//
//	return 0;
//}