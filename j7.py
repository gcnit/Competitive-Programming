import math
t=int(input())
while t>0:
    p,s=input().split(" ")
    p=int(p)
    s=int(s)
    c=(p-math.sqrt(p*p-24*s))/12
    v=c*c*(p/4-2*c)
    if(v-math.floor(v)>=0.005):
        print(math.ceil(v*100)/100)
    else:
        print(math.floor(v*100)/100)
    t-=1
