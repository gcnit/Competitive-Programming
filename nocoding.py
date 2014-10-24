t=int(input())
n=t
while t>0:
    a=input()
    sum=(ord(a[0])-n+26)%26
    j=1
    while j<len(a):
        sum+=(ord(a[j])-ord(a[j-1])+26)%26
        j+=1
    print(sum)
    t-=1
