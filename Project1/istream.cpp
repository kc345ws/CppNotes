//#include<iostream>
//using namespace std;
//
//class CStu
//{
//private:
//	int nAge;
//	float dbHeight;
//
//public:
//	CStu()
//	{
//		nAge = 0;
//		dbHeight = 0.0;
//	}
//
//	void Show()
//	{
//		cout << nAge << " " <<dbHeight << endl;
//	}
//	friend istream& operator >> (istream& ist, CStu & st);
//};
//
//istream& operator >> (istream& ist, CStu& st) //只能类外重载
//{
//	ist >> st.nAge >> st.dbHeight;
//
//	if (ist.fail()) //检测类型输入是否错误
//	{
//		st.nAge = 0; //错误恢复初始值
//		st.dbHeight = 0;
//	}
//	
//	return ist;
//}
//int main()
//{
//	CStu st;
//	cin >> st;
//	st.Show();
//
//	return 0;
//}