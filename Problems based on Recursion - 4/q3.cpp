#include <bits/stdc++.h>
using namespace std;
int no_of_sol(int n,int val){
    if(n==0){
        return val==0;
    }
    int cnt=0;
    for(int i=0;i<=val;i++){
        cnt+=no_of_sol(n-1,val-i);
    }
    return cnt;
}
int main(){
    cout<<no_of_sol(2,3);
return 0;
}