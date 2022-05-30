x = int(input("Enter Your X Value:"))
y = int(input("Enter Your Y Value:"))

if x>0 and y>0:
    print("First Quadrant")
elif(x<0 and y>0):
    print("Second Quadrant")
elif(x<0 and y<0):
    print("Third Quadrant")
elif(x>0 and y<0):
    print("Four Quadrant")
