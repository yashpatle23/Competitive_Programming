n=int(input())
digit=[]
ans=[]
count=0

digit=list(map(int,input().split()))
for j in digit:
    k=j+1
    for k in digit:
        if (digit[j]=="1" and digit[k]=="1"):
            count+=1
    ans.append(count)
print(max(ans))