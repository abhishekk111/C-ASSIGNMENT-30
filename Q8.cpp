#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;

int main()
{
    char uname[50];
    char pass[20];
    cout<<"\n Enter User Name   : ";
    gets(uname);
    cout<<"\n Enter Password   : ";
    gets(pass);

    gets(pass);
    try
    {
        if(strlen(pass)<6)
        {
            cout<<" Password must be at 6 Characters Long..."<<endl;
            throw 'c';
        }
        bool digit_yes=false;
        bool valid;
        int len = strlen(pass);
        for(int count = 0; count < len; count++)
        {
            if(isdigit(pass[count]))  //isdigit is predefine function
                digit_yes=true;
        }
        if(!digit_yes)
        {
            valid = false;
            cout<<"\n Password must have at least One Digit (0-9)"<<endl;
            throw 'c';

        }
        else
        {
            valid=true;
            cout<<"\n Password is Correct";
        }
    }
    catch(char c)
    {
        cout<<"\n Invalid Password Format!!!";
    }
     catch(...)
    {
        cout<<"\n Default Exception!!!";
    }
    return 0;
}
