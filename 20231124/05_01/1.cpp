#include <iostream>
using namespace std;
class Circle{
private:
    double BanJing;
public:
    double MianJi;
    double ZhouChang;
    double getMianJi(double BanJing);

    double getZhouChang(double BanJing);

    void set(double BanJing);
    double getBanJing();
};
double Circle::getMianJi(double BanJing){
    return BanJing*BanJing*3.1415;
}
double Circle::getZhouChang(double BanJing){
    return BanJing*2*3.1415;
}
void Circle::set(double BanJing){
    BanJing=BanJing;
    MianJi= getMianJi(BanJing);
    ZhouChang= getZhouChang(BanJing);
}
double Circle::getBanJing(){
    return BanJing;
}
int main(){
    system("chcp 65001");
    double r;
    cin>>r;
    Circle Circle1;
    Circle1.set(r);
    cout<<"半径："<<Circle1.getBanJing()<<endl;
    cout<<"面积："<<Circle1.MianJi<<endl;
    cout<<"周长："<<Circle1.ZhouChang<<endl;
};