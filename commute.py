T=int(input())
while T>0:
    n=int(input())
    j=0
    x=[]
    t=[]
    d=[]
    while j<n:
        a,b,c=map(int,input().split(" "))
        x.append(a),t.append(b),d.append(c)
        j+=1
    time=0
    i=0
    while i<n:
        if(time-x[i]<=0):
            time=x[i]+t[i]
        elif((time-x[i])%d[i]==0):
            time=x[i]+((time-x[i])//d[i])*d[i]+t[i]
        elif((time-x[i])%d[i]!=0):
            time=x[i]+((time-x[i])//d[i])*d[i]+t[i]+d[i]
        i+=1
    print(time)
    T-=1
