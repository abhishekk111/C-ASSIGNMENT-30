#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;

int main()
{
    char n_name[50];
    cout<<"\n Enter Nick Name   : ";
    gets(n_name);
    try
    {
        if(strlen(n_name)>=8)
        {
            cout<<" Nick Name is not 8 characters long..."<<endl;
            throw 'c';
        }
        else
        {
            //valid=true;
            cout<<"\n Nick Name is Correct!!!";
        }
    }
    catch(char c)
    {
        cout<<"\n Invalid Nick Name!!!";
    }
     catch(...)
    {
        cout<<"\n Default Exception!!!";
    }
    return 0;
}

