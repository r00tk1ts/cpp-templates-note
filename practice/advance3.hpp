template<typename Iterator, typename Distance>
void advanceIter(Iterator& x, Distance n) {
    if constexpr(IsrandomAccessIterator<Iterator>) {
        // implementation for random access iterators:
        x += n;     // constant time
    } else if constexpr (IsBidirectionalIterator<Iterator>) {
        // implementation for bidirectional iterators:
        if (n > 0) {
            for( ; n > 0; ++x, --n) {}
        } else {
            for( ; n < 0; --x, ++n) {}
        }
    } else {
        // implementation for all other iterators that are at least input iterators:
        if (n < 0) {
            throw "advanceIter(): invalid iterator category for negative n";
        }
        while (n > 0) { // linear time for positive n only
            ++x;--n;
        }
    }
}
