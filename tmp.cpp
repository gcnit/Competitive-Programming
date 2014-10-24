#include<bits/stdc++.h>
using namespace std;int main()
{
int n,m,k,l[100],i,j,q,countj,counti,tmp,tmp1,mini,flag;
scanf("%d %d %d",&n,&m,&k);
int x[k],y[k],a[100][n+10][m+10],ans[100][(n+1)*(m+1)+10][3];
for(i=0;i<=n;i++)
for(j=0;j<=m;j++)
a[0][i][j]=0;

for(i=0;i<k;i++)
{
scanf("%d %d",&x[i],&y[i]);
a[0][x[i]-1][y[i]-1]=1;
}
for(q=1;q<=100;q++)
for(i=0;i<=n;i++)
for(j=0;j<=m;j++)
a[q][i][j]=a[0][i][j];

for(q=0;q<=100;q++) l[q]=0;

for(i=0;i<n;i++)
for(j=0;j<m;j++)
if(a[0][i][j]==0)
{
ans[0][l[0]][0]=i+1;
ans[0][l[0]][1]=j+1;
ans[0][l[0]++][2]=0;
while(a[0][i][j]!=1 && j<m)
a[0][i][j++]=1;
}

for(i=0;i<n;i++)
for(j=0;j<m;j++)
if(a[1][i][j]==0)
{
ans[1][l[1]][0]=i+1;
ans[1][l[1]][1]=j+1;
countj=0;
tmp=j;
while(a[1][i][tmp]!=1 && tmp<m)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[1][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[1][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[1][l[1]++][2]=0;
while(a[1][i][j]!=1 && j<m)
a[1][i][j++]=1;
}
else
{
ans[1][l[1]++][2]=1;
tmp1=i;
while(a[1][tmp1][j]!=1 && tmp1<n)
a[1][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[1][tmp1][j]!=1 && tmp1>=0)
a[1][tmp1--][j]=1;
}
}

for(i=n-1;i>=0;i--)
for(j=m-1;j>=0;j--)
if(a[2][i][j]==0)
{
ans[2][l[2]][0]=i+1;
ans[2][l[2]][1]=j+1;
countj=0;
tmp=j;
while(a[2][i][tmp]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[2][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[2][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[2][l[2]++][2]=0;
while(a[2][i][j]!=1 && j>=0)
a[2][i][j--]=1;
}
else
{
ans[2][l[2]++][2]=1;
tmp1=i;
while(a[2][tmp1][j]!=1 && tmp1<n)
a[2][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[2][tmp1][j]!=1 && tmp1>=0)
a[2][tmp1--][j]=1;
}
}

for(i=0;i<n;i++)
for(j=m-1;j>=0;j--)
if(a[3][i][j]==0)
{
ans[3][l[3]][0]=i+1;
ans[3][l[3]][1]=j+1;countj=0;
tmp=j;
while(a[3][i][tmp]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[3][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[3][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[3][l[3]++][2]=0;
while(a[3][i][j]!=1 && j>=0)
a[3][i][j--]=1;
}
else
{
ans[3][l[3]++][2]=1;
tmp1=i;
while(a[3][tmp1][j]!=1 && tmp1<n)
a[3][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[3][tmp1][j]!=1 && tmp1>=0)
a[3][tmp1++][j]=1;
}
}

for(i=n-1;i>=0;i--)
for(j=0;j<m;j++)
if(a[4][i][j]==0)
{
ans[4][l[4]][0]=i+1;
ans[4][l[4]][1]=j+1;
countj=0;
tmp=j;
while(a[4][i][tmp]!=1 && tmp<m)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[4][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[4][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[4][l[4]++][2]=0;
while(a[4][i][j]!=1 && j<m)
a[4][i][j++]=1;
}
else
{
ans[4][l[4]++][2]=1;
tmp1=i;
while(a[4][tmp1][j]!=1 && tmp1<n)
a[4][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[4][tmp1][j]!=1 && tmp1>=0)
a[4][tmp1--][j]=1;
}
}


for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(a[5][j][i]==0)
{
ans[5][l[5]][0]=j+1;
ans[5][l[5]][1]=i+1;countj=0;
tmp=j;
while(a[5][tmp][i]!=1 && tmp<n)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[5][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[5][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[5][l[5]++][2]=1;
while(a[5][j][i]!=1 && j<n)
a[5][j++][i]=1;
}
else
{
ans[5][l[5]++][2]=0;
tmp1=i;
while(a[5][j][tmp1]!=1 && tmp1<m)
a[5][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[5][j][tmp1]!=1 && tmp1>=0)
a[5][j][tmp1--]=1;
}
}


for(i=m-1;i>=0;i--)
for(j=n-1;j>=0;j--)
if(a[6][j][i]==0)
{
ans[6][l[6]][0]=j+1;
ans[6][l[6]][1]=i+1;countj=0;
tmp=j;
while(a[6][tmp][i]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[6][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[6][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[6][l[6]++][2]=1;
while(a[6][j][i]!=1 && j>=0)
a[6][j--][i]=1;
}
else
{
ans[6][l[6]++][2]=0;
tmp1=i;
while(a[6][j][tmp1]!=1 && tmp1<m)
a[6][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[6][j][tmp1]!=1 && tmp1>=0)
a[6][j][tmp1--]=1;
}
}


for(i=0;i<m;i++)
for(j=n-1;j>=0;j--)
if(a[7][j][i]==0)
{
ans[7][l[7]][0]=j+1;
ans[7][l[7]][1]=i+1;countj=0;
tmp=j;
while(a[7][tmp][i]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[7][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[7][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[7][l[7]++][2]=1;
while(a[7][j][i]!=1 && j>=0)
a[7][j--][i]=1;
}
else
{
ans[7][l[7]++][2]=0;
tmp1=i;
while(a[7][j][tmp1]!=1 && tmp1<m)
a[7][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[7][j][tmp1]!=1 && tmp1>=0)
a[7][j][tmp1--]=1;
}
}

for(i=m-1;i>=0;i--)
for(j=0;j<n;j++)
if(a[8][j][i]==0)
{
ans[8][l[8]][0]=j+1;
ans[8][l[8]][1]=i+1;countj=0;
tmp=j;
while(a[8][tmp][i]!=1 && tmp<n)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[8][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[8][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[8][l[8]++][2]=1;
while(a[8][j][i]!=1 && j<n)
{
a[8][j++][i]=1;
}
}
else
{
ans[8][l[8]++][2]=0;
tmp1=i;
while(a[8][j][tmp1]!=1 && tmp1<m)
a[8][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[8][j][tmp1]!=1 && tmp1>=0)
a[8][j][tmp1--]=1;
}
}

for(j=0;j<m;j++)
for(i=0;i<n;i++)
if(a[9][i][j]==0)
{
ans[9][l[9]][0]=i+1;
ans[9][l[9]][1]=j+1;
ans[9][l[9]++][2]=1;
while(a[9][i][j]!=1 && i<n)
a[9][i++][j]=1;
}

for(i=0;i<n;i++)
for(j=0;j<m;j++)
if(a[10][i][j]==0)
{
ans[10][l[10]][0]=i+1;
ans[10][l[10]][1]=j+1;countj=0;
tmp=j;
while(a[10][i][tmp]!=1 && tmp<m)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[10][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[10][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[10][l[10]++][2]=0;
while(a[10][i][j]!=1 && j<m)
a[10][i][j++]=1;
}
else
{
ans[10][l[10]++][2]=1;
tmp1=i;
while(a[10][tmp1][j]!=1 && tmp1<n)
a[10][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[10][tmp1][j]!=1 && tmp1>=0)
a[10][tmp1][j]=1;
}
}

for(i=n-1;i>=0;i--)
for(j=m-1;j>=0;j--)
if(a[11][i][j]==0)
{
ans[11][l[11]][0]=i+1;
ans[11][l[11]][1]=j+1;countj=0;
tmp=j;
while(a[11][i][tmp]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[11][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[11][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[11][l[11]++][2]=0;
while(a[11][i][j]!=1 && j>=0)
a[11][i][j--]=1;
}
else
{
ans[11][l[11]++][2]=1;
tmp1=i;
while(a[11][tmp1][j]!=1 && tmp1<n)
a[11][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[11][tmp1][j]!=1 && tmp1>=0)
a[11][tmp1--][j]=1;
}
}

for(i=0;i<n;i++)
for(j=m-1;j>=0;j--)
if(a[12][i][j]==0)
{
ans[12][l[12]][0]=i+1;
ans[12][l[12]][1]=j+1;countj=0;
tmp=j;
while(a[12][i][tmp]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[12][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[12][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[12][l[12]++][2]=0;
while(a[12][i][j]!=1 && j>=0)
a[12][i][j--]=1;
}
else
{
ans[12][l[12]++][2]=1;
tmp1=i;
while(a[12][tmp1][j]!=1 && tmp1<n)
a[12][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[12][tmp1][j]!=1 && tmp1>=0)
a[12][tmp1--][j]=1;
}
}

for(i=n-1;i>=0;i--)
for(j=0;j<m;j++)
if(a[13][i][j]==0)
{
ans[13][l[13]][0]=i+1;
ans[13][l[13]][1]=j+1;countj=0;
tmp=j;
while(a[13][i][tmp]!=1 && tmp<m)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[13][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[13][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[13][l[13]++][2]=0;
while(a[13][i][j]!=1 && j<m)
a[13][i][j++]=1;
}
else
{
ans[13][l[13]++][2]=1;
tmp1=i;
while(a[13][tmp1][j]!=1 && tmp1<n)
a[13][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[13][tmp1][j]!=1 && tmp1>=0)
a[13][tmp1--][j]=1;
}
}

for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(a[14][j][i]==0)
{
ans[14][l[14]][0]=j+1;
ans[14][l[14]][1]=i+1;
countj=0;
tmp=j;
while(a[14][tmp][i]!=1 && tmp<n)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[14][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[14][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[14][l[14]++][2]=1;
while(a[14][j][i]!=1 && j<n)
a[14][j++][i]=1;
}
else
{
ans[14][l[14]++][2]=0;
tmp1=i;
while(a[14][j][tmp1]!=1 && tmp1<m)
a[14][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[14][j][tmp1]!=1 && tmp1>=0)
a[14][j][tmp1--]=1;
}
}

for(i=m-1;i>=0;i--)
for(j=n-1;j>=0;j--)
if(a[15][j][i]==0)
{
ans[15][l[15]][0]=j+1;
ans[15][l[15]][1]=i+1;
countj=0;
tmp=j;
while(a[15][tmp][i]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[15][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[15][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[15][l[15]++][2]=1;
while(a[15][j][i]!=1 && j>=0)
a[15][j--][i]=1;
}
else
{
ans[15][l[15]++][2]=0;
tmp1=i;
while(a[15][j][tmp1]!=1 && tmp1<m)
a[15][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[15][j][tmp1]!=1 && tmp1>=0)
a[15][j][tmp1--]=1;
}
}

for(i=0;i<m;i++)
for(j=n-1;j>=0;j--)
if(a[16][j][i]==0)
{
ans[16][l[16]][0]=j+1;
ans[16][l[16]][1]=i+1;
countj=0;
tmp=j;
while(a[16][tmp][i]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[16][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[16][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[16][l[16]++][2]=1;
while(a[16][j][i]!=1 && j>=0)
a[16][j--][i]=1;
}
else
{
ans[16][l[16]++][2]=0;
tmp1=i;
while(a[16][j][tmp1]!=1 && tmp1<m)
a[16][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[16][j][tmp1]!=1 && tmp1>=0)
a[16][j][tmp1]=1;
}
}

for(i=m-1;i>=0;i--)
for(j=0;j<n;j++)
if(a[17][j][i]==0)
{
ans[17][l[17]][0]=j+1;
ans[17][l[17]][1]=i+1;
countj=0;
tmp=j;
while(a[17][tmp][i]!=1 && tmp<n)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[17][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[17][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[17][l[17]++][2]=1;
while(a[17][j][i]!=1 && j<n)
a[17][j++][i]=1;
}
else
{
ans[17][l[17]++][2]=0;
tmp1=i;
while(a[17][j][tmp1]!=1 && tmp1<m)
a[17][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[17][j][tmp1]!=1 && tmp1>=0)
a[17][j][tmp1--]=1;
}
}

for(i=0;i<n;i++)
if(i%2==0)
{
for(j=0;j<m;j++)
if(a[18][i][j]==0)
{
ans[18][l[18]][0]=i+1;
ans[18][l[18]][1]=j+1;
countj=0;
tmp=j;
while(a[18][i][tmp]!=1 && tmp<m)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[18][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[18][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[18][l[18]++][2]=0;
while(a[18][i][j]!=1 && j<m)
a[18][i][j++]=1;
}
else
{
ans[18][l[18]++][2]=1;
tmp1=i;
while(a[18][tmp1][j]!=1 && tmp1<n)
a[18][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[18][tmp1][j]!=1 && tmp1>=0)
a[18][tmp1--][j]=1;
}
}
}
else
{
for(j=m-1;j>=0;j--)
if(a[18][i][j]==0)
{
ans[18][l[18]][0]=i+1;
ans[18][l[18]][1]=j+1;
countj=0;
tmp=j;
while(a[18][i][tmp]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[18][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[18][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[18][l[18]++][2]=0;
while(a[18][i][j]!=1 && j>=0)
a[18][i][j--]=1;
}
else
{
ans[18][l[18]++][2]=1;
tmp1=i;
while(a[18][tmp1][j]!=1 && tmp1<n)
a[18][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[18][tmp1][j]!=1 && tmp1>=0)
a[18][tmp1--][j]=1;
}
}
}

for(i=n-1;i>=0;i--)
if(i%2==0)
{
for(j=m-1;j>=0;j--)
if(a[19][i][j]==0)
{
ans[19][l[19]][0]=i+1;
ans[19][l[19]][1]=j+1;
countj=0;
tmp=j;
while(a[19][i][tmp]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[19][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[19][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[19][l[19]++][2]=0;
while(a[19][i][j]!=1 && j>=0)
a[19][i][j--]=1;
}
else
{
ans[19][l[19]++][2]=1;
tmp1=i;
while(a[19][tmp1][j]!=1 && tmp1<n)
a[19][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[19][tmp1][j]!=1 && tmp1>=0)
a[19][tmp1--][j]=1;
}
}
}
else
{
for(j=0;j<m;j++)
if(a[19][i][j]==0)
{
ans[19][l[19]][0]=i+1;
ans[19][l[19]][1]=j+1;
countj=0;
tmp=j;
while(a[19][i][tmp]!=1 && tmp<m)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[19][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[19][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[19][l[19]++][2]=0;
while(a[19][i][j]!=1 && j<m)
a[19][i][j++]=1;
}
else
{
ans[19][l[19]++][2]=1;
tmp1=i;
while(a[19][tmp1][j]!=1 && tmp1<n)
a[19][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[19][tmp1][j]!=1 && tmp1>=0)
a[19][tmp1--][j]=1;
}
}
}

for(i=0;i<m;i++)
if(i%2==0)
{
for(j=0;j<n;j++)
if(a[20][j][i]==0)
{
ans[20][l[20]][0]=j+1;
ans[20][l[20]][1]=i+1;
countj=0;
tmp=j;
while(a[20][tmp][i]!=1 && tmp<n)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[20][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[20][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[20][l[20]++][2]=1;
while(a[20][j][i]!=1 && j<n)
a[20][j++][i]=1;
}
else
{
ans[20][l[20]++][2]=0;
tmp1=i;
while(a[20][j][tmp1]!=1 && tmp1<m)
a[20][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[20][j][tmp1]!=1 && tmp1>=0)
a[20][j][tmp1--]=1;
}
}
}
else
{
for(j=n-1;j>=0;j--)
if(a[20][j][i]==0)
{
ans[20][l[20]][0]=j+1;
ans[20][l[20]][1]=i+1;
countj=0;
tmp=j;
while(a[20][tmp][i]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[20][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[20][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[20][l[20]++][2]=1;
while(a[20][j][i]!=1 && j>=0)
a[20][j--][i]=1;
}
else
{
ans[20][l[20]++][2]=0;
tmp1=i;
while(a[20][j][tmp1]!=1 && tmp1<m)
a[20][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[20][j][tmp1]!=1 && tmp1>=0)
a[20][j][tmp1--]=1;
}
}
}

for(i=m-1;i>=0;i--)
if(i%2==0)
{
for(j=n-1;j>=0;j--)
if(a[21][j][i]==0)
{
ans[21][l[21]][0]=j+1;
ans[21][l[21]][1]=i+1;
countj=0;
tmp=j;
while(a[21][tmp][i]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[21][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[21][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[21][l[21]++][2]=1;
while(a[21][j][i]!=1 && j>=0)
a[21][j--][i]=1;
}
else
{
ans[21][l[21]++][2]=0;
tmp1=i;
while(a[21][j][tmp1]!=1 && tmp1<m)
a[21][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[21][j][tmp1]!=1 && tmp1>=0)
a[21][j][tmp1--]=1;
}
}
}
else
{
for(j=0;j<n;j++)
if(a[21][j][i]==0)
{
ans[21][l[21]][0]=j+1;
ans[21][l[21]][1]=i+1;
countj=0;
tmp=j;
while(a[21][tmp][i]!=1 && tmp<n)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[21][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[21][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>counti)
{
ans[21][l[21]++][2]=1;
while(a[21][j][i]!=1 && j<n)
a[21][j++][i]=1;
}
else
{
ans[21][l[21]++][2]=0;
tmp1=i;
while(a[21][j][tmp1]!=1 && tmp1<m)
a[21][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[21][j][tmp1]!=1 && tmp1>=0)
a[21][j][tmp1--]=1;
}
}
}

for(i=0;i<n;i++)
if(i%2==0)
{
for(j=0;j<m;j++)
if(a[22][i][j]==0)
{
ans[22][l[22]][0]=i+1;
ans[22][l[22]][1]=j+1;
countj=0;
tmp=j;
while(a[22][i][tmp]!=1 && tmp<m)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[22][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[22][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[22][l[22]++][2]=0;
while(a[22][i][j]!=1 && j<m)
a[22][i][j++]=1;
}
else
{
ans[22][l[22]++][2]=1;
tmp1=i;
while(a[22][tmp1][j]!=1 && tmp1<n)
a[22][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[22][tmp1][j]!=1 && tmp1>=0)
a[22][tmp1--][j]=1;
}
}
}
else
{
for(j=m-1;j>=0;j--)
if(a[22][i][j]==0)
{
ans[22][l[22]][0]=i+1;
ans[22][l[22]][1]=j+1;
countj=0;
tmp=j;
while(a[22][i][tmp]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[22][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[22][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[22][l[22]++][2]=0;
while(a[22][i][j]!=1 && j>=0)
a[22][i][j--]=1;
}
else
{
ans[22][l[22]++][2]=1;
tmp1=i;
while(a[22][tmp1][j]!=1 && tmp1<n)
a[22][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[22][tmp1][j]!=1 && tmp1>=0)
a[22][tmp1--][j]=1;
}
}
}

for(i=n-1;i>=0;i--)
if(i%2==0)
{
for(j=m-1;j>=0;j--)
if(a[23][i][j]==0)
{
ans[23][l[23]][0]=i+1;
ans[23][l[23]][1]=j+1;
countj=0;
tmp=j;
while(a[23][i][tmp]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[23][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[23][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[23][l[23]++][2]=0;
while(a[23][i][j]!=1 && j>=0)
a[23][i][j--]=1;
}
else
{
ans[23][l[23]++][2]=1;
tmp1=i;
while(a[23][tmp1][j]!=1 && tmp1<n)
a[23][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[23][tmp1][j]!=1 && tmp1>=0)
a[23][tmp1--][j]=1;
}
}
}
else
{
for(j=0;j<m;j++)
if(a[23][i][j]==0)
{
ans[23][l[23]][0]=i+1;
ans[23][l[23]][1]=j+1;
countj=0;
tmp=j;
while(a[23][i][tmp]!=1 && tmp<m)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[23][tmp1][j]!=1 && tmp1<n)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[23][tmp1][j]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[23][l[23]++][2]=0;
while(a[23][i][j]!=1 && j<m)
a[23][i][j++]=1;
}
else
{
ans[23][l[23]++][2]=1;
tmp1=i;
while(a[23][tmp1][j]!=1 && tmp1<n)
a[23][tmp1++][j]=1;
if(i>=0)
tmp1=i-1;
while(a[23][tmp1][j]!=1 && tmp1>=0)
a[23][tmp1--][j]=1;
}
}
}

for(i=0;i<m;i++)
if(i%2==0)
{
for(j=0;j<n;j++)
if(a[24][j][i]==0)
{
ans[24][l[24]][0]=j+1;
ans[24][l[24]][1]=i+1;
countj=0;
tmp=j;
while(a[24][tmp][i]!=1 && tmp<n)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[24][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[24][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[24][l[24]++][2]=1;
while(a[24][j][i]!=1 && j<n)
a[24][j++][i]=1;
}
else
{
ans[24][l[24]++][2]=0;
tmp1=i;
while(a[24][j][tmp1]!=1 && tmp1<m)
a[24][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[24][j][tmp1]!=1 && tmp1>=0)
a[24][j][tmp1--]=1;
}
}
}
else
{
for(j=n-1;j>=0;j--)
if(a[24][j][i]==0)
{
ans[24][l[24]][0]=j+1;
ans[24][l[24]][1]=i+1;
countj=0;
tmp=j;
while(a[24][tmp][i]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[24][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[24][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[24][l[24]++][2]=1;
while(a[24][j][i]!=1 && j>=0)
a[24][j--][i]=1;
}
else
{
ans[24][l[24]++][2]=0;
tmp1=i;
while(a[24][j][tmp1]!=1 && tmp1<m)
a[24][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[24][j][tmp1]!=1 && tmp1>=0)
a[24][j][tmp1--]=1;
}
}
}

for(i=m-1;i>=0;i--)
if(i%2==0)
{
for(j=n-1;j>=0;j--)
if(a[25][j][i]==0)
{
ans[25][l[25]][0]=j+1;
ans[25][l[25]][1]=i+1;
countj=0;
tmp=j;
while(a[25][tmp][i]!=1 && tmp>=0)
{
tmp--;
countj++;
}
counti=0;
tmp1=i;
while(a[25][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[25][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[25][l[25]++][2]=1;
while(a[25][j][i]!=1 && j>=0)
a[25][j--][i]=1;
}
else
{
ans[25][l[25]++][2]=0;
tmp1=i;
while(a[25][j][tmp1]!=1 && tmp1<m)
a[25][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[25][j][tmp1]!=1 && tmp1>=0)
a[25][j][tmp1--]=1;
}
}
}
else
{
for(j=0;j<n;j++)
if(a[25][j][i]==0)
{
ans[25][l[25]][0]=j+1;
ans[25][l[25]][1]=i+1;
countj=0;
tmp=j;
while(a[25][tmp][i]!=1 && tmp<n)
{
tmp++;
countj++;
}
counti=0;
tmp1=i;
while(a[25][j][tmp1]!=1 && tmp1<m)
{
tmp1++;
counti++;
}
if(i>=0)
tmp1=i-1;
while(a[25][j][tmp1]!=1 && tmp1>=0)
{
tmp1--;
counti++;
}
if(countj>=counti)
{
ans[25][l[25]++][2]=1;
while(a[25][j][i]!=1 && j<n)
a[25][j++][i]=1;
}
else
{
ans[25][l[25]++][2]=0;
tmp1=i;
while(a[25][j][tmp1]!=1 && tmp1<m)
a[25][j][tmp1++]=1;
if(i>=0)
tmp1=i-1;
while(a[25][j][tmp1]!=1 && tmp1>=0)
a[25][j][tmp1--]=1;
}
}
}

mini=l[0];
for(i=1;i<26;i++)
mini=min(mini,l[i]);
for(i=0;i<26;i++)
    printf("%d %d\n",i,l[i]);
for(q=0;q<26;q++)
if(l[q]==mini)
{
printf("%d\n",l[q]);
for(i=0;i<l[q];i++)
printf("%d %d %d\n",ans[q][i][0],ans[q][i][1],ans[q][i][2]);
break;
}
return 0;
}
