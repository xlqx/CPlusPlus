#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    char name[x][15];
    int qimo[x];
    int pingyi[x];
    char ganbu[x][1];
    char xibu[x][1];
    int lunwen[x];
    int jiangxuejin[x];
    int i=0;
    while (i<x){
        cin>>name[i]>>qimo[i]>>pingyi[i]>>ganbu[i]>>xibu[i]>>lunwen[i];
        i=i+1;
    }
    i=0;
    while (i<x){
        int num=0;
        if(qimo[i]>80&&lunwen[i]>0){
            num=num+8000;
        }
        if(qimo[i]>85&&pingyi[i]>80){
            num=num+4000;
        }
        if(qimo[i]>90){
            num=num+2000;
        }
        if(qimo[i]>85&&xibu[i][0]=='Y'){
            num=num+1000;
        }
        if(pingyi[i]>80&&ganbu[i][0]=='Y'){
            num=num+850;
        }
        jiangxuejin[i]=num;
        i=i+1;
    }
    i=0;
    int max=0;
    int sam=0;
    while(i<x){
        if(jiangxuejin[i]>jiangxuejin[max]){
            max=i;
        }
        sam=sam+jiangxuejin[i];
        i=i+1;
    }
    cout<<name[max]<<endl;
    cout<<jiangxuejin[max]<<endl;
    cout<<sam<<endl;
    return 0;
}