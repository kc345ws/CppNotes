#include<iostream>
using namespace std;
int main()
{
	int mark[10], i, j, x;
	double average=0;
	for (i = 0; i < 10; i++)
	{
		cin >> mark[i];
		if (mark[i] > 100 || mark[i] < 0)
		{
			cout << "the score is invalid." << endl;
			exit(0);
		}
	}
	for (i = 0;i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (mark[0] < mark[j])
			{
				x = mark[0];
				mark[0] = mark[j];
				mark[j] = x;
			}
		}
	}
	mark[0] = 0;
	for (i = 1; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (mark[9] > mark[j])
			{
				x = mark[9];
				mark[9] = mark[j];
				mark[j] = x;
			}
		}
	}
	mark[9] = 0;
	for (i = 0; i < 10; i++)
		average += mark[i];
	cout << average / 8 << endl;
	return 0;
}



//��Ŀ���ݣ�
//�質����ѡ�ֳɼ����㷽�����£�ȥ��һ����߷֣�ȥ��һ����ͷ֣���ʣ�·�����ƽ��ֵ��Ϊѡ�ֵ����ɼ���������蹲��10λ��ί�����ǰ��հٷ��ƴ�֡�
//�������н�����£�
//88 90 97 89 85 95 77 86 92 83
//88.5
//�����ί�����ĳɼ�����0~100��֮�䣬������������ʾ��
//�������н�����£�
//101 90 97 89 85 95 77 86 92 83
//the score is invalid.
//�����ʽ:
//10��[0, 100]֮�����.
//
//�����ʽ��
//1�����Ա�ʾС������������ʾ��Ϣ��the score is invalid.��
//ƽ��ֵ����ʹ��double�͡�
//����������
//88 90 97 89 85 95 77 86 92 83
//
//���������
//88.5
//ʱ�����ƣ�2000ms�ڴ����ƣ�32000kb