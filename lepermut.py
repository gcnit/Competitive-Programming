t=int(input())
while t>0:
    inv=0
    linv=0
    n=int(input())
    i=0
    A=list(map(int,input().split(" ")))
    while i<n-1:
        j=i+1
        while j<n:
            if(A[i]>A[j]):
                inv+=1
            j+=1
        i+=1
    i=0
    while i<n-1:
        if(A[i]>A[i+1]):
            linv+=1
        i+=1
    if(inv==linv):
        print("YES")
    else:
        print("NO")
    t-=1
