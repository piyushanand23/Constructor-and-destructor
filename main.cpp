#include<iostream>
using namespace std;
class construct 
{
    public:
    int a,b,c,d;
    construct (int a , int b,int d)
    {
        c=a+b+d;
    }
    construct (float a,float b)
    {
        c=a-b;
    }
    construct(int a)
    {
        c=a*a;
    }
    void display()
    {
        cout<<"Output is:"<<c<<endl;
    }
};
int main()
{
    construct c1(10,20,30);
    construct c2(20,2);
    construct c3(50);
    
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
/*
Output:
Output is:60
Output is:18
Output is:2500
*/
