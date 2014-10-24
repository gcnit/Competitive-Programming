#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long lint;typedef vector<int> vi;typedef vector<vi> vii;typedef pair<int, int> p;
class node{public :    int x;    int y;    int cost;};
bool operator < ( const node & first, const node & second){    return first.cost<second.cost;}
class LeftOrRight
{
public:
int maxDistance(string program)
{
    string test=program;
    int l=0,r=0,q=0;
    for(int x=0;x<program.size();x++)
    {
        if(program[x]=='L')
        l++;
        if(program[x]=='R')
        r++;
        if(program[x]=='?')
        program[x]='L';

    }
    int mn=0,mx=0;
    int cpos=0;
    for(int x=0;x<program.size();x++)
    {
        if(program[x]=='L')
        cpos--;
        if(program[x]=='R')
        cpos++;
        mx=max(mx,cpos);
        mn=min(mn,cpos);
    }
    int reach=max(mx,-mn);

cout<<mn<<" "<<mx<<" "<<reach<<"\n";





    program=test;
    for(int x=0;x<program.size();x++)
    {
        if(program[x]=='L')
        l++;
        if(program[x]=='R')
        r++;
        if(program[x]=='?')
        program[x]='R';

    }
    mn=0,mx=0;
    cpos=0;
    for(int x=0;x<program.size();x++)
    {
        if(program[x]=='L')
        cpos--;
        if(program[x]=='R')
        cpos++;
        mx=max(mx,cpos);
        mn=min(mn,cpos);
    }
    reach=max(reach,max(mx,-mn));
cout<<mn<<" "<<mx<<" "<<reach<<"\n";
    return reach;
//$CARETPOSITION$
}


};
