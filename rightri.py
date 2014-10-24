T=int(input())
count=0
while T>0:
    a,b,c,d,e,f=map(int,input().split(" "))
    x=(a-c)**2+(b-d)**2
    y=(e-c)**2+(f-d)**2
    z=(a-e)**2+(b-f)**2
    if((x+y-z)==0 or (x+z-y)==0 or (z+y-x)==0):
        count+=1
    T-=1
print(count)
