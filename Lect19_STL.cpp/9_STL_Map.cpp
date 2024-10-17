#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1] = "babbar";
    m[13] = "kumar"; 
    m[2] = "love";

    m.insert({5,"bheem"}); //alternate method to insert

    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -13: "<<m.count(-13)<<endl;
    cout<<"Finding 13: "<<m.count(13)<<endl;

    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(2);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }
}