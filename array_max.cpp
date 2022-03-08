#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int max(int arr[],int n)
{
    sort(arr,arr+n);   //complexity[O(nlogn)]
    return(arr[n-1]);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int maxele=max(arr,n);
    cout<<maxele<<"\n";
    return 0;
}