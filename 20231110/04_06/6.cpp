#include <iostream>
using namespace std;
int xunhuan(int m,int n,int duilie[][1],int chushi){
    int i=chushi;
    int num=0;
    while (num!=m){
        if(i!=n){
            i=i+1;
        }else{i=0;}
        if(duilie[i][0]!=0){
            num=num+1;
        }
    }
    return i;
}
int huoqu(int n,int duilie[][1]){
    int i=0;
    int num=0;
    while(i!=n+1){
        if(duilie[i][0]!=0){
            num=num+1;
        }
        i=i+1;
    }
    return num;
}
void xiugai(int n,int duilie[][1],int m,int num){
    if(huoqu(n,duilie)!=1){
        num=xunhuan(m,n,duilie,num);
        duilie[num][0]=0;
        xiugai(n,duilie,m,num);
    }else{
        int i=0;
        while (i!=n+1){
            if(duilie[i][0]!=0){
                cout<<duilie[i][0]<<endl;
            }
            i=i+1;
        }
    }

}

int main() {
    int m,n;
    cin>>n>>m;
    if(n!=0||m!=0){
        int duilie[n+1][1];
        int i=0;
        while (i<n+1){
            duilie[i][0]=i;
            i=i+1;
        }
        xiugai(n,duilie,m,0);
        main();
    }
    return 0;
}
