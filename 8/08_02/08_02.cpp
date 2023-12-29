#include <deque>
#include <iostream>
#include<string>

using namespace std;

int main(){
    system("chcp 65001");
    deque<int> shuru;
    string mingling;
    cout<<"请输入命令（push、pop、print、exit）"<<endl;
    cin>>mingling;
    int n;
    while(1){
        if(mingling!="push"&&mingling!="pop"&&mingling!="print"&&mingling!="exit"){
            cout<<"命令错误！"<<endl;
            cout<<"请输入命令（push、pop、print、exit）"<<endl;
            cin>>mingling;
        }
        if(mingling=="push"){
            cout<<"请输入要添加的元素"<<endl;
            cin>>n;
            shuru.push_front(n);
            cout<<"添加完毕"<<endl;
            cout<<"请输入命令（push、pop、print、exit）"<<endl;
            cin>>mingling;
        }
        if(mingling=="pop"){
            shuru.pop_front();
            cout<<"删除了一个元素"<<endl;
            cout<<"请输入命令（push、pop、print、exit）"<<endl;
            cin>>mingling;
        }
        if(mingling=="print"){
            deque<int> shuchu(shuru);
            int num=shuchu.size();
            while (num!=0){
                cout<<shuchu.front()<<" ";
                shuchu.pop_front();
                num=shuchu.size();
            }
            cout<<endl;
            cout<<"请输入命令（push、pop、print、exit）"<<endl;
            cin>>mingling;
        }
        if(mingling=="exit"){
            cout<<"程序退出"<<endl;
            break;
        }
    }
}