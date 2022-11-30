numList = list()

while True :
    inp = input("Enter the Value : ")
    if inp == 'done' :
        break

    value = float(inp)
    numList.append(value)

average = sum(numList) / len(numList)

print("The numbers are : ",numList)
print("Average is : ",average)
