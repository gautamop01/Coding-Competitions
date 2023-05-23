def mod_mul(a, b, m):
    a = a % m
    b = b % m
    return (((a * b) % m) + m) % m


def Runtime_Terror():
    n = int(input())
    s1 = input().strip()
    s2 = input().strip()
    flag = -1
    s1 = list(s1)
    s2 = list(s2)
    
    for i in range(n):
        if s1[i] == s2[i]:
            continue
        if s1[i] > s2[i] and flag == -1:
            flag = 1
        if s1[i] < s2[i] and flag == -1:
            flag = 2
        if s1[i] < s2[i] and flag == 1:
            s1[i], s2[i] = s2[i], s1[i]
        if s1[i] > s2[i] and flag == 2:
            s1[i], s2[i] = s2[i], s1[i]

    a = int("".join(s1))
    b = int("".join(s2))
    print(mod_mul(a, b, 998244353))


if __name__ == "__main__":
    t = 1
    # t = int(input())
    for _ in range(t):
        Runtime_Terror()
