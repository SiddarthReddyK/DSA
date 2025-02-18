#include<iostream>
using namespace std;
int isLargest(int arr[] ,int n)
{
    int largest = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    return largest;
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
    cout<<isLargest(arr,n);
}