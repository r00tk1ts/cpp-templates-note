constexpr bool
doIdPrime(unsigned p, unsigned d) {
    return d != 2 ? (p%d!=0) && doIsPrime(p,d-1) : (p%2!=0);
}

constexpr bool isPrime(unsigned p) {
    return p < 4 ? !(p<2) : doIsPrime(p, p/2);
}
