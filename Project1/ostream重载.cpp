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
//	friend ostream& operator << (ostream& os, const CStu& st);//友元输出私有成员
//
//};
//
////必须类外声明
//ostream& operator << (ostream& os, const CStu& st) //不修改的值加const更严谨
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