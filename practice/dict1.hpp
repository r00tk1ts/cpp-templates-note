template<typename Key, typename Value, typename = void>
class Dictionary {
    private:
        vector<pair<Key const, Value>> data;
    public:
        value& operator[](key const& key) {
            for(auto& element : data) {
                if (element.first == key) {
                    return element.second;
                }
            }

            data.push_back(pair<Key const, Value>(key, Value()));
            return data.back().second;
        }
};

template<typename Key, typename Value>
class Dictionary<Key, Value, EnableIf<HasLess<Key>>>
{
    private:
        map<Key, Value> data;
    public:
        value& operator[](Key const& key) {
            return data[key];
        }
};


