#include <iostream>
#include <cstdio>

using namespace std;

//-------------------�������-------------------
class stdudent
{

private:
    char name;
    char id;
    int age;
    char add;

public:

    student(char n='LXJ' char i='2018' int a=18 char add='SDNU');
    student();
    student(const student &Student);
    int hq();
    int xg(char ,char ,int ,char );
    int sc();
    ~student();

};

//-----------���ʵ�֣����캯��+����������---------
student::student(char n,char i,int a,char add)
{
    cout<<"++�вι��캯�����Զ�����++"<<endl;
    name = n;
    id = i;
    age = a;
    add = d;

}

stdudent::student()
{
    cout<<"++�޲ι��캯�����Զ�����++"<<endl;
    name = 'LXJ';
    id = '2018';
    age = 18;
    add = 'SDNU';
}


student::student(const student &Student)
{
    cout<<"++�������캯�����Զ�����++"<<endl;

    name = Student.name;
    id = Student.id;
    age = Student.age;
    add = Student.add;

}



//------------���ʵ�֣���ͨ������-------------
int student::hq()
{

    cout<<name<<","<<id<<","<<age<<","<<add<<","<<endl;
    return age;
}

int student::xg(char a,char b,int c,char d)
{
    name = a;
    id = b;
    age = c;
    add = d;
    cout<<name<<","<<id<<","<<age<<","<<add<<endl;
    return age;
}

int student::sc()
{

    cout<<name<<","<<id<<","<<age<<","<<add<<endl;
    return age;
}
//===============�ͷ��ڴ�ռ�===============
student::~student()
{
    cout<<"�ͷ��ڴ�ռ�"<<endl;
}


//=================������===================

int main()
{

    int n;
    cout<<"���ѧ����Ϣ���� 1"<<endl;
    cout<<"�޸�ѧ����Ϣ���� 2"<<endl;
    cout<<"���ѧ����Ϣ���� 3"<<endl;
    cin>>n;
    student s('������','2018110101',18,'ID');
    if(n==1)
    {
        s.hq();
    }
    else if(n==2)
    {
        char a;
        char b;
        int c;
        char d;
        cout<<"������ĺ��������ѧ�š����䡢id:";
        cin>>a>>b>>c>>d;
        s.xg(a,b,c,d);
    }
    else
    {
            s.sc();
    }
return 0;
}
