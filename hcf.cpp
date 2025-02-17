#include<iostream>
using namespace std;

int hcf(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a  = a%b;
        }
        else
        {
            b = b%a;
        }
    }
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter the numbers for which hcf needs to be found: ";
    cin>>a;
    cin>>b;
    cout<<"HCF is:"<<hcf(a,b);
    return 0;
}