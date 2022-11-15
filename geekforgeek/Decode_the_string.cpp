//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include<string>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        int irri;
        string main="";
        string tem;
        
        tem=s[0];
        
        while(isdigit(s[0])==0){
            if(tem.compare("]")==0) {
                s.erase(0,1);
                decodedString(s);
            }
            
            main.append(tem);
            s.erase(0,1);
            tem.clear();
            tem=s[0];
            if(s.size()==0) return main;
        }
        if (isdigit(s[0])!=0){
        irri=stoi(tem);
        
            s.erase(0,1);
            s.erase(0,1);
            s.pop_back();
            string ii=decodedString(s);
            for(int i=0;i<irri;i++)
            main.append(ii);
        }
        return main;
    }
};

//{ Driver Code Starts.

int main(){
    //int t;
    //cin>>t;
    //while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    //}
    return 0;
}
// } Driver Code Ends