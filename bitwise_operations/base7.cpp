
#include <iostream>

using namespace std;

string convertToBase7(int num) {
		// Your code goes here
		if(num==0) return "0"; 
        string s="";
        int t=num;                      // for verification of negative or not
        num=abs(num);
		
        int i=0,sum=0;
        while(num!=0){
            s+=to_string(num%7);        // generally we take remainder of num by 7 
            num/=7;                     // we need to divide by 7 so that last digit will be base 7 value;
        }
        if(t<0) s+='-';                 // whether -ver or not
        reverse(s.begin(),s.end());     // as the value will be reversed
        return s;
	}

int main()
{
    int n;
    cin>>n;
    cout<<convertToBase7(n);
    return 0;
}