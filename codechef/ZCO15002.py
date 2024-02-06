n,k=map(int,input().split())
l=[]
l=list(map(int, input().split()))
l.sort()
tatal=0
left,right=0,1
while(right<n):
    if(l[right]-l[left]>=k):
        tatal+= n-right
        left+=1
    else:
        right+=1
print(tatal)


