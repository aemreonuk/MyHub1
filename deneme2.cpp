#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <stdio.h>
using namespace std;
using std::cout; using std::cin;
using std::string;

int main() {
        int sum,vs1,vs2;
        vector<string> vs;
        string str1,str2;
        getline(cin, str1, '\n');
        for(int i=0;i<str1.size()+1;i++){
            if(str1[i]==' '){
                vs.push_back(str2);
                str2.clear();
            }
            else if(i==str1.size()){
                vs.push_back(str2);
            }
            else{
                str2=str2+str1[i];
            }
        }
        for(int i=0;i<vs.size();i++){
            if(vs[i]=="-"){
                //int vs2=int::Parse(vs[i-2]);
                stringstream ss2(vs[i-2]);
                ss2 >> vs2;
                stringstream ss1(vs[i-1]);
                ss1 >> vs1;
                sum=vs2-vs1;
                vs.erase(vs.begin()+i-2);
                vs.erase(vs.begin()+i-2);
                vs.erase(vs.begin()+i-2);
                stringstream ss3;
                ss3 << sum;
                vs.insert(vs.begin()+i-2,ss3.str());
                i = 0;
                cout<<sum<<"\n";
            }
            else if(vs[i]=="+"){
                stringstream ss2(vs[i-2]);
                ss2 >> vs2;
                stringstream ss1(vs[i-1]);
                ss1 >> vs1;
                sum=vs2+vs1;
                vs.erase(vs.begin()+i-2);
                vs.erase(vs.begin()+i-2);
                vs.erase(vs.begin()+i-2);
                stringstream ss3;
                ss3 << sum;
                vs.insert(vs.begin()+i-2,ss3.str());
                i = 0;
                cout<<sum<<"\n";
            }
            else if(vs[i]=="*"){
                //sum=int(vs[i-2])*int(vs[i-1]);
                stringstream ss2(vs[i-2]);
                ss2 >> vs2;
                stringstream ss1(vs[i-1]);
                ss1 >> vs1;
                sum=vs2*vs1;
                vs.erase(vs.begin()+i-2);
                vs.erase(vs.begin()+i-2);
                vs.erase(vs.begin()+i-2);
                stringstream ss3;
                ss3 << sum;
                vs.insert(vs.begin()+i-2,ss3.str());
                i = 0;
                cout<<sum<<"\n";
            }
            else if(vs[i]=="/"){
                //sum=int(vs[i-2])/int(vs[i-1]);
                stringstream ss2(vs[i-2]);
                ss2 >> vs2;
                stringstream ss1(vs[i-1]);
                ss1 >> vs1;
                sum=vs2/vs1;
                vs.erase(vs.begin()+i-2);
                vs.erase(vs.begin()+i-2);
                vs.erase(vs.begin()+i-2);
                stringstream ss3;
                ss3 << sum;
                vs.insert(vs.begin()+i-2,ss3.str());
                i = 0;
                cout<<sum<<"\n";
            }
            cout<<"say";
        }

        for(int i=0;i<vs.size();i++){
            cout<<vs[i]<<" end  ";
        }
        return 0;
}
