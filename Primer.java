public class Primer {
    public boolean isPrime(int x) {
        if (x <= 1) return false;

        for (int i = 2; i < x; ++i) {
            if (x % i == 0) return false;
        }

        return true;
    }

    public int nextPrime(int x) {
        while(true) {
            x += 1;

            if (isPrime(x)) return x;
        }
    }
}