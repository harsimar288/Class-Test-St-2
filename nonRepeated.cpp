//Harsimar 2010990288  Set-1//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //enter array size and elements
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    //sort 
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}