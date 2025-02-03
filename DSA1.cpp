// first program
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=1;i<5;i++){
    for(int j=1;j<5;j++){
 cout<<j<<" ";
    }
    cout<<endl;
    }
}

//second program

// 3 2 1
// 3 2 1
// 3 2 1
// 3 2 1
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}
