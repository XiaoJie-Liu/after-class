#include <iostream>
#include<string.h>
using namespace std;

class Graduate
{
private:
	char* name;
	bool gender;
	char id[20];
	double score;
	string research;
	string tutor;
public:
	static double aver;
    Graduate();//�޲ι��캯��
	Graduate(char*, bool, char[], double, string, string);//�вι��캯��
	Graduate(const Graduate& r);//�������캯��
	~Graduate();//��������
	void Display();
	void Display()const;//����Ա����
	friend void level(const Graduate& x);//��Ԫ
	static double average();
};
double Graduate::aver = 0;
Graduate::Graduate()//�޲ι��캯��������
{
	cout << "�޲ι��캯�����Զ�����" << endl;
}
Graduate::Graduate(char *n, bool g, char i[], double s, string r, string t)
{
	cout << "�вι��캯�����Զ�����" << endl;
	strcpy(name, n);
	gender = g;
	strcpy(id, i);
	score = s;
	research = r;
	tutor = t;
}
Graduate::Graduate(const Graduate& x)//�������캯���Ķ���
{	cout << "�������캯�����Զ�����" << endl;
	double s;
	name = new char[strlen(x.name) + 1];
	strcpy(name, x.name);
	gender = x.gender;
	strcpy(id, x.id);
	score = x.score;
	research = x.research;
	tutor = x.tutor;
	for (int i = 0; i < 20; i++)
	{
		s += x.score;
	}
	aver = s / 20;
}
Graduate::~Graduate()
{
	cout << "�����������Զ�����" << endl;
}
double Graduate::average()
{
	return aver;
}
int level(Graduate &)
{
	double score;
	if (score >= 90)
	{
		cout << "A" << endl;
	}
	else if (score >= 80 && score < 90)
	{
		cout << "B" << endl;
	}
	else if (score >= 70 && score < 80)
	{
		cout << "C" << endl;
	}
	else if (score >= 60 && score < 70)
	{
		cout << "D" << endl;
	}
	else if (score < 60)
	{
		cout << "E" << endl;
	}
}
void Graduate::Display()
{
	cout << name << "," << gender << "," << id[20] << "," << score << "," << research << "," << tutor << endl;
}

void Graduate::Display()const
{
	cout << name << "," << gender << "," << id[20] << "," << score; << "," << research << "," << tutor << endl;
}
int main()
{
	Graduate graduate1;
	Graduate graduate2("liu", 0, 2018, 100, "Computer", "Tsingke");
	Graduate graduate3(graduate2);
	graduate3.Display();
	Graduate g1("xiao", 0, 2018, 10, "Computer", "Tsingke");
	g1.Display();
	cout << "ƽ���ɼ�Ϊ��" << Graduate::aver << endl;
	level(graduate2);
	return 0;
}
