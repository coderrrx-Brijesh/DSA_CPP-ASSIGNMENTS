#include <bits/stdc++.h>
using namespace std;
void prime(int a,int n=1){
    if((6*n-1)==a or (6*n+1)==a){ 
        cout<<"YES"; 
        return;
    }
    else if((6*n+1)>a){ 
        cout<<"NO"; 
        return;
    }
    prime(a,n+1);
}
int main(){
    prime(117);
return 0;
}