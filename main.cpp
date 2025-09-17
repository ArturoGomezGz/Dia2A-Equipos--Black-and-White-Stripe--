#include<iostream>

using namespace std;

int main(){
    int t,k,n;
    cin>>t;
    for (int i = 0; i<t; i++){
        cin>> n;
        cin>> k;
        char stripe[n];
        for (int i = 0; i<n; i++){
            cin>>stripe[i];
        }

        int WMin=n;
        
        for(int i = 0; i<n-k+1; i++){
            int W=0;
            for (int j = i; j < k+i; j++){
                if(stripe[j]=='W'){
                    W++;
                }
            }
            if(W<WMin){
                WMin = W;
            }
            if(WMin==0){
                break;
            }
        }
        cout<<WMin<<endl;
    }
    return 0;
}
