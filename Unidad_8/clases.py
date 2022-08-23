
class A:
    def __init__(self):
        print("Constructor de A")
        self.a = 5
        self.b = 10

    def func(self):
        print("func()",self.b)

class B(A):
    def __init__(self):
        A.__init__(self)
        print("Constructor de B")
        self.b = 9
        self.c = 5


a = A()

b = B()

print(a.a, a.b)
print(b.b, b.c)

b.func()