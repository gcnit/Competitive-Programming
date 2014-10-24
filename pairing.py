t=int(input())
while t>0:
    x=0
    n,m=input().split(" ")
    n=int(n)
    m=int(m)
    j=0
    a=[]
    b=[]
    c=[]
    while j<m:
        A,B=map(int,input().split(" "))
        a.append(A)
        b.append(B)
        j+=1
    c.append(m-1)
    l=1
    j=m-2
    while j>=0:
        q=0
        k=0
        j-=1
        while k<l:
            if(a[j]==a[c[k]] or a[j]==b[c[k]] or b[j]==a[c[k]] or b[j]==b[c[k]]):
                q=-1
                break
            k+=1
        if(q==0):
            c.append(j)
            l+=1
    c=reversed(c)
    for item in c:
        print(item,end=" ")
    print("")
    t-=1
