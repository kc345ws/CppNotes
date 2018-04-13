//#include<iostream>
//using namespace std;
//
//class CPeople  //基类  父类
//{
//public:
//	void Study()
//	{
//		cout << "Study" << endl;
//	}
//};
//
//class CChild : public CPeople  //派生类  子类
//{
//public:
//	void GoTOSchool()
//	{
//		cout << "GoTOSchool" << endl;
//	}
//};
//
//class CManWoman : public CPeople
//{
//public:
//	void GoToWork()
//	{
//		cout << "GoToWork" << endl;
//	}
// 
//};
//
//class COldMan : public CPeople
//{
//public:
//	void GoToPark()
//	{
//		cout << "GoToPark" << endl;
//	}
//};
//
//int main()
//{
//	CChild child;
//	child.Study();
//
//	COldMan oldman;
//	oldman.Study();
//
//	CPeople cpo;
//	cpo.Study();
//
//	CChild *child1 = new CChild;
//	child1->Study();
//
//	return 0;
//}