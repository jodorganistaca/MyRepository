#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("429in.txt","r",stdin);
    freopen("429out.txt","w",stdout);
    int t,endD=0;
    string s,b,e,blank;
    vector<string> results;
    cin>>t;
    getline(cin,blank);
    getline(cin,blank);
    while(t--){
        while(getline(cin,s)){
            if(!s.empty()){
                cout << "empty"<<' ';
            }
            if(s.compare("*")==0){
                cout << "build the graph" << endl;
                getline(cin,blank);
                endD = 1;
            }
            if(endD){
                istringstream iss(s);
                results((std::istream_iterator<string>{iss},
                    std::istream_iterator<string>()));
                b = results.pop_back();
                e = results.pop_back();
                cout << b <<" "<<e<<endl;
            }else{
                cout << s << endl;
            }



        }
    }
    return 0;
}
