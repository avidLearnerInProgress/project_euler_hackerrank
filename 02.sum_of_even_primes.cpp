#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long long int evesum = 0, sum = 0, prev = 0, next = 1;
        while(next <= n){
            sum = prev + next;
            prev = next;
            next = sum;
            if((sum & 1) == 0 && sum < n)
                evesum += sum;
        }
        cout<<evesum<<"\n";
    }
    return 0;
}