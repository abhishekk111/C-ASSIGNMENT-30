#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a;
    string email = "abhi@gmail.com";
    string gmail = "@gmail.com";
    try
    {
     if(email.find(gmail) != -1)
        throw a;
     else
        {
            cout<<"No";
        }
    }
    catch(char a)
    {
        cout<<"yes";
    }
    catch(...)
    {
        cout<<"\n Default Exception!!!";
    }
     return 0;
}

