t=int(input())
while t>0:
    x=1
    n=int(input())
    while n>0:
        a,b=map(int,input().split(" "))
        if(a==x):
            x=b
        elif(b==x):
            x=a
        n=n-1
    print(x)
    t=t-1
