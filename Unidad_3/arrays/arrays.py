
# una lista, no un arreglo
a = [0,1,2,3,4,5]
print(a, type(a))

b = [0,0.5,"asda"]
print(b, type(b))

import array as arr
# arreglo dinamico de heap
b = arr.array('i',[0,1,2,3,4,5])

print(b, len(b), type(b))

# puede variar su tamaño
b.insert(2,12345)
print(b, len(b), type(b))