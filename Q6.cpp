#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int pincode, count = 0;

    cout<<"Enter Pincode : ";
    cin>>pincode;

    try
    {
        while(pincode)
        {
            pincode=pincode/10;
            count++;
        }
        if(count == 6)
            throw 1;
        if(count != 6)
            throw 2;
    }
        catch (int num)
        {
            if(num == 1)
            cout<<"\n!!! Valid Pincode !!!"<<endl;
            if(num == 2)
            cout<<"\n!!! Invalid Pincode !!!"<<endl;
        }
        return 0;
}

