t=int(input())
while t>0:
    x=0
    n,c=input().split(" ")
    n=int(n)
    c=int(c)
    A=list(map(int,input().split(" ")))
    i=0
    while i<n:
        x+=A[i]
        i+=1
    if(x<=c):
        print("Yes")
    else:
        print("No")
    t-=1
