#include <bits/stdc++.h>
using namespace std;
int product(int x,int y){
    if(y==0)return 0;
    else if (y==1) return x;
    return x+product(x,y-1);
}
int main(){
    cout<<product(4,5);
return 0;
}