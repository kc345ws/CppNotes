//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int b;
//	char c[4];
//
//	CStu()
//	{
//		b = 12;
//		c[0] = 'a';
//		strcpy(c, "abc"); 
//	}
//
//	CStu(const CStu& a) //ϵͳĬ�Ͽ�������Ϊǳ����
//	{
//		this->b = a.b;
//		strcpy(this->c, a.c);
//	}
//};
//int main()
//{
//	CStu st;
//	cout << st.b << " " << st.c << endl;
//	CStu st1 = st;
//	cout << st1.b << " " << st.c << endl;
//}
//
////Ĭ�ϵĸ�ֵ���캯����������ƷǾ�̬��Ա(��Ա�ĸ��Ƴ�Ϊǳ����)�����Ƶ��ǳ�Ա��ֵ