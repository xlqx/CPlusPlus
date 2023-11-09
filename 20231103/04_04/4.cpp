#include <iostream>
#include <string>
using namespace std;
char zhuanhuan(char str1){
    char zimubiao[2][26]={{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'}};
    int j=0;
    while (j<26){
        if(str1==zimubiao[0][j]){
            return zimubiao[1][j];
        } else{j=j+1;}
    }
    j=0;
    while (j<26) {
        if (str1 == zimubiao[1][j]) {
            return zimubiao[0][j];
        } else { j = j + 1; }
    }
    return str1;
}
int main() {
    string str1;
    getline(cin,str1);
    char line[str1.size()];
    int i=0;
    while (i<str1.size()){
        line[i]=zhuanhuan(str1[i]);
        i=i+1;
    }
    i=0;
    while (i<str1.size()){
        cout<<line[i];
        i=i+1;
    }
    cout<<endl;
    return 0;
}