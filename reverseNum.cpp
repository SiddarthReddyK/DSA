#include<iostream>
using namespace std;
int main()//code to reverse a number
{
    int n,digit,rev=0;
    cout<<"Enter a number";
    cin>>n;
    while(n != 0)
    {
        digit = n%10;
        n = n/10;
        rev = rev*10+digit;
    }
    cout<<rev;
}
