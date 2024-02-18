def isPrime(x):
    if x <= 1: return False

    for i in range(2, x):
        if(x % i == 0): return False
    
    return True

def nextPrime(x):
    while True:
        x += 1
        if isPrime(x): return x 



def main():
    print(isPrime(5))
    print(isPrime(9))
    print(isPrime(10))
    print(isPrime(11))
    print(isPrime(121))

    print(nextPrime(1))
    print(nextPrime(10))
    print(nextPrime(17))
    print(nextPrime(100))
    print(nextPrime(0))

if __name__ == "__main__":
    main()