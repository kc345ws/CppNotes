//#include<iostream>
//using namespace std;
//
//class CPeople  //����  ����
//{
//public:
//	void Study()
//	{
//		cout << "Study" << endl;
//	}
//};
//
//class CChild : public CPeople  //������  ����
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