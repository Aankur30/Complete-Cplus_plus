#include <iostream>
#include <deque>

using namespace std;

class Item
{
public:
    Item() : m_var(0)
    {
        std::cout << "Item default constructor called" << endl;
    }
    Item(int var) : m_var(var)
    {
        // std::cout << "Item constructor called for: " << m_var << std::endl;
    }

    Item(const Item &source) : m_var{source.m_var}
    {
        // std::cout << "Item copy constructor called for :" << m_var << endl;
    }

    int get() const
    {
        return m_var;
    }

private:
    int m_var{0};
};

ostream &operator<<(ostream &out, const Item &item)
{
    out << "Item [ value : " << item.get() << "]";
    return out;
}

template <typename T>
void print_collection(const T &collection)
{

    auto it = collection.begin();

    cout << " Collection [";
    while (it != collection.end())
    {
        cout << " " << *it;
        ++it;
    }
    cout << "]" << endl;
}

int main()
{

    // Creating deques
    deque<int> numbers = {1, 2, 3, 4, 5, 6};

    deque<Item> items{Item(22), Item(33), Item(44), Item(55)};

    cout << "numbers : ";
    print_collection(numbers);

    cout << "items : ";
    print_collection(items);

    // Code1 : Element access
    // Access elements : [], at(), front() and back()
    cout << endl;
    cout << "Element access : " << endl;
    cout << "numbers[3] : " << numbers[3] << endl;       // No bound check
    cout << "numbers.at(3) : " << numbers.at(3) << endl; // Bound check safer then the above method

    cout << "numbers[30] (Undefined behavior):" << numbers[30] << endl; // No bounds check, undefined behavior, junk value or even crash.
    // cout << "numbers.at(30) (throws expception): " << numbers.at(30) << endl;

    cout << "numbers.front() : " << numbers.front() << endl;
    cout << "numbers.back() : " << numbers.back() << endl;

    // Data method : Deque has no data method

    // Iterators
    cout << "-----------------------" << endl;

    cout << endl;
    cout << "Iterators : " << endl;
    // begin() and end()
    auto it = numbers.begin();

    cout << "Deque(With iterators) : [ ";
    while (it != numbers.end())
    {
        cout << " " << *it;
        ++it;
    }
    cout << " ]" << endl;

    // Reverse traversal with rbebin and rend

    auto it_reverse = numbers.rbegin(); // non const iterator

    cout << "Deque(Reverse traversal with iterators) : [ ";
    while (it_reverse != numbers.rend())
    {
        cout << " " << *it_reverse;
        ++it_reverse; // Increments towards the first element of the array.
    }
    cout << " ]" << endl;

    cout << "-----------------------" << endl;

    cout << endl;
    cout << "capacity : " << endl;
    cout << "numbers size : " << numbers.size() << endl;
    cout << "numbers max_size : " << numbers.max_size() << endl;
    cout << std::boolalpha; // Force output of bool as true or false instead of 1 or 0
    cout << "numbers is empty : " << numbers.empty() << endl;

    numbers.push_back(20);
    cout << "after pushing 20 to back : " << endl;
    print_collection(numbers);
    cout << "numbers size : " << numbers.size() << endl;

    cout << "-----------------------" << endl;

    // Code4 : Modifiers
    cout << endl;

    cout << "clear : " << endl;
    print_collection(numbers);

    // Clear
    numbers.clear();

    print_collection(numbers);
    cout << "numbers size : " << numbers.size() << endl;

    numbers = {10, 20, 30, 40, 50, 60};

    cout << "after reassignment : " << endl;
    print_collection(numbers);

    // Insert : element inserted in front of it_pos
    cout << endl;
    cout << "insert : " << endl;
    auto it_pos = numbers.begin() + 2;

    print_collection(numbers);

    numbers.insert(it_pos, 300);
    print_collection(numbers);
    numbers.insert(it_pos, 400); // iterator it_pos moves as we add elements. automatically increment
                                 //  it_pos keeps pointing to same element
                                 //  elements are inserted at position in front of it_pos
    print_collection(numbers);

    // Emplace
    cout << endl;
    cout << "emplace : " << endl;
    print_collection(numbers);

    auto it_item_pos = numbers.begin() + 2;
    numbers.emplace(it_item_pos, 45); // The parameters following the iterator
                                      // are passed to a constructor of the type stored in
                                      // the vector.
    numbers.emplace(it_item_pos, 50);
    print_collection(numbers);

    // Erase
    cout << endl;
    cout << "erase : " << endl;
    print_collection(numbers);

    numbers.erase(numbers.begin() + 4);

    print_collection(numbers);

    numbers.erase(numbers.begin() + 1, numbers.begin() + 4); // return copies of the collection

    print_collection(numbers);

    // Emplace_back
    cout << endl;
    cout << "emplace_back : " << endl;
    print_collection(numbers);

    numbers.emplace_back(10);
    numbers.emplace_back(11);
    numbers.emplace_back(12);

    print_collection(numbers);

    // Pop back
    cout << endl;
    cout << "pop_back : " << endl;
    print_collection(numbers);

    numbers.pop_back();
    print_collection(numbers);

    numbers.pop_back();
    print_collection(numbers);

    numbers.pop_back();
    print_collection(numbers);

    // Resize
    cout << endl;
    cout << "resize : " << endl;
    cout << " resize (Before) : " << endl;
    print_collection(numbers);
    cout << " numbers size : " << numbers.size() << endl;

    numbers.resize(30);

    print_collection(numbers);
    cout << " after resize : " << endl;
    cout << " numbers size : " << numbers.size() << endl;

    // Can even resize down
    numbers.resize(10);
    print_collection(numbers);
    cout << " numbers size : " << numbers.size() << endl;

    // Swap
    cout << endl;
    cout << "swap : " << endl;

    deque<Item> other_items = {Item(100), Item(200), Item(300)};

    cout << "items : ";
    print_collection(items);

    cout << "other_items : ";
    print_collection(other_items);

    // items.swap(other_items);
    other_items.swap(items);

    cout << "after swap : " << endl;

    cout << "items : ";
    print_collection(items);

    cout << "other_items : ";
    print_collection(other_items);

    return 0;
}