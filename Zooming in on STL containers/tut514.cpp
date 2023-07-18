#include <iostream>
#include <forward_list>
#include <algorithm>
using namespace std;
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

    forward_list<int> numbers = {100, 2, 3, 4, 5};
    print_collection(numbers);

    // Code1 : Element access
    cout << " front element : " << numbers.front() << std::endl;

    // Modifiers

    cout << "---------------------" << endl;
    cout << endl;
    cout << "modifiers : " << endl;

    // Clear
    cout << endl;
    cout << "clear :" << endl;
    print_collection(numbers);

    numbers.clear();

    print_collection(numbers);
    cout << std::boolalpha;

    // Insert after
    cout << endl;
    cout << "insert_after : " << endl;
    numbers = {11, 12, 13, 14, 15};

    print_collection(numbers);
    auto it_insert = numbers.before_begin();

    numbers.insert_after(it_insert, 333);

    print_collection(numbers);

    // Emplace after : create in place after an iterator
    cout << std::endl;
    cout << "emplace_after : " << endl;

    print_collection(numbers);

    it_insert = numbers.before_begin();

    numbers.emplace_after(it_insert, 444);

    print_collection(numbers);

    // Erase_after
    cout << endl;
    cout << "erase_after : " << endl;

    print_collection(numbers);

    auto it_erase = find(numbers.begin(), numbers.end(), 13);

    if (it_erase != numbers.end())
    {
        cout << " Found 13 !" << endl;
    }
    else
    {
        cout << " Couldn't find 13 !" << endl;
    }

    // Erase the 14
    numbers.erase_after(it_erase);

    print_collection(numbers);

    // pop_front
    cout << endl;
    cout << "pop_front : " << endl;

    print_collection(numbers);

    numbers.pop_front();

    print_collection(numbers);

    // resize : up or down
    cout << endl;
    cout << "resize : " << endl;

    print_collection(numbers);

    numbers.resize(10);

    print_collection(numbers);

    numbers.resize(3); // When you resize down, the elements are lost for good.
                       // if you resize up again,you won't get them back.

    print_collection(numbers);

    numbers.resize(10);

    print_collection(numbers);

    // swap
    cout << endl;
    cout << "swap : " << endl;

    forward_list<int> other_numbers{200, 400, 600};

    cout << " numbers : ";
    print_collection(numbers);

    cout << " other_numbers :";
    print_collection(other_numbers);

    numbers.swap(other_numbers);

    cout << " numbers : ";
    print_collection(numbers);

    cout << " other_numbers :";
    print_collection(other_numbers);

    // Other operations
    cout << endl;
    cout << "merge : " << endl;

    forward_list<int> numbers1{1, 5, 6};
    forward_list<int> numbers2{9, 2, 4};

    cout << " numbers1 : ";
    print_collection(numbers1);

    cout << " numbers2 : ";
    print_collection(numbers2);

    // merge
    numbers1.merge(numbers2);

    cout << " numbers1 : ";
    print_collection(numbers1);

    cout << " numbers2 : ";
    print_collection(numbers2);

    // splice_after : moving a range of elements from one container to another
    cout << endl;
    cout << "splice_after : " << endl;

    numbers1 = {1, 5, 6, 8, 3};
    numbers2 = {9, 2, 4, 7, 13, 11, 17};

    cout << " numbers1 : ";
    print_collection(numbers1);

    cout << " numbers2 : ";
    print_collection(numbers2);

    numbers1.splice_after(numbers1.before_begin(), numbers2, numbers2.before_begin(), numbers2.cend()); // first argument is destination then source then from source range where to start and where to end

    cout << " numbers1 : ";
    print_collection(numbers1);

    cout << " numbers2 : ";
    print_collection(numbers2);

    // Remove
    cout << endl;
    cout << "remove : " << endl;

    numbers = {1, 100, 2, 3, 10, 1, 11, -1, 12};

    print_collection(numbers);

    numbers.remove(1); // remove both elements equal to 1

    print_collection(numbers);

    // Remove predicate
    numbers.remove_if([](int n)
                      { return n > 10; });

    print_collection(numbers);

    // reverse
    cout << endl;
    cout << "reverse : " << endl;

    numbers = {1, 100, 2, 3, 10, 1, 11, -1, 12};

    print_collection(numbers);

    numbers.reverse();

    print_collection(numbers);

    // Unique : Removes contiguous duplicates
    // Removes duplicated 100 and 11, but doesn't remove 1
    cout << endl;
    cout << "unique : " << endl;

    numbers = {1, 100, 100, 2, 3, 10, 1, 11, 11, -1, 12, 10, 1};

    print_collection(numbers);

    numbers.unique();

    print_collection(numbers);

    // Sort
    cout << endl;
    cout << "sort : " << endl;

    print_collection(numbers);

    numbers.sort();

    print_collection(numbers);

    // If we want to remove all duplicates, we can first sort and then
    // remove duplicates.

    numbers.unique();

    print_collection(numbers);

    return 0;
}