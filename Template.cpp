/*
if you are checking this bad solution enjoy this part from 'Undercover Martyn'~
You hid there last time
You know we're gonna find you
Sick in the car seat
Cause you're not up to going
Out on the main streets, completing your mission
 */
/*--------------------------------------------------------------------------------------------------------------------*/
#pragma GCC optimize("-O2")
#include<bits/stdc++.h>
#include<cmath>
#define localspeedghalyislegitatrash std::ios_base::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
#define lli long long int
#define all(x) std::sort(((x).begin()),((x).end()))
#define Yes std::cout<<"YES"<<std::endl;
#define No std::cout<<"NO"<<std::endl;
#define endl '\n';
#define ft first
#define sd second
#define pb push_back
#define pf push_front
#define em emplace
#define emb emplace_back
#define fi(i,n) for(int i=0; i<n; i++)
#define fj(j,n) for(int j=0; j<n; j++)
#define fstr(q,x) for(int (q)=0; (q)<(x).size(); q++)
#define fref(x,y) for(auto &(x) : (y))
#define faut(x,y) for(auto (x) : (y))
#define invect(n,v) for(int i=0; i<(n); i++)std::cin>>v[i];
#define oddEven(n) if((n)&1){std::cout<<"YES"<<endl}else{std::cout<<"NO"<<endl}
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ull;
typedef bool flag;
typedef std::vector<int> vr;
typedef std::vector<ll> vrl;
typedef std::vector<std::vector<int>> vvr;
typedef std::vector<std::string> vss;
typedef std::vector<std::pair<int,int>> vpi;
typedef std::vector<std::pair<ll,ll>> vpill;
typedef std::vector<int>::iterator vit;
typedef std::pair<int,int> pr;
typedef std::map<int,int> mp;
typedef std::map<std::string,int> mps;
typedef std::unordered_map<int,int> ump;
typedef std::deque<int> dq;
typedef std::queue<int> q;
typedef std::stack<int> sk;
typedef std::set<int> st;
typedef std::unordered_set<int> ust;




ll gcd(int a, int b) {
  return (b == 0 ? a : gcd(b, a % b));
}


ll lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}


ll lowbit(ll x){
    return x & (-x);
}


ll fact(ll a){
    if(a==1){
        return 1;
    }
    return a*fact(a-1);
}


ll digitsN(int n){
    int res=0;
    while(n!=0){
        n/=10;
        res++;
    }
    return res;
}


ll calcsp(int x){
    int res =0;
    while(x){
        res+=x%10;
        x/=10;
    }
    return res;
}


ll power(int a, int b){
    if (b == 0){
     return 1;
    }
    ll p = power(a, b / 2);
    if (b % 2){
     return (a * p * p);
    }
    else{
     return (p * p);
    }

}


ll divisors(ll n)
{
    bool prime[n + 1];
    memset(prime, 1, sizeof(prime));
    for(int i=2; i*i<n; i++){
        if (prime[i]==1) {
            for (int j=i*2; j<n; j+=i){
                prime[j]=0;
            }
        }
    }
    int res = 1;
    for(int p=2; p<=n; p++) {
        if(prime[p]) {
            int c=0;
            if(n%p==0) {
                while(n%p== 0) {
                    n/=p;
                    c++;
                }
                res*=(c+1);
            }
        }
    }
    return res-1;
}


int min_index(vr a) {
    int idx = -1;
    int val = INT_MAX;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < val) {
            val = a[i];
            idx = i;
        }
    }
    return idx;
}


int max_index(vr a) {
    int idx = -1;
    int val = INT_MIN;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > val) {
            val = a[i];
            idx = i;
        }
    }
    return idx;
}


bool lucky(int i){ // string split
    std::string x = std::to_string(i);
    for(int i=0; i<x.size(); i++){
        if(!(x[i]=='4' || x[i]=='7')){
            return false;
        }
    }
    return true;

   /* while(x) integers case
    {
        if(x%10 - 4 && x % 10 - 7) return 0;
        x /= 10;
    }
    return 1;*/
}


bool BinaryST(int arr[], int x, int y) {
    int left = 0, right = x-1;
    while (left <= right) {
        int mid = (left+right)/2;
        if (arr[mid] == y){
            return true;
        }
        if (arr[mid] < y){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return false;
}

/*char arr[26]={'a','b','c','d'
    ,'e','f','g','h','i'
    ,'j','k','l','m','n',
    'o','p','q','r','s','t'
    ,'u','v','w','x','y','z'};*/ // --> lazy to implement

void Solution() {
}


int main() {

    // ._. ||
#ifdef Clion
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
    localspeedghalyislegitatrash
    int t;
    std::cin >> t;
    while (t--) {
        Solution();
    }
    return 0;
}

