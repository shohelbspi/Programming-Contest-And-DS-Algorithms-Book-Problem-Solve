from regex import R


n = int(input("Enter Your N: "))
temp = n
sum = 0

while(temp !=0):
    r = temp%10
    sum = sum*10+r
    temp = temp//10

if n==sum:
    print("Number is Pallindrome")
else:
     print("Number is No Pallindrome")