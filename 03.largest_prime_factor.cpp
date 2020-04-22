#include <iostream>
#include <vector>
using namespace std;

vector<bool> a;
vector<int> prime;

/*
unsigned long long int sqrt(unsigned long long int n) {
    unsigned long long int i=1;
    while( i*i<=n ) i++ ;
    return i-1;
}
*/

void sieve(unsigned long long int n) {
    a.resize(n+1);
    unsigned long long int i=0, j=0;

    a[0]=0; a[1]=1;
    for(i=2; i<=n; i++) a[i]=1;

    for(i=2; i<=n; i++) {
        if(a[i]==1) {
            prime.push_back(i);
            a[i]=0;
            if( i*i >n) continue;
            for(j=i*i; j<=n; j=j+i) {
                a[j]=0;
            }
        }
    }
}

bool pcheck(unsigned long long int n) {
    if(n<=1) return false;
    unsigned long long int i=0;
    for(i=0; prime[i] * prime[i] <= n; i++) {
        if(n % prime[i] ==0) return false;
    }
    return true;
}

unsigned long long int f(unsigned long long int n) {
    unsigned long long int i=0, y=0;

    if(n<=2) return n;
    // prime[i] <= n because n can be prime too
    for(i=0; prime[i] <= n; i++) {
        if(n% prime[i] ==0) { 
            y=i; 
        }
    }
    return prime[y];    
}

int main() {
    int t; cin>>t;
    sieve(100000000);

    for(int a0=1; a0<=t; a0++) {
        unsigned long long int n; cin>>n;
        //sieve(n);
        cout<< f(n) << endl;    
    }

    return 0;
}