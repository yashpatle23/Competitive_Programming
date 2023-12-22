n=int(input())
l=[]
for i in range(n):
    l.append(int(input()))
l.sort()
ans=[]
for i in range(1,n+1):
    ans.append(l[-i]*i)
print(max(ans)) 