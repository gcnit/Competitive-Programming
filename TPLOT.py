i=0
a=list(map(int,input().split(" ")))
while i<5:
    count=0
    flag=0
    j=0
    b=list(map(int,input().split(" ")))
    while j<6:
        if b[j] in a[0:6]:
            count=count+1
        if b[j]==a[6]:
            flag=1
        j=j+1
    if count==6:
        print("First Parking slot")
    elif count==5:
        if flag==1:
            print("Second Parking slot")
        else:
            print("Third Parking slot")
    elif count==4:
        print("Fourth Parking slot")
    elif count==3:
        print("Fifth Parking slot")
    else:
        print("No Parking slot")
    i=i+1
