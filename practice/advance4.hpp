template<typename Iterator, typename Tag = BestMatchInSet<
                                                typename std::iterator_traits<Iterator>::iterator_catetory,
                                                std::input_iterator_tag,
                                                std::bidirectional_iterator_tag,
                                                std::random_access_iterator_tag>>
class Advance;

// general, linear-time implementation for input iterators:
template<typename Iterator>
class Advance<Iterator, std::input_iterator_tag>
{
    public:
        using DifferenceType = typename std::iterator_traits<Iterator>::difference_type;

        void operator() (Iterator& x, DifferenceType n) const {
            while(n > 0) {
                ++x;--n;
            }
        }
};

// bidirectional, linear-time algorithm for bidirectional iterators:
template<typename Iterator>
class Advance<Iterator, std::bidirectional_iterator_tag>
{
    public:
        using DifferenceType = typename std::iterator_traits<Iterator>::difference_type;

        void operator() (Iterator& x, DifferenceType n) const {
            if (n > 0) {
                while(n > 0) {
                    ++x;--n;
                }
            } else {
                while (n < 0) {
                    --x;++n;
                }
            }
        }
};

// bidirectional, constant-time algorithm for random access iterators:
template<typename Iterator>
class Advance<Iterator, std::random_access_iterator_tag>
{
    public:
        using DifferenceType = typename std::iterator_traits<Iterator>::difference_type;

        void operator() (Iterator& x, DifferenceType n) const {
            x += n;
        }
};
