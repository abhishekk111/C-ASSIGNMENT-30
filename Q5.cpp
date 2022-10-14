#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    int mobile_num, count = 0;

    cout<<"Enter Mobile Number : ";
    cin>>mobile_num;

    try
    {
        while(mobile_num)
        {
            mobile_num=mobile_num/10;
            count++;
        }
        if(count == 10)
            throw 1;
        if(count != 10)
            throw 2;
    }
        catch (int num)
        {
            if(num == 1)
            cout<<"Valid Mobile Number!!!"<<endl;
            if(num == 2)
            cout<<"Invalid Mobile Number!!!"<<endl;
        }
        return 0;
}
