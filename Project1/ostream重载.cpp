//#include<iostream>
//using namespace std;
//
//class CStu
//{
//private:
//
//	int nAge;
//
//public:
//
//	CStu()
//	{
//		nAge = 12;
//	}
//
//	friend ostream& operator << (ostream& os, const CStu& st);//��Ԫ���˽�г�Ա
//
//};
//
////������������
//ostream& operator << (ostream& os, const CStu& st) //���޸ĵ�ֵ��const���Ͻ�
//{
//	os << st.nAge;
//	return os;
//}
//
//int main()
//{
//	CStu st;
//	cout << st << st << st;
//	return 0;
//}