#include <iostream>
using namespace std;
int missing(int arr[],int n)
{
    int sum = (n*(n+1))/2;
    int sum1 = 0;
    for(int i=0;i<n;i++)
    {
        sum1 = sum1 + arr[i];
    }
    return sum - sum1;
}
int main()
{
    int n;
    cout<<"Give length of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of Array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<missing(arr,n);
}