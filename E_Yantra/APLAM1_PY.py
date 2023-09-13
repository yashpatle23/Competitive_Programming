# Import reduce module
from functools import reduce

# Function to generate the A.P. series
def generate_AP(a1, d, n):
    AP_series = [a1 + i * d for i in range(n)]
    return AP_series


if __name__ == '__main__':
    

    test_cases = int(input())
    
    for _ in range(test_cases):
  
        a1, d, n = map(int, input().split())

      
        AP_series = generate_AP(a1, d, n)
        print(" ".join(map(str, AP_series)))

       
        sqr_AP_series = list(map(lambda x: x**2, AP_series))
        print(" ".join(map(str, sqr_AP_series)))

        
        sum_sqr_AP_series = reduce(lambda x, y: x + y, sqr_AP_series)
        print(sum_sqr_AP_series)
