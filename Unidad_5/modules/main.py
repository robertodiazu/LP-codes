
from file1 import *
from file2 import estaFuncionExisteSoloParaElEjemplo

def main():
    hacerAlgunaCosa(3)
    hacerOtraCosa(3.0)
    a = estaFuncionExisteSoloParaElEjemplo(3,3.0)
    print("a", a)


if __name__ == "__main__":
    main()