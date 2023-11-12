#include <iostream>
using namespace std;
int ID(int ta[][4],int n,int k){
    int i =1;
    while(i<n+1){
        if(ta[i][k]!=0){
            return i;
        }
        i=i+1;
    }
    return n+1;
}
void Move1(int ta[][4],char a,char b,char c,int start,int end,int n){
    int S=ID(ta,n,start);
    int id=ta[S][start];
    int E=ID(ta,n,end);
    ta[E-1][end]=ta[S][start];
    ta[S][start]=0;
    char duiying[4]={0,a,b,c};
    cout<<id<<":"<<duiying[start]<<"->"<<duiying[end]<<endl;
}
void Move2(int ta[][4],char a,char b,char c,int start,int end,int n){
    int qita;
    if(start==1){
        if(end==2){qita=3;}
        if(end==3){qita=2;}
    }
    if(start==2){
        if(end==1){qita=3;}
        if(end==3){qita=1;}
    }
    if(start==3){
        if(end==2){qita=1;}
        if(end==1){qita=2;}
    }
    if(n>1){
        Move2(ta,a,b,c,start,qita,n-1);
        Move1(ta,a,b,c,start,end,n);
        Move2(ta,a,b,c,qita,end,n-1);
    }
    if(n==1){
        Move1(ta,a,b,c,start,end,n);
    }
}
int main() {
    int n;
    cin>>n;
    int ta[n+1][4];
    int i=1;
    while(i<n+1){
        ta[i][1]=i;
        i=i+1;
    }
    i=1;
    while(i<n+1){
        int j=2;
        while (j<4){
            ta[i][j]=0;
            j=j+1;
        }
        i=i+1;
    }
    ta[0][1]=ta[0][2]=ta[0][3]=0;
    char a,b,c;
    cin>>a>>b>>c;
    int start=1;
    int end=3;
    Move2(ta,a,b,c,start,end,n);
}