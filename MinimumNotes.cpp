///Findout mimimum number of Bank Notes needed[Optimized]
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt=0, i=0;
    cin>>n;
    int a[] = {100, 20, 10, 5, 1};
    while(n) {
        cnt+=n/a[i];
        n%=a[i++];
    }
    cout<<cnt<<endl;
}
