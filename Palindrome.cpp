#include<iostream>
using namespace std;

bool isPalindrome(int x) 
{
        if(x<0) return false;
        long int rev=0;
        int n=x;
        while(x>0)
        {
            int temp = x%10;
            rev = (rev*10)+temp;
            x = x/10;
        }
        return n==rev;
}
int main()
{
    int x;
    cout<<"Enter the number to be checked: ";
    cin>>x;
    if(isPalindrome(x)){
    	cout<<"true";
	}
	else{
		cout<<"false";
	}
}