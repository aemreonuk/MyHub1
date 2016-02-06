#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <stdio.h>
using namespace std;
using std::cout; using std::cin;
using std::string; using std::endl;

int Pour(int a, int b){
	while(b != 0)
	{
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main(){
    int bucket_size;
    int NoS,max;
    string str;
    vector<int> all_buckets;

    while((cin>>bucket_size)&&(all_buckets.size()<5)){
        all_buckets.push_back(bucket_size);
        if(cin.get() == '\n')
            break;
    }
    sort(all_buckets.begin(),all_buckets.end());
    Bucket buckets[all_buckets.size()];
    for(int i=0;i<all_buckets.size();i++){
        buckets[i].get_bucket(all_buckets[i]);
        cout<<all_buckets[i]<<" ";
    }
    cout<<"\n";
    max = all_buckets[all_buckets.size()-1];
    for(int i=1;i<=max;i++){
        NoS = MinNumMov(i,all_buckets);
        //all_buckets.reset();
        cout<<i<<": "<<NoS<<endl;
    }

    return 0;
}
