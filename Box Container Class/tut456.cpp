#include <iostream>
using namespace std;

class streamInsertable
{
    friend ostream &operator<<(ostream &out, const streamInsertable &operand)
    {
        operand.streamInsert(out);
        return out;
    }

public:
    virtual void streamInsert(ostream &out) const = 0;
};

class BoxContainer : public streamInsertable
{
    using value_type = int;

    static const size_t DEFAULT_CAPACITY = 0;
    static const size_t EXPAND_STEPS = 5;

public:
    BoxContainer(size_t capacity = DEFAULT_CAPACITY)
    {
        m_items = new value_type[capacity];
        m_capacity = capacity;
        m_size = 0;
    }
    BoxContainer(const BoxContainer &source)
    {
        m_items = new value_type[source.m_capacity];
        m_capacity = source.m_capacity;
        m_size = source.m_size;

        // copy the items over from the source
        for (size_t i = 0; i < source.size(); i++)
        {
            m_items[i] = source.m_items[i];
        }
    }
    ~BoxContainer()
    {
        delete[] m_items;
    }

    virtual void streamInsert(ostream &out) const override
    {
        out << "BoxContainer : [ size :  " << m_size
            << ", capacity : " << m_capacity << ", items : ";

        for (size_t i{0}; i < m_size; ++i)
        {
            out << m_items[i] << " ";
        }
        cout << "]";
    }

    // helper getter interface
    size_t size() const { return m_size; }
    size_t capacity() const { return m_capacity; }

    void add(const value_type &item)
    {
        if (m_size == m_capacity)
            expand(m_size + EXPAND_STEPS);
        m_items[m_size++] = item;
    }
    bool remove_item(const value_type &item)
    {
        size_t index{m_capacity + 999};

        for (size_t i = 0; i < m_size; i++)
        {
            if (m_items[i] == item)
            {
                index = i;
                break;
            }
        }
        if (index > m_size)
            return false;

        // overshadown item at index with last element and decrement m_size
        m_items[index] = m_items[m_size - 1];
        m_size--;
        return true;
    }

    // removing all instances of an item::multiple instances of same element
    size_t removeALL(const value_type &item)
    {
        size_t remove_count{};

        bool removed = remove_item(item);
        if (removed)
            ++remove_count;
        while (removed == true)
        {
            removed == remove_item(item);
            if (removed)
                ++remove_count;
        }
        return remove_count;
    }

    void operator+=(const BoxContainer &operand)
    {
        if ((m_size + operand.size()) > m_capacity)
            expand(m_size + operand.size());

        // Copy over the elements
        for (size_t i{}; i < operand.m_size; ++i)
        {
            m_items[m_size + i] = operand.m_items[i];
        }

        m_size += operand.m_size;
    }
    void operator=(const BoxContainer &source)
    {
        value_type *new_items;

        // Check for self-assignment:
        if (this == &source)
            return;
        /*
        If the capacities are different, set up a new internal array
        that matches source, because we want object we are assigning to
        to match source as much as possible.
        */
        if (m_capacity != source.m_capacity)
        {
            new_items = new value_type[source.m_capacity];
            delete[] m_items;
            m_items = new_items;
            m_capacity = source.m_capacity;
        }

        // Copy the items over from source
        for (size_t i{}; i < source.size(); ++i)
        {
            m_items[i] = source.m_items[i];
        }

        m_size = source.m_size;
    }

private:
    void expand(size_t new_capacity)
    {
        cout << "Expanding to " << new_capacity << endl;
        value_type *new_items_container;

        if (new_capacity <= m_capacity)
            return;

        new_items_container = new value_type[new_capacity];

        for (size_t i = 0; i < m_size; ++i)
        {
            new_items_container[i] = m_items[i];
        }

        // release the memory allocated
        delete[] m_items;

        m_items = new_items_container;

        m_capacity = new_capacity;
    }

private:
    value_type *m_items;
    size_t m_size;
    size_t m_capacity;
};
//free operator
BoxContainer operator+(const BoxContainer &left, const BoxContainer &right)
{
    BoxContainer result(left.size() + right.size());
    result += left;
    result += right;
    return result;
}
int main()
{
    // Operator+=
    BoxContainer box1;
    box1.add(1);
    box1.add(2);
    box1.add(3);

    std::cout << "box1 : " << box1 << std::endl;

    BoxContainer box2;
    box2.add(10);
    box2.add(20);
    box2.add(30);

    std::cout << "box2 : " << box2 << std::endl;

    std::cout << std::endl;
    std::cout << "operator+= : " << std::endl;
    box2 += box1;
    std::cout << "box2 : " << box2 << std::endl;
    box2.add(50);
    std::cout << "box2 : " << box2 << std::endl;

    std::cout << "--------------------------" << std::endl;

    //----------------------------------------------------

    // Operator+
    cout << std::endl;
    cout << "operator+ : " << endl;
    cout << "box1 : " << box1 << endl;
    cout << "box2 : " << box2 << endl;

    BoxContainer box3;
    box3.add(81);
    box3.add(82);

    cout << "box3 : " << box3 << endl;

    cout << "box1 + box3 : " << (box1 + box3) << endl;

    std::cout << "--------------------------" << std::endl;

    //----------------------------------------------------

    // Operator=
    cout << endl;
    cout << "operator= : " << endl;

    cout << "box1 : " << box1 << endl;
    cout << "box2 : " << box2 << endl;
    cout << "box3 : " << box3 << endl;

    box3 = box2;

    cout << "box1 : " << box1 << endl;
    cout << "box2 : " << box2 << endl;
    cout << "box3 : " << box3 << endl;

    return 0;
}