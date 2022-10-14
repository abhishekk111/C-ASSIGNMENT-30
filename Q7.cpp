#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;

int main()
{
    int i=0,isDigit=0,isSpecialChar=0,isChar=0,isException=0;
    char uname[50];
    cout<<"\n Enter Username   : ";
    gets(uname);
    try {
    if(strlen(uname) >= 6)
   throw 1;

    for(i=0; uname[i] != '\0'; i++)
    {
        if(isdigit(uname[i]))
            isDigit=1;

        if((uname[i] >= 'a' && uname[i] <='z')||(uname[i] >= '0' && uname[i] <='9')||(uname[i] >= 'A' && uname[i] <='Z'))
        {
            isChar=1;
        }
        else
        {
            isSpecialChar=1;
        }
    }
    if(isDigit == 0)
        throw 2;
    if(isSpecialChar == 0)
        throw 3;
}
    catch(int num)
    {
        if(num == 1)
            cout<<"\nUsername contains more than 6 character";
        if(num == 2)
            cout<<"\nDigit Not Found";
        if(num == 3)
            cout<<"\nSpecial Character Not Found";
            isException = 1;
    }

    if(!isException)
    {
        cout<<"\nUsername Accepted!!!";
    }

        return 0;
}
