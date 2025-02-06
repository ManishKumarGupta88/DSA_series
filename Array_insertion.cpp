#include<iostream>
using namespace std;
int main(){
    int n;
    int i,j,k,item;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[10];
    cout<<"enter array of numbers:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    j=n;
    while(j>=k){
        arr[j+1]=arr[j];
        j--;
    }
    cout<<"enter a position of k:";
    cin>>k;
    cout<<"enter item:"<<endl;
    cin>>item;
    arr[k]=item;
    n++;
    
    cout<<"your array numbers is:";
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
