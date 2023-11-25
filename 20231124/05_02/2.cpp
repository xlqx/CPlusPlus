#include <iostream>
using namespace std;
class Triangle{
private:
    double Bian1;
    double Bian2;
    double Bian3;
public:
    const char *LeiXing;
    void set(double Bian1,double Bian2,double Bian3);
};
void Triangle::set(double Bian1,double Bian2,double Bian3){
    Bian1=Bian1;
    Bian2=Bian2;
    Bian3=Bian3;
    if(Bian1==Bian2&&Bian2==Bian3){LeiXing="等边三角形";}
    if((Bian1==Bian2&&Bian1!=Bian3)||(Bian1==Bian3&Bian1!=Bian2)||(Bian2==Bian3&&Bian2!=Bian1)){LeiXing="等腰三角形";}
    if(Bian1!=Bian2&&Bian1!=Bian3&&Bian2!=Bian3){LeiXing="不等边三角形";}
}
int main(){
    system("chcp 65001");
    double a,b,c;
    cin>>a>>b>>c;
    Triangle Triangle1;
    Triangle1.set(a,b,c);
    cout<<Triangle1.LeiXing<<endl;
};