import string
import random
list1 = []
length = int(input('Enter Length : '))

x = string.ascii_lowercase
for i in range(len(x)):
    list1.append(x[i])

y = string.ascii_uppercase
for i in range(len(x)):
    list1.append(y[i])

list2 = random.choices(list1,k=length)

print('The generated list is : ',end="")
for i in list2 :
    print(i,end="")


