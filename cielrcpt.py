t=int(input())
while t>0:
    count=0
    p=int(input())
    k=0
    while p>pow(2,k) and k<11:
        k=k+1
    while k>=0:
        q=p//pow(2,k)
        p=p%pow(2,k)
        count+=q
        k=k-1
    print(count)
    t=t-1
