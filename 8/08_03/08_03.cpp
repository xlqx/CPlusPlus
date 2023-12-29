#include <vector>
#include <iostream>

using namespace std;

bool test(vector<int> vector1,vector<int> vector2,int n){
    int num=vector1[n];
    int l=vector2.size();
    int i=0;
    while (i<l){
        if(num==vector2[i]){
            return 1;
        }
        i=i+1;
    }
    return 0;
}
void uniqueSort(vector<int> shuru){
    vector<int> vector0;
    int n=shuru.size();
    int i=0;
    int j=0;
    while (i<n){
        if(test(shuru,vector0,i)==0){
            vector0.push_back(shuru[i]);
            j=j+1;
        }
        i=i+1;
    }
    vector<int> shuchu;
    int num;
    j=0;
    int max=vector0.size();
    int del;
    while (j<max) {
        del=0;
        i = 0;
        num=vector0[i];
        while (i < vector0.size()) {
            if (num > vector0[i]) {
                num = vector0[i];
                del = i;
            }
            i = i + 1;
        }
        vector0.erase(vector0.begin() + del);
        shuchu.push_back(num);
        j=j+1;
    }
    j=0;
    while (j<max){
        cout<<shuchu[j]<<" ";
        j=j+1;
    }
    cout<<endl;
}
int main(){
    system("chcp 65001");
    int num;
    cout<<"请输入预期长度"<<endl;
    cin>>num;
    vector<int> shuru;
    int i=0;
    int n;
    while (i<num){
        cin>>n;
        shuru.push_back(n);
        i=i+1;
    }
    uniqueSort(shuru);
}