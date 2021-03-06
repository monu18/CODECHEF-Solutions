//mOzis_
/////*31022618*/////
//****//MONU KUMAR\****//
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define p1(x) cout <<x <<"\n"
#define p2(x,y) cout <<x <<" " <<y <<"\n"
#define p3(x,y,z) cout <<x <<" " <<y <<" " <<z <<"\n"
#define nL cout<<"\n"
#define lp(i,l,r) for (long long int i = l; i < r; i++)
#define lpr(i,r,l) for (long long int i = r-1; i >=l ; i--)
#define mem(a,x) memset(a,x,sizeof(a))              //set elements of array to some value
#define pi 3.1415926535897932384626
#define mod 1000000007
#define vi vector<int>
#define vii vector< vector<long long int> >
#define vpi vector< pair<long long int,long long int> >
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define siz 256                        //characters are stored using 8 bit and there can be /256 possible characters only in lowercase alphabet
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b)) / gcd((a),(b))
#define bc(n) __builtin_popcountll(n)
#define leadzero(a) __builtin_clz(a)        // count leading zeroes
#define trailzero(a) __builtin_ctz(a)       // count trailing zeroes
#define bitcount(a) __builtin_popcount(a)   // count set bits
#define lps(v,x) (lower_bound(all(v),x)-v.begin())
#define ups(v,x) (upper_bound(all(v),x)-v.begin())

//#########################################################################################
bool anagram(char *s1, char *s2)
{
	ll count[siz];
    mem(count,0) ;
    ll i;
    for (i = 0; s1[i] && s2[i];  i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    if (s1[i] || s2[i])
    {
      return false;
    }
    lp(i,0,siz)
    {
    	 if (count[i])
    	 {
    	 	 return false;
    	 }
    }
     return true;

}
//###########################################################################################
int find_largest_digit(int n)
{
    int mx = 0 ;
    while(n>0)
    {
        mx = max(mx, n%10) ;
        n/=10 ;
    }
    return mx  ;
}

int no_of_digits(int n)
{
    int ans = 0 ;
    while(n>0)
    {
        ans++ ;
        n/=10 ;
    }
    return ans ;
}

/*int convert(string s)
{
    bool o = true ;
    int ans = 0 ;
    rp(i,s.length())
    {
        ans = ans*10 + (s[i]-48) ;
    }
    return ans ;
}*/
//###########################################################################################
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;
	clock_t launch=clock();
	while(t--)
	{
    ll n,d;
    cin>>n>>d;
    ll a[n];
    ll sum=0;
    for (size_t i = 0; i < n; i++) {
      /* code */
      cin>>a[i];
      sum+=a[i];
    }
    ll avg=sum/n;
    ll ans=0;
    if (avg*n!=sum) {
      /* code */
      cout<<-1<<"\n";
    }
    else
    {
      for (size_t i = 0; i+d < n; i++) {
        /* code */
        ll temp=a[i];
        if (temp!=avg) {
          /* code */
          a[i]=avg;
          a[i+d]=a[i+d]-avg+temp;
          ans+=abs(temp-avg);
        }

      }
      set<int>s;
      for (size_t i = 0; i < n; i++) {
        /* code */
        s.insert(a[i]);
      }
      if (s.size()==1) {
        /* code */
        cout<<ans<<"\n";
      }
      else
      {
        cout<<-1<<"\n";
      }
    }
	}

	clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////
