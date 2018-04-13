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
//	//int operator=(int a) //某些运算符只能类内重载
//	//{
//	//	nAge = a;
//	//	return nAge;
//
//	//}
//	
//};
//
////CStu& operator+=(CStu& st1, int a)  //返回对象
////{
////	st1.nAge = st1.nAge + a;
////	return st1;
////} 
//
//int& operator+=(CStu& st1, int a)   //返回成员
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