MOD =10**9 + 7


def count_triples(n):
    # initialize dp table
    dp =[[[0 for _ in range (2)] for _ in range(n)] for _ in range(n)]
    # base case
    dp[0][0][0] = 1
    # fill dp table
    for i in range(n):
        for j in range(n):
            for k in range (2):
                if i == 0 and j == 0:
                    continue
                for x in range(i):
                    if (x | i) == i:
                        dp[i][j][k | (j | x == n-1)] += dp[x][j][k]
                        dp[i][j][k | (j | x == n-1)] %= MOD
                for y in range (j):
                    if (y | j) == j:
                        dp[i][j][k | (y | i == n-1)] += dp[i][y][k]
                        dp[i][j][k | (y | i == n-1)] %= MOD
    #sum up all valid triples
    res =0
    for i in range(1, n):
        for j in range(1, n):
            if (i | j) == n-1:
                res += dp[i][j][1]
                res %= MOD
    return res


# main function to take input and call count_triples for each test case

t=int(input())
for _ in range(t):
    n =int(input())
    res= count_triples(n)
    print (res)