x = int(input("Provide a positive integer between 1 and 8:"))
if x < 1 or x > 8:
    print("Invalid Integer")
    exit()
for i in range(x+1):
    for j in range(i):
        print("#", end="")
    print()   