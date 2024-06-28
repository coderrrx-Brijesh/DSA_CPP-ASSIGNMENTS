#include <bits/stdc++.h>
using namespace std;
int sum(int n,int m){
    if(m==1) return (n*(n+1))/2;
    return  sum(sum(n,m-1),1);
}
int main(){
    cout<<sum(3,2);
return 0;
}