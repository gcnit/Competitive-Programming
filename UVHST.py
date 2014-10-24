t=int(input())
while t>0:
    n,c=map(int,input().split(" "))
    if n//c==0:
        print(n//c)
    else:
        print(n//c-1)
    t=t-1
