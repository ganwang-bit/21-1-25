//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(){cout<<"A::A()"<<endl;cout<<this<<endl;}
//    int i;
//    int c;
//};
//class B:public A
//{
//public:
//    B(){cout<<"B::B()"<<endl;cout<<this<<endl;}
//    int a;
//};
//class C:public A
//{
//public:
//    C(){cout<<"C::C()"<<endl;cout<<this<<endl;}
//};
//class D:public C,public B
//{
//public:
//    D(){cout<<"D::D()"<<endl;cout<<this<<endl;}
//};
//int main()
//{
//    D d;
//    cout<<sizeof(d)<<endl;
//    B c;
//    B *f=&d;
//    //f->a=100;
//    C*g=&d;
//    //g->i=100;
//    //l.i=100;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<string>
//class A
//{
//public:
//    A(){cout<<"A::A()"<<endl;}
//    virtual void speak()=0;
//    virtual ~A()=0;
//    int i;
//};
//A::~A(){{cout<<"A::~A()"<<endl;}}
//class B:public A
//{
//public:
//    B(string name){this->name=new string(name);}
//    virtual void speak(){cout<<*name<<"小猫在说话"<<endl;}
//    virtual ~B(){cout<<"B::~B()"<<endl;if(name)delete name;}
//private:
//    string *name;
//};
//int main()
//{
//    A*a=new B("汤姆");
//    a->speak();
//    delete a;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class N
//{
//public:
//    virtual void storage()=0;
//};
//class CPU
//{
//public:
//    virtual void calculate()=0;
//};
//class V
//{
//public:
//    virtual void display()=0;
//};
//class InterCPU:public CPU
//{
//public:
//    virtual void calculate(){cout<<"InterCPU"<<endl;}
//};
//class InterV:public V
//{
//public:
//    virtual void display(){cout<<"InterV"<<endl;}
//};
//class InterN:public N
//{
//public:
//    virtual void storage(){cout<<"InterN"<<endl;}
//};
//class Computer
//{
//public:
//    Computer(CPU*c,V*vv,N*nn){cpu=c;v=vv;n=nn;}
//    void work(){cpu->calculate();v->display();n->storage();}
//    ~Computer(){delete cpu;delete v;delete n;}
//private:
//    CPU*cpu;
//    V*v;
//    N*n;
//};
//int main()
//{
//    CPU*i=new InterCPU;
//    V*v=new InterV;
//    N*n=new InterN;
//    Computer c(i,v,n);
//    c.work();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//int main()
//{
//    ifstream f;
//    char s;
//    f.open("test.txt",ios::in);
//    f>>s;
//    cout<<s<<endl;
//    f.close();
//    return 0;
//}
//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<cstring>
//class Person
//{
//public:
//    char name[30];
//    int age;
//};
//int main()
//{
//    Person a;
//    Person l;
////    a.age=10;
////    strcpy(a.name,"汤姆");
////    ofstream f;
////    f.open("test.txt",ios::out|ios::binary);
////    f.write((const char*)&a,sizeof(Person));
////    f.close();
//    ifstream t;
//    t.open("test.txt",ios::in|ios::binary);
//    t.read((char*)&l,sizeof(Person));
//    cout<<l.age<<" "<<l.name<<endl;
//    t.close();
//    return 0;
//}
