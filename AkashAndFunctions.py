for _ in range(int(input())):
    n = int(input())
    c = 0
    l = []
    for i in range(1, n+1):
        l.append(i)
    for i in range(n):
        if l[i] % 2 == 0:
            c += 1
    print(n-c)
