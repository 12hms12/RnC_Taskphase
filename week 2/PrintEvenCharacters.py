list1 = []
n = int(input('Enter Number of Elements : ')) # Inputting the size of list

for i in range(0,n):
    ele = int(input("Enter Number : "))
    list1.append(ele)

n = 0
evenIndex = list1[n ::n+2]
print(evenIndex)

