//Problem Link- https://www.codechef.com/SEPT19B/problems/FIBEASY

#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define UB upper_bound
#define LB lower_bound
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define be(a) (a).begin(),(a).end()
#define deb(x) cout<< #x <<" "<<x<<endl;
#define deb2(x, y) cout<< #x <<" "<< x <<endl<< #y <<" "<<y<<endl
#define fo(i, n) for(long long i=0; i<n; i++)
#define Fo(i, n, k) for(long long i=k; i<n; i++)
 
typedef vector<pair<long long int, long long int>> vll;
typedef unordered_map<long long int, long long int> ump;
typedef long long int ll;
 
bool sortbysecdesc(const pair<ll, ll> &a, 
                   const pair<ll, ll> &b) 
{ 
       return a.second>b.second; 
}
 
bool isPrime(long long n) 
{ 
	
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (long long i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
}


 
int main()
{
	IOS;
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

ll size = 60;

ll *fib = new ll[size];
fib[0] = 0; fib[1] = 1;

for(long long i=2; i<size-1; i++)
		{
			fib[i] = (fib[i-1] + fib[i-2])%10;
		}

	long long T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		if(n==1) {cout<<"0\n"; continue;}
		long double kt = log2l(n);
		ll k = (ll)kt;
		ll pos = 1;
		for(ll i = 0; i<k; i++)
		{
		    pos = (pos*2)%60;
		}
		pos = (pos-1)%60;
		ll ans = fib[pos];
		cout<<ans<<"\n";




		//ll *arr = new ll[n];
		//fo(i, n) cin>>arr[i];


		
	}
	return 0;
	

	
}
