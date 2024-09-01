#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x != 0 && x % 10 == 0)) return false;

        int temp = x, revNum = 0;
        while (temp > revNum) {
            revNum = revNum*10 + temp % 10;
            temp = temp / 10;
        }

        return (temp == revNum) || (temp == revNum/10);
}

vector<long long> GCDnLCM(long long A, long long B) {
   // approach goes like if we do a-b or b-a then it and a/b will have same GCD.
    long long gcd = 1;
        long long a=A,b=B;
        
        while( a > 0 && b > 0) {
            if(a > b) {
                a = a%b;
            } else {
                b = b%a;
            }
            
            if(a==0) gcd = b;
            if(b==0) gcd = a;
        }
        
        long long lcm = (A / gcd)*B;
        
        vector<long long> ans;
        ans.push_back(lcm);
        ans.push_back(gcd);
        
        return ans;
}


int main() {
   int a,b;
   cin>>a>>b;
   cout<<GCDnLCM(a,b);
}