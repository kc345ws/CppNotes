//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int a;
//	CStu(int a)
//	{
//		this->a = a; //CStu* this->a������ĳ�Ա���� a���ھֲ����� ����ͬ��
//		this->show();
//	}
//	void show()
//	{
//		cout << a << endl;
//	}
//
//	CStu* GetAddr()
//	{
//		return this;//����*this ���غ����ĵ�ַ
//	}
//};
//int main()
//{
//	CStu stu(12);
//	stu.show();
//	CStu st1(13); //this�����������У�thisָ�벻�ǳ�Ա�������Ա����������������������������ڲ�����
//	CStu st(123);
//	CStu* p = st.GetAddr();
//	cout << p << endl;
//	p = stu.GetAddr();
//	cout << p << endl;
//	return 0;
//}