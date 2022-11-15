#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	for(int irt=0;irt<num;irt++){
		int frequency;
		cin>>frequency;
		if(frequency<=45000&&frequency>=67) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}