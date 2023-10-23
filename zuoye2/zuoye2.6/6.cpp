#include <iostream>
#include <cmath>
using namespace std;
int main(){
    system("chcp 65001");
    double a,b,c;
    cout<<"请输入二次项系数a"<<endl;
    cin>>a;
    while(a==0){
        cout<<"一次项系数不能为0"<<endl;
        cout<<"请重新输入"<<endl;
        cout<<"请输入二次项系数a"<<endl;
        cin>>a;
    }
    cout<<"请输入一次项系数b"<<endl;
    cin>>b;
    cout<<"请输入常数项"<<endl;
    cin>>c;
    cout<<"你输入的一元二次方程为"<<endl;
    cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
    double Derta=b*b-4*a*c;
    if(Derta<0){
        cout<<"本方程无实数根"<<endl;
    }
    if(Derta==0){
        cout<<"本方程的根为"<<(-b+sqrt(Derta))/(2*a)<<endl;
    }
    if(Derta>0){
        cout<<"本方程的根为"<<(-b+sqrt(Derta))/(2*a)<<"和"<<(-b-sqrt(Derta))/(2*a)<<endl;
    }
}
