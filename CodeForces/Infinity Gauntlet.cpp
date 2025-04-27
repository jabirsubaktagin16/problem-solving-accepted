#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    m=n;
    string str1="purple",str2="green",str3="blue",str4="orange",str5="red",str6="yellow";
    vector<string>vec;
    string a;
    vec.push_back(str1);
    vec.push_back(str2);
    vec.push_back(str3);
    vec.push_back(str4);
    vec.push_back(str5);
    vec.push_back(str6);
    while(n--){
        cin>>a;
        for(int i=0;i<vec.size();i++){
            if(a==vec[i]){
                vec.erase(vec.begin()+i);
                break;
            }
        }
    }
    cout<<6-m<<endl;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==str1){
            cout<<"Power"<<endl;
        }
        if(vec[i]==str2){
            cout<<"Time"<<endl;
        }
        if(vec[i]==str3){
            cout<<"Space"<<endl;
        }
        if(vec[i]==str4){
            cout<<"Soul"<<endl;
        }
        if(vec[i]==str5){
            cout<<"Reality"<<endl;
        }
        if(vec[i]==str6){
            cout<<"Mind"<<endl;
        }
    }
    return 0;
}
