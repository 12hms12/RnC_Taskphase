lst = []

for i in range(0, 10):
    ele = int(input("Enter Number : "))
    lst.append(ele)

for j in range(len(lst)-1):
    sum = lst[j] + lst [ j+1]
    print('sum',j+1,'= ',sum)
    j=j+1
