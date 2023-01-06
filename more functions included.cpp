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
#define fref(x,y) for(auto &(x) : (y))
#define faut(x,y) for(auto (x) : (y))
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


ll sep(int n){
    int res=0;
    while(n!=0){
        n/=10;
        res++;
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


bool Prime(int x){
    if (x==1){
        return false;
    }
    for (int i=2; i<=round(sqrt(x)); i++){
       if (x%i==0){
        return false;
       }
       else{
        return true;
       }
    }
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
};


int main()
{
      // ._. ||
      localspeedghalyislegitatrash
      int t;
      std::cin >> t;
      while (t--){
          Solution();
      }

    return 0;
}
