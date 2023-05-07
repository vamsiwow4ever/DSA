#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int add=0;
    while(n!=0){ 
        if(n&1) add++;   //comparing last digit 
        n=(n>>1);    //shifting the bit tot right 110 to 011 1 moved to right
    }
    return add;
}

int main(){
    int n;
    cin>>n;
    cout<<count(n);
    return 0;
}