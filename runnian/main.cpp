#include <iostream>
#include <ctime>
using namespace std;
bool panding(int year){
    if(year%100==0){
        if(year%400==0){
            return 1;
        }else{
            return 0;
        }
    }
    if(year%100!=0){
        if(year%4==0){
            return 1;
        }else{
            return 0;
        }
    }
}
int runnian(int year){
    int num = 1;
    int newyear = year+num;
    while (panding(newyear)==0){
        num=num+1;
        newyear = year+num;
    }
    return num;
}
int gongneng1(){
    int year1,year2,year3;
    cout << "请输入三个年份" << endl;
    cin >> year1 >> year2 >> year3;
    if(panding(year1)== 1){
        cout << "第一年是闰年" <<endl;
    }else{
        cout << "第一年不是闰年" <<endl;
    }
    if(panding(year2)== 1){
        cout << "第二年是闰年" <<endl;
    }else{
        cout << "第二年不是闰年" <<endl;
    }
    if(panding(year3)== 1){
        cout << "第三年是闰年" <<endl;
    }else{
        cout << "第三年不是闰年" <<endl;
    }
    return 0;
}
int gongneng2(){
    int year;
    cout << "请输入要查询的年份" << endl;
    cin >> year;
    if(panding(year)==1){
        cout << "该年份是闰年" << endl;
    }else{
        cout << "该年份不是闰年" << endl;
    }
    int x = runnian(year);
    cout << "下一个闰年在" << x << "年后" << endl;
    return 0;
}
int gongneng3(){
    int year1,year2,year3,x;
    srand(time(NULL));
    year1=rand()%10000;
    year2=rand()%10000;
    year3=rand()%10000;
    cout << "三个年份分别为\n" << year1 << "\n" << year2 << "\n" << year3 << "\n" << endl;
    if(year1>year2){x=year1;year1=year2;year2=x;
    }
    if(year1>year3){x=year1;year1=year3;year3=x;
    }
    if(year2>year3){x=year2;year2=year3;year3=x;
    }
    cout << "排序后三个年份分别为\n" << year1 << "\n" << year2 << "\n" << year3 << "\n" << endl;
    if(panding(year1)== 1){
        cout << "第一年是闰年" <<endl;
    }else{
        cout << "第一年不是闰年" <<endl;
    }
    if(panding(year2)== 1){
        cout << "第二年是闰年" <<endl;
    }else{
        cout << "第二年不是闰年" <<endl;
    }
    if(panding(year3)== 1){
        cout << "第三年是闰年" <<endl;
    }else{
        cout << "第三年不是闰年" <<endl;
    }
    return 0;
}
int zhugongneng(){
    cout << "请输入要使用的功能。" << endl;
    cout <<"按其他键退出"<<endl;
    int gongneng;
    cin >> gongneng;
    if (gongneng == 1){
        gongneng1();
        zhugongneng();
    }
    if (gongneng ==2){
        gongneng2();
        zhugongneng();
    }
    if (gongneng ==3){
        gongneng3();
        zhugongneng();
    }
    if(gongneng!=1 and gongneng!=2 and gongneng!=3){
        return 0;
    }
}
int main() {
    system("chcp 65001");
    cout << "本程序共三个功能：" << endl;
    cout << "1、输入3个年份，并分别输出是否是闰年。" << endl;
    cout << "2、输入1个年份，输出是否是闰年，并输出该年份下一个闰年是多少年后，是哪一年。" << endl;
    cout << "3、随机输入3个年份，按照从小年份到大年份，依次排序输出，并根据顺序输出是否是闰年。" << endl;
    zhugongneng();
}
