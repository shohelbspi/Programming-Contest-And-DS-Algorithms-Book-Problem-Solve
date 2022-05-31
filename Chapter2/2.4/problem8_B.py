from traceback import print_tb


n = int(input())

for row in range(n,0,-1):
    print()
    for col in range(0, row):
        print("*", end=" ")