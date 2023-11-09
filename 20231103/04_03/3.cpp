#include <iostream>
using namespace std;
int main() {
    double a,b;
    cin>>a>>b;
    double num;
    num=1;
    int x=0;
    while(num*a<=b){
        x=x+1;
        num=num*a;
    }
    cout<<x<<endl;
    return 0;
}
