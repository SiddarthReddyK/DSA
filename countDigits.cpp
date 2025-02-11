#include<iostream>
using namespace std;
int main()//code for checking how many digits in the number divide the number evenly
{
    int n,x,count = 0,temp;
    cout<<"Enter a number: ";
    cin>>n;
    x = n;
    if(n==0)
        {
            count = 1;
        }
    else
    {
        while(n>0)
        {
            temp = n%10;
            if(x%temp == 0)
            {
                count++;
            }
            n = n/10;
        }
    }
    cout<<count;
    return 0;
}