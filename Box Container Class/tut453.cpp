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

    static const size_t DEFAULT_CAPACITY = 30;

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

    void dummy_initalize() const
    {
        // Put in 10 items
        for (size_t i{}; i < 10; ++i)
        {
            m_items[i] = i + 12;
        }
        // Set the size

        // Using the default capacity
    }

private:
    value_type *m_items;
    size_t m_size;
    size_t m_capacity;
};
int main()
{
    BoxContainer box1;
    box1.dummy_initalize();

    cout << "box1 : " << box1 << endl;
    cout << "&box1 : " << &box1 << endl;

    BoxContainer box2(box1);
    cout << "box2 : " << box2 << endl;
    cout << "&box2 : " << &box2 << endl;
    return 0;
}