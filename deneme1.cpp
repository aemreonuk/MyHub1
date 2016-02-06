#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
using std::cout; using std::cin;
using std::string;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,M,step,it;
    vector<int> v;
    cin>>N>>M;
    for(int i=1;i<N+1;i++){
        v.push_back(i);
    };
    step = M;
    it = 0;
    while(v.size()>=M){

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<" iterator at "<< v[it] <<" set size " <<N<<"\n";
        v.erase(v.begin()+((it+step-1)%N));
        it = (it+step-1)%N;
        N=N-1;

    }
    for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
    }
    return 0;
}
