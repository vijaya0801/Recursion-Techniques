#include <iostream>
#include <algorithm>
using namespace std;
int n;
void print(int arr[])
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
 

void arrayreverse(int arr[], int L)
{
    if (L > n-1-L)
       return ;
    else
    {
        swap(arr[L], arr[n-1-L]);
        arrayreverse(arr, L++);
    }
}
 
int main()
{
     cin>>n; int arr[n];
     for(int i=0;i<n;i++) cin>>arr[i];
     int L=0,R=n-1;
    arrayreverse(arr,L);
    print(arr);
 
    return 0;
}
