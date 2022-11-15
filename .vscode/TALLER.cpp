#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	for(int irt=0;irt<num;irt++){
		int x,y;
		cin>>x>>y;
		if(x<y) cout<<"B"<<endl;
		else cout<<"A"<<endl;
	}
	return 0;
}