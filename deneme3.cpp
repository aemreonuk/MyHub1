#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <stdio.h>
using namespace std;
using std::cout; using std::cin;
using std::string;
void tree_or_not(vector<string> vs1,vector<string> vs2) {
    int flag=1;
    for(int i=0;i<vs2.size();i++){
            for(int j=0;j<vs1.size();j++){
                if(vs1[j]==vs2[i]){
                    vs2[i]=vs2[j];
                    vs1.erase(vs1.begin()+j);
                    vs2.erase(vs2.begin()+j);
                    j=j-1;
                }

            }
            cout<<"birinci";
    }
    for(int i=0;i<vs1.size();i++){
            if(vs1[0]!=vs1[i]){
                flag=0;
            }
            cout<<"ikinci";
    }
    cout<<vs1[0]<<vs1[1]<<"\n";
    if(flag==0){
            cout<<"false";
    }
    else{
         cout<<"true";
    }
    //return flag;
}

int main() {
    int size,flag=1;
    vector<string> vs1,vs2,vs3,vs4;
    string *matrix;
    string str1,str2;
    char ch1[1],ch2[1],ch[1];
    while(getline(cin, str1, '\n')){
        stringstream st(str1);
        st>>ch1>>ch2;
        vs3.push_back(ch1);
        vs4.push_back(ch2);
        vs1=vs3;
        vs2=vs4;
        if(vs1.size()>=2){
            tree_or_not(vs1,vs2);
        }
    }
    return 0;
}