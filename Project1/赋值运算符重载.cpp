//#include<iostream>
//using namespace std;
//
//class CStu
//{
//	friend CStu& operator+=(CStu& st1, int a);
//private:
//	
//	double dbHeight;
//
//public:
//
//	int nAge;
//
//	CStu()
//	{
//		nAge = 0;
//		dbHeight = 0.0;
//	}
//
//	//int operator=(int a) //ĳЩ�����ֻ����������
//	//{
//	//	nAge = a;
//	//	return nAge;
//
//	//}
//	
//};
//
////CStu& operator+=(CStu& st1, int a)  //���ض���
////{
////	st1.nAge = st1.nAge + a;
////	return st1;
////} 
//
//int& operator+=(CStu& st1, int a)   //���س�Ա
//{
//	st1.nAge = st1.nAge + a;
//	return st1.nAge;
//}
//int main()
//{
//	int a = 111;
//	CStu st;
//	st +=a+= 113 ;
//	cout << st.nAge << endl;
//	cout << (st = 113) << endl;
//	
//	return 0;
//}