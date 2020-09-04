#include<bits/stdc++.h>
using namespace std;
int main()
 {  
    int T;
    cin>>T;
    string s;
    while(T--){
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        do {  
        cout << str << ' ';  
        } while(next_permutation(str.begin(), str.end()));
        cout<<endl;
    }
	return 0;
}
