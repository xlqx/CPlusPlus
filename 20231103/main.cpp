#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int shulie[20];
    shulie[1]=1;
    shulie[2]=1;
    int i=3;
    while (i<21){
        shulie[i]=shulie[i-2]+shulie[i-1];
        i=i+1;
    }
    i=1;
    while (i<n+1){
        int x;
        cin>>x;
        cout<<shulie[x]<<endl;
        i=i+1;
    }
    return 0;
}