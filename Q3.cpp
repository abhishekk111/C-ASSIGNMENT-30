 #include<iostream>
#include<string>
using namespace std;

int main()
{
    float num1,num2,ans;
    char Operator;

    cout<<"\n Perform Arithmetic Operation on two numbers: ";
    cout<<"\n----------------------------------------------";

    try
    {
        cout<<"\n Enter First Number    : ";
        cin>>num1;
        if(num1==0)
            throw 0;
        cout<<"\n Enter Operator   : ";
        cin>>Operator;
        if(Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/')
            throw Operator;
        cout<<"\n Enter Second Number    : ";
        cin>>num2;
        cout<<"\n-------------------------------------------";
        switch(Operator)
        {
        case '+':
            ans=num1+num2;
            break;
        case '-':
            ans=num1-num2;
            break;
        case '*':
            ans=num1*num2;
            break;
        case '/':
            if(num2==0)  //find the denominator is zero
                throw 0;
            ans=num1/num2;
            break;
        }
        cout<<"\n Answer : "<<num1<<" "<<Operator<<" "<<num2<<" = "<<ans;

    }
    catch(const char c)
    {
        cout<<"\n Exception Caught... \n Bad Operator : "<<c <<" is not a valid Operator";
    }
    catch(const int n)
    {
        cout<<"\n Error : Bad Operation...";
    }
    return 0;
}
