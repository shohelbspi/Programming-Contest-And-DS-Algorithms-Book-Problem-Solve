n = int(input())
j = 1
for row in range(1,n+1):
   
    for k in range(1, n+2-row):
        print(end=' ')
    for col in range(1,j+1):
        print("*", end="")
    j = j+2
    print()

j=n
for row in range(n,0,-1):
   
    for k in range(1,n+n-row):
        print(end=' ')
    for col in range(1,j+1):
        print("*", end="")
    j = j-2
    print()
