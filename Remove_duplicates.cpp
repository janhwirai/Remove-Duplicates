#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  int remove_duplicate( int a[], int N){
        // code here
        int curr=1;
        for(int i=1;i<N;i++){
            if(a[curr-1]!=a[i]){
                a[curr++]=a[i];
            }
        }
        return curr;
    }
};
int main(){
    int t;
    cout<<"Enter testcases: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter number of elements";
        cin>>n;
        int arr[n];
        cout<<"\nEnter array elements";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution s;
        int N=s.remove_duplicate(arr,n);
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}