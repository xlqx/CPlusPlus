#include <iostream>
using namespace std;
bool panding(int x){
    int i = 2;
    int num=0;
    while(i<x){
        if(x%i==0) {
            num = num + 1;
        }
        i=i+1;
    }
    if(num>=1){
        return 1;
    }else {return 0;}
}
int main(){
    int i=200;
    while(i<=300){
        if(panding(i)==0){
            cout<<i<<endl;
        }
        i=i+1;
    }
}