

#include<iostream>
using namespace std;
class Addition{
    public:
    void add(int a,int b)
    {
        cout<<(a+b)<<endl;
    }
    void add(double a,double b)
    {
        cout<<(a+b)<<endl;
    }
};
int main()
{
        Addition obj;
        obj.add(4,5);
        obj.add(21.3,6.2);
}
