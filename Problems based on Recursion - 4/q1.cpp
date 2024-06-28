#include <bits/stdc++.h>
using namespace std;
void print_series(int n){
    cout<<n<<" ";
    if(n<=0){
        return;
    }
    print_series(n-5);
    cout<<n<<" ";
}
int main(){
    print_series(16);
return 0;
}