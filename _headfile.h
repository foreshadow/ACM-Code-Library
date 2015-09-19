// includes
#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

// macro of control statement
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FOR1(i, n) for (int i = 1; i <= n; i++)
#define FORITER(i, a) for (__typeof a.begin() i = a.begin(); i != a.end(); i++)

// STL template classes
#define fromto(a, l, r) &a[l], &a[r+1]
#define allof(a) &a[0], &a[0]+sizeof a/sizeof a[0]
#define all(a) a.begin(), a.end()

// namespace
using namespace std;

// type definitions
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;

// constants
const int maxint = 2147483647;

// simplifying functions
inline int ctoi(const char c) { return c - '0'; }
inline char itoc(const int n) { return n + '0'; }
template<typename T> inline bool in(T x, T l, T r) { return l <= x && x <= r; }

// stl functions
template<typename T1, typename T2> inline pair<T1, T2> mp(const T1 &fst, const T2 &scd) { return make_pair(fst, scd); }
template<typename T> inline void srt(T &a) { sort(a.begin(), a.end()); }
template<typename T1, typename T2> inline int lbs(const T1 &a, const T2 k) { return lower_bound(a.begin(), a.end(), k); }
template<typename T1, typename T2> inline int ubs(const T1 &a, const T2 k) { return upper_bound(a.begin(), a.end(), k); }

// anti stack overflow
void expandStack()
{
#ifdef __GNUC__
    int size = 67108864; // 64 megabytes
    char *p = (char*) malloc(size) + size;
#   ifdef __i386__
    __asm__("movl %0, %%esp\n" :: "r"(p));
#   else
    __asm__("movq %0, %%rsp\n" :: "r"(p));
#   endif
#else
#pragma comment(linker, "/STACK:1024000000,1024000000") // < 1G
#endif
}

// infinity's functions
// don't use extendedIO::read and scanf together unless you understand how it works!
namespace extendedIO
{
const char SP = ' ';
const char CR = '\n';
inline void write(const int n) { printf("%d", n); }
inline void write(const uint n) { printf("%u", n); }
inline void write(const ll n) { cout << n; }
inline void write(const double a) { printf("%f", a); }
inline void writef(const double a, const int n) { printf("%.*f", n, a); }
inline void write(const char c) { printf("%c", c); }
inline void write(const char s[] = "") { printf("%s", s); }
inline void write(const string s) { cout << s; }
inline void writes(const int *a, const int l, const int r) { for (int i = l; i <= r; i++) printf("%d ", a[i]); }
template<uint n> inline void write(const int (&a)[n]) { for (uint i = 0; i < n; i++) printf("%d ", a[i]); }
template<typename T> inline void write(const T a) { for (__typeof a.begin() i = a.begin(); i != a.end(); i++) printf("%d ", *i); }
inline void writeln() { write(CR); }
template<typename T> inline void writeln(const T &a) { write(a); write(CR); }
inline void writefln(const double a, int n) { printf("%.*f", n, a); write(CR); }
inline void writesln(const int *a, const int l, const int r) { for (int i = l; i <= r; i++) printf("%d ", a[i]); writeln(CR); }
template<typename T> inline void writelns(const T a) { for (__typeof a.begin() i = a.begin(); i != a.end(); i++) writeln(*i); }
#if __cplusplus >= 201103L
template<typename T, typename... types> inline void write(const T &a, const types &...args) { write(a); write(args...); }
template<typename... types> inline void writeln(const types &...args) { write(args...); write(CR); }
#endif
// POSITIVE integer only, returning -1 if getchar() returns EOF(-1).
inline int read(int &n) { n = 0; int c; while (c = getchar(), in(c, 48, 57)) n = 10 * n + ctoi(c); return c; }
inline int read(ll &n) { n = 0; int c; while (c = getchar(), in(c, 48, 57)) n = 10 * n + ctoi(c); return c; }
// NEGATIVE int compatible, ignoring EOF.
inline int getint() { int n; if (read(n) != 45) return n; read(n); return -n; }
inline ll getlonglong() { ll n; if (read(n) != 45) return n; read(n); return -n; }
// array and STL container
template<uint n> inline void read(int (&a)[n]) { for (uint i = 0; i < n; i++) a[i] = getint(); }
inline void read(int *a, int l, int r) { for (int i = l; i <= r; i++) a[i] = getint(); }
inline void read(vector<int> &v, int n) { v.clear(); for (int i = 0; i < n; i++) v.push_back(getint()); }
// std::string
#ifdef __GNUC__
inline void read(string &str, uint size) { char s[size]; scanf("%s", s); str = string(s); }
#else
inline void read(string &str, uint) { cin >> str; }
#endif
inline string readstr(uint size = 1111) { string s; read(s, size); return s; }
} using namespace extendedIO;

// cstring
template<typename T> inline void clr(T &a) { memset(a, 0, sizeof a); }
// math
template<typename T> T gcd(T a, T b) { return (b ? gcd(b, a % b) : a); }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
// find (x, y) s.t. a x + b y = gcd(a, b) = d
template<typename T> T exGcd(T a, T b, T &x, T &y)
{ T d = a; if (b) { d = exGcd(b, a % b, y, x); y -= a / b * x; } else { x = 1; y = 0; } return d; }

// end

int main()
{
    
    return 0;
}