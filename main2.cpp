#include<iostream>
using namespace std;
int count=0;
class destruct{
    public:
    destruct()
    {
        count++;
        cout<<"No. of objects created"<<count<<endl;
    }
    ~destruct()
    {
        count--;
        cout<<"No. of objects destroyed"<<count<<endl;
    }
};
int main()
{
    destruct aa,bb,cc;
    {
        destruct dd;
    }
    return 0;
}
/*
output:
No. of objects created3
No. of objects created4
No. of objects destroyed3
No. of objects destroyed2
No. of objects destroyed1
No. of objects destroyed0
*/
