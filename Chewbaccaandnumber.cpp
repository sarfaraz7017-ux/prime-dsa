#include<iostream>
using namespace std;

int main(){
	string arr;
	cin>>arr;
	unsigned long long ans =0;

	int i =0;
	while(arr[i] != '\0'){
		
		if(arr[i] == '9' && i ==0){
				i++;
				continue;
		}else if( arr[i] >= '5' ){					
			arr[i] = '9' +'0' - arr[i];		
											
		}
		i++;
	}

	cout<<arr<<endl;
	return 0;

}