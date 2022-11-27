t = (('x',45),('y',35),('z',67))
list1 = []
for a,b in t :
    list1.append((b,a))
    f = sorted(list1)

print('Tuple :',t)
print('Sorted Tupple : ',tuple(f))

