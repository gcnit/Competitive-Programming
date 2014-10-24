#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M = 1000000000;
const double maxi = 1e20;

ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r);
  if(b%2) r = (r*a);
  return r;
}

struct Point {
  double x,y;
  Point() {}
  Point(ll x,ll y):x(x),y(y) {}
};

struct comparex {
  inline bool operator()(const Point &a, const Point &b) {
    if(a.x != b.x) return a.x < b.x;
    return a.y < b.y;
  }
} compx;

struct comparey {
  inline bool operator()(const Point &a, const Point &b) {
    if(a.y != b.y) return a.y < b.y;
    return a.x < b.x;
  }
} compy;

double ans(ll n, const Point pts[], const vector<Point> &ypt) {

  vector<Point> left, right;
  if(n<3) return maxi;
  ll l = n/2,r = n-l;
  Point mid = Point((pts[l-1].x+pts[l].x)/2, (pts[l-1].y+pts[l].y)/2);
  left.reserve(l);
  right.reserve(r);
  for(ll i=0;i<n;i++) {
    if(compx(ypt[i], mid))
      left.push_back(ypt[i]);
    else
      right.push_back(ypt[i]);
  }
  double answer = maxi;
  answer = min(answer, min(ans(l, pts, left),ans(r, pts+l, right)));
  int mini = (answer > maxi/2) ? 2*M : int(ans/2);
  vector<Point> soln;
  soln.reserve(n);
  ll j = 0;
  for(ll i=0;i<n;i++) {
    Point p = ypt[i];
    if(abs(p.x - mid.x) > mini) continue;
    while(j < soln.size() && p.y - soln[j].y > mini) ++j;
    for(ll i=j;i<soln.size();i++) {
      for(ll j=i+1;j<soln.size();j++) {
            Point a=p, b=soln[i],c=soln[j];
        answer = min(answer, sqrt(double(pw(a.x-b.x,2) + pw(a.y-b.y,2)))+sqrt(double(pw(c.x-b.x,2) + pw(c.y-b.y,2)))+sqrt(double(pw(a.x-c.x,2) + pw(a.y-c.y,2))));
      }
    }
    soln.push_back(p);
  }
  return answer;
}

double solve(vector<Point> &pts) {
  sort(pts.begin(), pts.end(), compx);
  vector<Point> ypt = pts;
  sort(ypt.begin(), ypt.end(), compy);
  return solve(pts.size(), &pts[0], ypt);
}

int main() {
  ll t;
  scanf("%lld", &t);
  for(ll j=0;j<t;j++) {
    ll n; scanf("%lld", &n);
    vector<Point> pts;
    pts.reserve(n);
    for(ll i=0;i<n;i++) {
      double x,y; scanf("%lf %lf", &x, &y);
      pts.push_back(Point(2*x,2*y));
    }
    double ans = solve(pts);
    printf("Case %lld: %.6lf\n", j+1, ans/2);
  }
  return 0;
}
