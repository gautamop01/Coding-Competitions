# Enter your code here. Read input from STDIN. Print output to STDOUT
def minimum_operations(n, m):
    count = 0
    while n != m:
        if m > n and m % 2 == 0:
            m = m // 2
        else:
            m += 1
        count += 1
    return count

n, m = map(int, input().split())

result = minimum_operations(n, m)

print(result)
