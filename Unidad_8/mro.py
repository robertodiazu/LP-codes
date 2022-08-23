
class O:
    def m(self):
        print("m of 0 called")

class A(O):
    def m(self):
        print("m of A called")

class B(O):
    def m(self):
        print("m of B called")

class C(O):
    def m(self):
        print("m of C called")

class D(O):
    def m(self):
        print("m of D called")

class E(O):
    def m(self):
        print("m of E called")

class K1(A, B, C):
    def m(self):
        print("m of K1 called")

class K2(D, B, E):
    def m(self):
        print("m of K2 called")

class K3(D, A):
    def m(self):
        print("m of K3 called")

class Z(K1, K2, K3):
    def m(self):
        print("m of Z called")
        super().m()

for x in Z.mro():
    print(x)

z = Z()
z.m()
