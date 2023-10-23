#include <iostream>
using namespace std;
int main() {
    system("chcp 65001");
    float a , b;
    cout<<"请输入第一个整数,不是整数自动取整"<<endl;
    cin>>a;
    a=int(a);
    cout<<"请输入第二个整数，不是整数自动取整"<<endl;
    cin>>b;
    b=int(b);
    if(a>b){
        cout<<a<<">"<<b;
    }
    if(a<b){
        cout<<a<<"<"<<b;
    }
    if(a==b){
        cout<<a<<"="<<b;
    }
    return 0;
}
