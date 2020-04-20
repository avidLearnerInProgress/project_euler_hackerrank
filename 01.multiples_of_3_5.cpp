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
        int n;
        cin >> n;
        auto sum = 0;

        long long result = 0;
        long long int n3 = (n-1)/3;
        long long int n5 = (n-1)/5;
        long long int n15 = (n-1)/15;


        long sum3 = 3 * (n3 * (n3 + 1))/2;
        long sum5 = 5 * (n5 * (n5 + 1))/2;
        long sum15 = 15 * (n15 * (n15 + 1))/2;
        cout<<sum3 + sum5 - sum15<<"\n";
    }
    return 0;
}
