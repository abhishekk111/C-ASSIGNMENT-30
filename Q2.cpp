#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 1;
    }
    catch (char e)
    {
        cout<<"\n Exception Caught  '"<<e<<"'"<<endl;
    }
    cout<<"outside catch block!!!!"<<endl;

    return 0;
}

