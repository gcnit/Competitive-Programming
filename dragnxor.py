t=int(input())
while t>0:
    n,a,b=input().split(" ")
    a=int(a)
    b=int(b)
    n=int(n)
    a=bin(a)[2:]
    b=bin(b)[2:]
    count1=0
    count2=0
    i=0
    while i<len(a):
        if a[i]=='1':
            count1+=1
        i+=1
    i=0
    while i<len(b):
        if b[i]=='1':
            count2+=1
        i+=1
    i=0
    xor=0
    x=count1+count2-n
    if(x>=0):
       while i<(n-x):
           xor+=pow(2,n-1-i)
           i=i+1
    else:
        while i<n+x:
            xor+=pow(2,n-1-i)
            i=i+1
    print(xor)
    t-=1
