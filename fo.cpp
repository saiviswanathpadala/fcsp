#include<iostream.h>
using namespace std;
int add(int x, int y)
{
    cout<<"Sum="<<x+y<<endl;
}
int add(int x,int y, int z)
{
    cout<<"Sum="<<x+y+z<<endl;
}
int main()
{
    int a,b,c,d,e;
    cout<<"Enter a,b,c,d,e values:";
    cin>>a>>b>>c>>d>>e;
    add(a,b);
    add(c,d,e);
}