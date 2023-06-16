std :: vector primes_under (int n ) {
    std::vector<bool> isPrime(n + 1, true);
    std :: vector <int> primes ;
    for (int p =2 ; p * p< (n) ; p ++ )
       if (isPrime[p]) {
            // If p is prime, mark all multiples of p as non-prime
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
       }
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }
    return primes;
}
