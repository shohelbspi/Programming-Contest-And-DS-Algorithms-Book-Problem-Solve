T = int(input())

for i in range(T):
    n = int(input())
    if n>10:
        print(f'10 {n-10}')
    else:
        print(f'0 {n}')