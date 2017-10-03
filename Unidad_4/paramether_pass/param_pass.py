
def funcion(a):
    a = a + 1
    return a

def funcionList(l):
    l.append(3)
    return l

a,b = 0,0
b = funcion(a)

print a, b

#print id(a), id(b)

l = []
m = []
l.append(1)
l.append(2)
m.append(0)

m = funcionList(l)

#print id(l), id(m)
m.append(4)
print l, m
