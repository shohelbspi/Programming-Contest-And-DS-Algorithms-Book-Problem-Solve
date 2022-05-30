n = int(input())
if n > 0:
    print(int(n*(n+1)/2))
elif n == 0:
    print('1')
else:
    print(int(n*(n-1)/-2 + 1))
