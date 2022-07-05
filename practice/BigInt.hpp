#pragma once 

struct BigInt {
    BigInt(long long p) : m(p) {}
    const BigInt& operator+=(const BigInt &right) { this->m += right.m; return *this;}
    long long Get() const { return m; }

    long long m;
};
