list1 = [1,3,1,1,4,5,89,0,0,3,4,7]
d = {}
for i in list1 :
    if i not in d :
        d[i]=1
    else :
        d[i]= d[i]+1
print('List = ',list1)
print('Frequency = ',d)
