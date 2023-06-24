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
int main()
{
    BoxContainer box1;

    cout << "Box1 :" << box1 << endl;
    box1.add(11);
    box1.add(12);
    box1.add(13);
    cout << "Box1 :" << box1 << endl;

    box1.add(14);
    box1.add(15);
    cout << "Box1 :" << box1 << endl;

    box1.add(16);
    cout << "Box1 :" << box1 << endl;

    for (size_t i{}; i < 4; ++i)
    {
        box1.add(17 + i);
    }
    cout << "Box1 :" << box1 << endl;

    box1.add(21);
    cout << "Box1 :" << box1 << endl;
    return 0;
}