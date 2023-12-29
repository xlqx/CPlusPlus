#include <iostream>
#include <list>

using namespace std;

void shuchu(list<int> shuru){
    int x=shuru.size();
    if(x!=1){
        cout<<*shuru.begin()<<" ";
        shuru.pop_front();
        shuchu(shuru);
    }
    if(x==1){
        cout<<*shuru.begin()<<endl;
    }
}

int main(){
    system("chcp 65001");
    list<int> shuru;
    int changdu;
    cout<<"请输入预期长度"<<endl;
    cin>>changdu;
    int i=0;
    int n;
    while (i<changdu){
        cin>>n;
        shuru.push_back(n);
        i=i+1;
    }
    cout<<"输入的链表为"<<endl;
    shuchu(shuru);
    cout<<"输入1删除链表头尾并打印"<<endl;
    int panding;
    cin>>panding;
    while (panding==1){
        shuru.pop_front();
        shuru.pop_back();
        shuchu(shuru);
        cin>>panding;
    }
}