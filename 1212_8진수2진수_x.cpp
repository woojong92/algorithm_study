#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
    string n;
    cin >> n;
    stack<string> st;
    
    for(int i=0; i<n.size(); i+=3){
        int j=3; 
        while(j--){
            st.push((int)(n[i]-'0')%2+'0');
        }
	  	cout<<st.pop();
	  	cout<<st.pop();
    	cout<<st.pop();
	}
    
    return 0; 
    
}
