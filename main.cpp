#include <iostream>
#include <cstdio>

using namespace std;

//-------------------类的声明-------------------
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

//-----------类的实现（构造函数+析构函数）---------
student::student(char n,char i,int a,char add)
{
    cout<<"++有参构造函数被自动调用++"<<endl;
    name = n;
    id = i;
    age = a;
    add = d;

}

stdudent::student()
{
    cout<<"++无参构造函数被自动调用++"<<endl;
    name = 'LXJ';
    id = '2018';
    age = 18;
    add = 'SDNU';
}


student::student(const student &Student)
{
    cout<<"++拷贝构造函数被自动调用++"<<endl;

    name = Student.name;
    id = Student.id;
    age = Student.age;
    add = Student.add;

}



//------------类的实现（普通函数）-------------
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
//===============释放内存空间===============
student::~student()
{
    cout<<"释放内存空间"<<endl;
}


//=================主函数===================

int main()
{

    int n;
    cout<<"获得学生信息输入 1"<<endl;
    cout<<"修改学生信息输入 2"<<endl;
    cout<<"输出学生信息输入 3"<<endl;
    cin>>n;
    student s('刘晓洁','2018110101',18,'ID');
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
        cout<<"输入更改后的姓名、学号、年龄、id:";
        cin>>a>>b>>c>>d;
        s.xg(a,b,c,d);
    }
    else
    {
            s.sc();
    }
return 0;
}
