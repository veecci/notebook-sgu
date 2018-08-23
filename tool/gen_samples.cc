#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <ctime>
#include <map>

#define inf 0x3f3f3f3f
#define Inf 0x3FFFFFFFFFFFFFFFLL
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Rep(i, n) for (int i = 1; i <= (n); ++i)
#define clr(x, a) memset(x, (a), sizeof x)
using namespace std;
typedef long long ll;

string buf[111];
string str[2][111];
int cnt[2];

int main() {
  string s;
  int id = 0;
  while (getline(cin, s)) {
    if (s == "") continue;
    if (s == "Sample Input") {
      id = 0;
      continue;
    } else if (s == "Sample Output") {
      id = 1;
      continue;
    }
    str[id][cnt[id]++] = s;
  }  
  int l1 = 16, l2 = 16;
  rep(i, cnt[0]) {
    int len = str[0][i].length();
    l1 = max(l1, len + 4);
  }
  rep(i, cnt[1]) {
    int len = str[1][i].length();
    l2 = max(l2, len + 4);
  }
  putchar('+'); rep(i, l1) putchar('-'); putchar('+'); rep(i, l2) putchar('-'); puts("+");
  putchar('|'); printf("Sample Input"); rep(i, l1 - 12) putchar(' '); putchar('|');
  printf("Sample Output"); rep(i, l2 - 13) putchar(' '); puts("|");
  putchar('+'); rep(i, l1) putchar('-'); putchar('+'); rep(i, l2) putchar('-'); puts("+");
  rep(i, max(cnt[0], cnt[1])) {
    putchar('|');
    if (i < cnt[0]) {
      printf(" | ");
      printf("%s", str[0][i].c_str());
      rep(j, l1 - 3 - str[0][i].length()) putchar(' ');
    } else {
      rep(j, l1) putchar(' ');
    }
    putchar('|');
    if (i < cnt[1]) {
      printf(" | ");
      printf("%s", str[1][i].c_str());
      rep(j, l2 - 3 - str[1][i].length()) putchar(' ');
    } else {
      rep(j, l2) putchar(' ');
    }
    puts("|");
  }
  putchar('+'); rep(i, l1) putchar('-'); putchar('+'); rep(i, l2) putchar('-'); puts("+");

  return 0;
}

