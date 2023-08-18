# cook your dish here
try:
    T = int(input())
    for _ in range(T):
        count=0
        a, b = map(int, input().split())
        while a%3!=0 and b%3!=0:
            a=abs(a-b)
            b=abs(a-b)
            count=count+1
        print(count)
except ValueError:
    print("Invalid input. Please enter valid integers.")