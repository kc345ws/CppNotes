//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int nAge;
//
//	CStu(int age)
//	{
//		nAge = age;
//	}
//
//	int operator>=(CStu& st2)
//	{
//		return(nAge >= st2.nAge);
//	}
//
//	int operator & (CStu& st2)
//	{
//		return (nAge & st2.nAge);
//	}
//};
//
////int operator>=(CStu& st1, CStu& st2)
////{
////	return(st1.nAge > st2.nAge);
////}
//
////int operator & (CStu& st1, CStu& st2)
////{
////	return(st1.nAge & st2.nAge);
////}
//int main()
//{
//	CStu st1(12);
//	CStu st2(13);
//
//	cout << (st1 >= st2) << endl;
//	cout << (st1 & st2) << endl;
//	
//
//	return 0;
//}