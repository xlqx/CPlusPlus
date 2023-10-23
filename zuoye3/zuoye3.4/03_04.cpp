#include <iostream>
using namespace std;
int HangShuChu(int HangHao,int n){
    int KongGe=n-HangHao;
    int j =KongGe;
    while (j>0){
        cout<<" ";
        j=j-1;
    }
    j =2*HangHao-1;
    while (j>0){
        cout<<"*";
        j=j-1;
    }
    j =KongGe;
    while (j>0){
        cout<<" ";
        j=j-1;
    }
    cout<<endl;
}
int main() {
    system("chcp 65001");
    int n;
    cout << "请输入要生成金字塔的层数" << endl;
    cin >> n;
    while (n < 0 || n == 0) {
        cout << "层数只能是正数！" << endl;
        cout << "请输入要生成金字塔的层数" << endl;
        cin >> n;
    }
    int i=1;
    while (i<n+1){
        HangShuChu(i,n);
        i=i+1;
    }
}