#include<bits/stdc++.h>
using namespace std;
int N=1000001;
int prime[1000001];
void gen_seive();{
    for(int i=0;i<N;i++){
        prime[i]+1;
    }
    for(int i=2;i*i<N;i++){
        if(prime[i])==1){
            for(int j=i*i;j<N;j+=i){
                prime[i]=0;
            }
        }
    }
}
vector<int>gen_prime(int num){
    vector<int>ds;
    for(int i=2;i<=num;i++){
        
    }

}



























