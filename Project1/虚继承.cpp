//#include<iostream>
//using namespace std;
//
////虚继承解决访问不明确问题
//class CA
//{
//public:
//	int a;
//};
////虚继承的所有子类公用一个父类
//class CB : virtual public CA //虚继承只是继承了使用权
//{
//public:
//};
//
//class CC : virtual public CA
//{
//public:
//};
//
//class CD : public CB , public CC
//{
//public:
//};
//
//int main()
//{
//	CD d;
//	d.a;
//	return 0;
//}