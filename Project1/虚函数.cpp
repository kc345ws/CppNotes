//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//	 virtual void Show() //�麯�� ������ͬ��������������
//	{
//		cout << "class CFather" << endl;
//	}
//};
//
//class CSon : public CFather
//{
//public:
//	int aa;
//	void Show()
//	{
//		cout << "class CSon" << endl;
//	}
//};
//
//class CSon1 : public CFather //������࣬������͵��������
//{
//public:
//	int aa;
//	void Show()
//	{
//		cout << "class CSon1" << endl;
//	}
//};
//int main()
//{
//	CFather* fa = new CSon1; // �麯��:�����ָ�룬��������ĺ���
//	//ָ��˭�͵����ĸ�����
//	fa->Show(); //��ͨ��ֻ�ܵ��ø���ĳ�Ա
//
//	int*a = new int;
//	return 0;
//}