#include<iostream>
using namespace std;
class name
{
    string a;
public:
    void get()
    {
    cin>>a;
    }
    void show()
    {
     cout<<endl<<a;
    }

};
int main()
{
    name n[10];
    for(int i=0;i<2;i++)
    {
        n[i].get();
    }
    for(int i=0;i<2;i++)
    {
        n[i].show();
    }
    return 0;
}
