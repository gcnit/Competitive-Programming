      #include<iostream>
      #include<cstring>

      #include<cstdlib>

      #include<map>

      #include<vector>

      #include<list>

      #include<set>

      #include<queue>

      #include<cassert>

      #include<sstream>

      #include<string>

      #include<cmath>

      #include<algorithm>

      using namespace std;



      #define LET(x,a) __typeof(a) x(a)

      #define IFOR(i,a,b) for(LET(i,a);i!=(b);++i)

      #define EACH(it,v) IFOR(it,v.begin(),v.end())

      #define FOR(i,a,b) for(int i=(int)(a) ; i < (int)(b);++i)

      #define REP(i,n) FOR(i,0,n)

      #define PB push_back

      #define MP make_pair

      #define EPS 1e-9

      #define INF 2000000000



      typedef vector<int> VI;

      typedef long long LL;

      typedef pair<int,int> PI;





      #define BUFSIZE (200000)

      char outputbuffer[BUFSIZE<<1],inputbuffer[BUFSIZE<<1];

      char *outptr=outputbuffer,*ioptr=inputbuffer+BUFSIZE,*ioend=inputbuffer+BUFSIZE;

      int input_eof=0;



      #define putchar(c) (*outptr++ = (c))

      #define getchar() ({if (ioptr >= ioend) init_input(); *ioptr++;})

      #define eof() (ioptr>=ioend && input_eof)

      #define eoln() ({if(ioptr >= ioend) init_input(); *ioptr == '\n';})



      void init_input(){

      if (input_eof)

      return;

      int existing = BUFSIZE - (ioend - inputbuffer);

      memcpy(inputbuffer, ioend, existing);

      int wanted = ioend - inputbuffer;

      int count=fread(inputbuffer + existing, 1, wanted, stdin);

      if (count < wanted)

      input_eof = 1;

      ioend = inputbuffer + BUFSIZE - (wanted - count);

      while (*--ioend > ' ');

      ioend++;

      ioptr=inputbuffer;

      }



      inline void non_whitespace(){

      for(;;){

      if(ioptr>=ioend)

      init_input();

      if(*ioptr>' ')

      return;

      ioptr++;

      }

      }



      void flush_output(){

      fwrite(outputbuffer,1,outptr-outputbuffer,stdout);

      outptr=outputbuffer;

      }



      inline void check_output(){

      if(outptr>=outputbuffer+BUFSIZE)

      flush_output();

      }



      inline int getint(){

      non_whitespace();

      int neg=0;

      if(*ioptr=='-'){

      ioptr++;

      neg=1;

      }

      int n=0;

      while(*ioptr>' ')

      n=(n<<3)+(n<<1)+*ioptr++-'0';

      ioptr++;

      if(neg)

      n=-n;

      return n;

      }





      inline void putint(int n){

      char buffer[12];

      int i=0,n2;

      do{

      n2=n/10;

      buffer[i++]=n-(n2<<3)-(n2<<1)+'0';

      }while(n=n2);

      while(i)

      putchar(buffer[--i]);

      check_output();

      }

      inline void putstr(char *str){

      int i=0;

      while(str[i]){putchar(str[i]);i++;}

      check_output();

      return;

      }





      int n,k,N,n1;

      int arr[901][901];

      LL row[1000][20],col[1000][20],grid[1000][20],max1,rowCnt[1000],colCnt[1000];

      PI rowC[1000],colC[1000];



      void update(int x,int y,int val){

      val--;

      int c=val/60,v=val%60;

      row[x][c]|=(1LL<<v);

      col[y][c]|=(1LL<<v);

      grid[(x/n1)*n1+(y/n1)][c]|=(1LL<<v);

      return;

      }



      int firstZero(LL x){

      int cnt=0;

      while(x){

      if(!(x&1))return cnt;

      cnt++;x/=2;

      }

      return cnt;

      }



      int getOption(int x,int y,int overlap){

      int gr = (x/n1)*n1+(y/n1);

      if(overlap==3){

      REP(i,n){

      LL tmp=(row[x][i])|(col[y][i])|(grid[gr][i]);

      if(tmp==max1)continue;

      int cal = firstZero(tmp);

      if(60*i+cal>=N)return 0;

      return 60*i+cal+1;

      }

      }

      else if(overlap==2){

      REP(i,n){

      LL tmp1=row[x][i]|col[y][i],tmp2=row[x][i]|grid[gr][i],tmp3=col[y][i]|grid[gr][i];

      if(tmp1==max1 && tmp2==max1 && tmp3==max1)continue;

      LL tmp=min(tmp1,min(tmp2,tmp3));

      int cal = firstZero(tmp);

      if(60*i+cal>=N)return 0;

      return 60*i+cal+1;

      }

      }

      else if(overlap==1){

      REP(i,n){

      LL tmp1=row[x][i],tmp2=col[y][i],tmp3=grid[gr][i];

      if(tmp1==max1 && tmp2==max1 && tmp3==max1)continue;

      LL tmp;

      if(tmp1!=max1)tmp=tmp1;

      else if(tmp2!=max1)tmp=tmp2;

      else if(tmp3!=max1)tmp=tmp3;

      int cal = firstZero(tmp);

      if(60*i+cal>=N)return 0;

      return 60*i+cal+1;

      }

      }

      return 0;

      }



      int main(){

      max1=(1LL<<60)-1;

      init_input();

      n=getint();k=getint();

      N=n*n;

      n1=n;

      n =(int)ceil(N/60.0);

      REP(i,k){

      int x,y,val;

      x=getint();y=getint();

      val=getint();

      x--;y--;

      arr[x][y]=val;

      update(x,y,val);

      }

      int lim=N*N,sz=lim;

      int p[lim+1];

      REP(i,lim)p[i]=i;

      REP(level,3){

      sz = lim;

      REP(times,lim){

      int index = rand()%sz;

      int x=p[index]/N,y=p[index]%N;

      swap(p[index],p[sz-1]);

      sz--;

      if(!arr[x][y]){

      int tmp = getOption(x,y,3-level);

      arr[x][y]=tmp;

      if(tmp)update(x,y,tmp);

      }

      }

      }

      REP(x,N){

      REP(y,N){

      putint(arr[x][y]);putchar(' ');

      }

      putchar('\n');

      }

      flush_output();

      return 0;

      }
