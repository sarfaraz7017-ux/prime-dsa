#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cin>>num;
    string str=to_string(num);
    reverse(str.begin(),str.end());
    cout<<str;
 return 0;   
}