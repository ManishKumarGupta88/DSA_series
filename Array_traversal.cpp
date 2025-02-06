#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[10];
    cout<<"enter array of numbers:";
    for(int j=1;j<=n;j++){
        cin>>arr[j];
    }
    
    cout<<"your array numbers is:";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
