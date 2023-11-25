#include <iostream>
using namespace std;
static int count;
class Student{
private:
    char XingMing;
    int BanJi;
    int XueHao;
    int FenShu;
public:
    void set(char a,int b,int c,int d);
    char getChengJi();
    void get();
    int getcount();
};
void Student::set(char a,int b,int c,int d){
    XingMing=a;
    BanJi=b;
    XueHao=c;
    FenShu=d;
    count=count+1;
}
char Student::getChengJi() {
    if(FenShu<=25){return 'D';}
    if(FenShu<=50&&FenShu>25){return 'C';}
    if(FenShu<=75&&FenShu>50){return 'B';}
    if(FenShu<=100&&FenShu>75){return 'A';}
    return '0';
}
void Student::get() {
    cout<<"姓名："<<XingMing<<" 班级"<<BanJi<<" 学号："<<XueHao<<" 分数:"<<FenShu<<getChengJi()<<endl;
}
int Student::getcount() {return count;}
int main(){
    system("chcp 65001");
    while (1){
        char name;
        int BanJi,XueHao,FenShu;
        cin>>name>>BanJi>>XueHao>>FenShu;
        if(name!='0'||BanJi!=0||XueHao!=0||FenShu!=0){
            Student Student1;
            Student1.set(name,BanJi,XueHao,FenShu);
            Student1.get();
            cout<<"当前第"<<Student1.getcount()<<"个"<<endl;}
        else{break;}
    }
}