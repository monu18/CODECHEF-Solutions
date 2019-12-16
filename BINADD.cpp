//mOzis_
/////*31022618*/////
//****//MONU KUMAR\\****//
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define tc ll t=1; cin>>t; while(t--)
#define ll long long int
#define ull unsigned long long
#define p1(x) cout <<x <<"\n";
#define p2(x,y) cout <<x <<" " <<y <<"\n";
#define p3(x,y,z) cout <<x <<" " <<y <<" " <<z <<"\n";
#define nL cout<<"\n";
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
#define siz 256
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
//###########################################################################################
ll no_of_digits(ll n)
{
    ll ans = 0 ;
    while(n>0)
    {
        ans++ ;
        n/=10 ;
    }
    return ans ;
}
//###########################################################################################
// modulo Multiplication
ll moduloMultiplication(ll  a, ll  b,  ll  zz)
{
    ll res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % zz;

        a = (2 * a) % zz;

        b >>= 1;
    }
    return res;
}
//###########################################################################################

ll convert(string s)
{
    bool o = true ;
    ll ans = 0 ;
    for(ll i=0;i<s.length();i++)
    {
        ans = ans*10 + (s[i]-48) ;
    }
    return ans ;
}
//###########################################################################################
//function to calculate a^b under mod...
ll powmod(ll a,ll b, ll modulo)
{
    if(b==0 || a==1) return 1;
    ll half=powmod(a,(b/2),modulo) % modulo;
    ll full = (half*half)%modulo;

    if(b%2) return (full*a)%modulo;
    return full%modulo;
}
//###########################################################################################
//function to calculate inverse modulo under mod...assuming gcd is 1
ll invmod(ll a,ll modulo)
{
    ll check=powmod(a,modulo-2,modulo) %modulo;
    return check;
}
//###########################################################################################

ll max(ll a,ll b)
{
  if (a>b) {
    /* code */
    return a;
  }
  return b;
}
//###########################################################################################
ll min(ll a,ll b)
{
  if (a<b) {
    /* code */
    return a;
  }
  return b;
}
//###########################################################################################
ll min(ll a,ll b, ll c)
{
  if (a<b) {
    /* code */
    return min(a,c);
  }
	else
	{
			return min(b,c);
	}

}
//###########################################################################################
ll max(ll a,ll b, ll c)
{
  if (a<b) {
    /* code */
    return max(b,c);
  }
	else
	{
			return min(a,c);
	}

}
//###########################################################################################
ll min(ll a,int b)
{
	if (a<b) return a;
	return b;
}
//###########################################################################################
ll min(int a,ll b)
{
	if (a<b) return a;
	return b;
}
//###########################################################################################
ll max(ll a,int b)
{
	if (a>b) return a;
	return b;
}
//###########################################################################################
ll max(int a,ll b)
{
	if (a>b) return a;
	return b;
}
//###########################################################################################
ll gcd(ll a,ll b)
{
	if (b==0) return a;
	return gcd(b,a%b);
}
//###########################################################################################
ll lcm(ll a,ll b)
{
	return a/gcd(a,b)*b;
}
//###########################################################################################
void yes()
{
  cout<<"YES"<<"\n";
}
//###########################################################################################
void no()
{
  cout<<"NO"<<"\n";
}
//###########################################################################################
int main()
{
	fast
//	clock_t launch=clock();
	tc
	{
    string a,b;
    cin>>a;
    cin>>b;
    ll l1,l2;

    l1=a.length();
    l2=b.length();
    ll f1=1,f2=1;
    for (size_t i = 0; i < l2; i++) {
      /* code */
      if (b[i]=='1') {
        /* code */
        f1=0;
        break;
      }
    }
    for (size_t i = 0; i < l1; i++) {
      /* code */
      if (a[i]=='1') {
        /* code */
        f2=0;
        break;
      }
    }
    if (f1) {
      /* code */
      p1(0)
      continue;
    }
    else if (f2) {
      /* code */
      p1(1)
      continue;
    }
    ll l=max(l1,l2)+1;
    string s1,s2;
    s1=a;
    s2=b;
    if (l-1==l1) {
      /* code */
    //  p2(l1,l2)
      string temp1="0",temp2="0";
      for (ll i = 0; i < l1-l2; i++) {
        /* code */
        temp1+="0";
      }
      temp1+=b;
      temp2+=a;
      a=temp2;
      b=temp1;
    }
    else
    {
      //p2(l1,l2)
      string temp1="0",temp2="0";
      for (ll i = 0; i < l2-l1; i++) {
        /* code */
        temp1+="0";
      }
      temp1+=a;
      temp2+=b;
      a=temp1;
      b=temp2;
    }
    string aaah;//xor
    string uuuh;//and
    for (size_t i = 0; i < l; i++) {
      /* code */
      if ((a[i]=='1' && b[i]=='1')|| (a[i]=='0' && b[i]=='0')) {
        /* code */
        aaah+='0';
      }
      else
      {
        aaah+='1';
      }
      if ((a[i]=='1' && b[i]=='1')) {
        /* code */
        uuuh+='1';
      }
      else
      {
        uuuh+='0';
      }
    }
    ll f3=1;

  //  p2("uhhh ",uuuh)
    uuuh.erase(uuuh.begin());
    uuuh+='0';
    for (size_t i = 0; i < uuuh.length(); i++) {
      /* code */
      if (uuuh[i]=='1') {
        /* code */
        f3=0;
      }
    }
    if (f3) {
      /* code */
      p1(1)
      continue;
    }
    // p2("a "," b")
    //  p2(a,b)
     // p2("aaah "," uuuh")
     // p2(aaah,uuuh)
    ll ans=0;
    ll f=0;
    ll count=0;
    lpr(i,l-1,0)
    {

      if(!f && aaah[i]=='0')
      {
        continue;
      }
      else if(!f && aaah[i]=='1' && uuuh[i]=='1')
      {
          count=1;
          f=1;

      }
      else if(f && aaah[i]=='1' && uuuh[i]=='0'){
        count++;
      }

      else if(f && aaah[i]=='0')
      {

      ans=max(ans,count),f=0;
      }
      // if (uuuh[i]=='1' && aaah[i]=='1') {
      //   /* code */
      // //  p2("i ",i)
      //   ll count=1;
      //   ll tt=i+1;
      //   lpr(j,tt,1)
      //   {
      //   //  p2("j ",j)
      //     if (aaah[j]=='1' && aaah[j-1]=='1') {
      //       /* code */
      //       count++;
      //       //p2("count ",count)
      //     }
      //   }
      //  //p2("count ",count)
        //ans=max(ans,count);

    }
    p1(ans+2)


    //p2(a,b)
	}//tc

	//clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////