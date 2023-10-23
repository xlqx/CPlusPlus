#include <iostream>
using namespace std;
int main(){
    system("chcp 65001");
    int num;
    cout<<"请输入一个整数"<<endl;
    cin>>num;
    do{cout<<num%10;
        num=num/10;}while(num!=0);
};