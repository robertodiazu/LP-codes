def make_adder(x):
    def adder(y):
        return x+y
    
    return adder

def retornador(d):
    def sumarUno(a):
        return a+1

    def restarUno(a):
        return a-1

    if d == True:
        return sumarUno
    else:
        return restarUno
