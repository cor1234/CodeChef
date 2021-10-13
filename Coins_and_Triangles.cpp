#include <iostream>
using namespace std;

int main() {
	 int t;
    cin>>t;
    while(t--){
        long int n,m=0;
        int count=0;
        cin>>n;
        for (int i=1;m<n;i++){
            m+=i;
            count++;
            if(m==n){
                cout<<i<<endl;
                break;
            }
            else if(m>n){
                cout<<i-1<<endl;
                break;
            }
            //cout<<m<<endl;
        }
    }
	return 0;
}
