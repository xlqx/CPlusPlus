#include <iostream>
using namespace std;
class point{
private:
    double x;
    double y;
public:
    void set1(double x,double y);
    double getx();
    double gety();
    void setx(double x);
    void sety(double y);
};
void point::set1(double x,double y){
    x=x;
    y=y;
}
double point::getx(){return x;}
double point::gety(){return y;}
void point::setx(double x){x=x;}
void point::sety(double y){y=y;}
class Rectangle :public point{
private:
    double chang;
    double kuan;
public:
    void set2(double x,double y,double chang,double kuan);
    double getMianJi();
    double getZhouChang();
};
void Rectangle::set2(double a, double b, double c, double d) {
    set1(a,b);
    chang=c;
    kuan=d;
}
double Rectangle::getZhouChang() {
    return 2*chang+2*kuan;
}
double Rectangle::getMianJi() {
    return chang*kuan;
}
int main(){
    system("chcp 65001");
    double chang,kuan,x,y;
    cin>>x>>y>>chang>>kuan;
    Rectangle Rectangle1;
    Rectangle1.set2(x,y,chang,kuan);
    cout<<"坐标：("<<x<<"."<<y<<")"<<endl;
    cout<<"面积："<<Rectangle1.getMianJi()<<endl;
    cout<<"周长："<<Rectangle1.getZhouChang()<<endl;
    return 0;
}