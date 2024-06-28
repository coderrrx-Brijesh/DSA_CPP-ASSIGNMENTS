#include <bits/stdc++.h>
using namespace std;
int gray(int n,int ans=0){
    if(n==1 or n==0){
        return n;
    }
    ans+=(gray(n/10)*10)+(n%10^(n/10)%10);
    return ans;
}
int main(){
    cout<<gray(100110);
return 0;
}