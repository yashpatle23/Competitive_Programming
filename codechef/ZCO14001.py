n,m=map(int,input().split())
L=list(map(int,input().split()))
commands=list(map(int,input().split()))

tem=0
have=False
for i in commands:
    if(i==1):
        #move left
        if(tem!=0):
            tem-=1
    elif(i==2):
        #move right
        if(tem!=n-1):
            tem+=1
    elif(i==3):
        #pick up
        if(have==False and L[tem]!=0):
            L[tem]-=1
            have=True
    elif(i==4):
        #drop
        if(have and L[tem]<m):
            L[tem]+=1
            have=False
for i in L:
    print(i, end=" ")