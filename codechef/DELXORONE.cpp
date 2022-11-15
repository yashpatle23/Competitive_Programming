#include<bits/stdc++.h>
using namespace std;

void ans(){
    int n;
    cin>>n;
    n=n%(3*100000);
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
         int maxcount = 0;
    int element_having_max_freq;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if ((arr[i]^arr[j])<=1)
                count++;
        }
 
        if (count > maxcount) {
            maxcount = count;
            element_having_max_freq = arr[i];
        }
    }
    cout<<n-maxcount<<endl;
 
}
int main(){
    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}