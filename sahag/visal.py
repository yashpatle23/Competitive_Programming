n = int(input())
a = [1]*n
for i in range(1, n):
    if (i+1)%2 == 0:
        a[i] = a[i-1] + (2*n) - 2*(i+1) + 2
    else:
        a[i] = a[i-1] + 1
for i in a:
    print(i, end = " ")
    
print("asns ")

for i in range(n):
    for j in range(i+1):
        if (j+1)%2 == 0:
            print(a[j], end = " ")
            a[j] -= 1
        else:
            print(a[j], end = " ")
            a[j] += 1
    print()