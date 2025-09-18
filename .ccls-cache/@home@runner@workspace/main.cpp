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

        int WMin=0;
        for (int i = 0; i < k; i++){
            if(stripe[i]=='W'){
                WMin++;
            }
        }
        int W=WMin;
        for(int i = 1; i<n-k+1; i++){
            if (stripe[i-1]=='W'){
                W--;
            }
            if (stripe[k+i-1]=='W'){
                W++;
            }
            if (W<WMin){
                WMin = W;
            }
            }

        cout<<WMin<<endl;
    }
    return 0;
}