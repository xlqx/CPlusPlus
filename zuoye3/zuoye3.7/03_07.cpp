#include <iostream>
using namespace std;
int duijue(int JenFen,int Player,int num){
    cout<<"做出你的选择，然后按回车"<<endl;
    cin>>Player;
    int Computer;
    srand(time(NULL));
    Computer=rand()%3;
    if(Computer==0){
        cout<<"电脑出了石头"<<endl;
        if(Player==0){
            cout<<"平局"<<endl;
        }
        if(Player==1){
            cout<<"你输了"<<endl;
        }
        if(Player==2){
            JenFen=JenFen+1;
            cout<<"你赢了"<<endl;
        }
    }
    if(Computer==1){
        cout<<"电脑出了剪刀"<<endl;
        if(Player==1){
            cout<<"平局"<<endl;
        }
        if(Player==2){
            cout<<"你输了"<<endl;
        }
        if(Player==0){
            cout<<"你赢了"<<endl;
            JenFen=JenFen+1;
        }}
    if(Computer==2){
        cout<<"电脑出了布"<<endl;
        if(Player==2){
            cout<<"平局"<<endl;
        }
        if(Player==0){
            cout<<"你输了"<<endl;
        }
        if(Player==1){
            cout<<"你赢了"<<endl;
            JenFen=JenFen+1;
        }
    }
    cout<<"当前积分为"<<JenFen<<endl;
    num=num+1;
    cout<<"你已经进行了"<<num<<"局"<<endl;
    cout<<"要继续吗？输入3继续"<<endl;
    int x;
    cin>>x;
    if(x==3){
        duijue(JenFen,Player,num);
    }
}
int main(){
    system("chcp 65001");
    int Player;
    cout<<"你要出什么？"<<endl;
    cout<<"假如你要出石头，请输入0"<<endl;
    cout<<"假如你要出剪刀，请输入1"<<endl;
    cout<<"假如你要出布，请输入2"<<endl;
    int JenFen=0;
    int num=0;
    duijue(JenFen,Player,num);
}