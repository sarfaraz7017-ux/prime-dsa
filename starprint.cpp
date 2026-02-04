#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
   
    for (i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" \t";
        }
        //left pattern
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<"\t";
            
        }
        for(int j=2*i-2;j>=i;j--){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    
    return 0;

}
