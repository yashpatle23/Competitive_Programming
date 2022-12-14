#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int str_length = str.length();
       int arr[str_length] = { 0 };
 
    int j = 0, i, sum = 0;
     for (i = 0; i<str_length; i++) {
        if (str[i] == ' '){
            
            j++;
        }
        else {
            arr[j] = arr[j] * 10 + (str[i] - 48);
        }
        
    }

    int tem=0;
    for(int i=0;i<j+1;i++) {
        if(arr[i]==2) tem++;
        else{
        for(int j=2;j<=arr[i]/2;j++){
            if(arr[i]%j==0) goto con;
        }
        cout<<arr[i];
        tem++;
        }
    con:
        continue;
        
    }
        cout<<tem*(tem-1)/2;
    return 0;
}