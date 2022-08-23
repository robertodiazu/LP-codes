def funcion(n):
    try:
        if n == 5:
            return
        arreglo = [2,4,6]
        a=arreglo[n]
        i=a/n
    except ZeroDivisionError:
        arreglo[n] = 0
        print("EDZ")
    except IndexError:
        arreglo.append(-2)
        print("IDE")
    except: 
        print("BLE")
    else:
        arreglo[n]=i
        print("OPC")
    finally:
        for m in arreglo:
            print(m," ",end='')
        print()

funcion(0)
# EDZ
# 0 4 6

funcion(1)
# OPC 
# 2 4 6

funcion(2)
# OPC 
# 2 4 3

funcion(3)
# IDE
# 2 4 6 -2
