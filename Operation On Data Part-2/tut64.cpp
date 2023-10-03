#include <iostream>

const int val1{33};
constexpr int val2{34};
int val3{35}; // Run time value

constinit int age = 88;         // This is initialized at compile time
const constinit int age1{val1}; // const and constinit can be combined
constinit int age2{age1};       // Initializing with age would lead to a compiler error
                                // age is not const
// constinit int age3 {val3}; // Error : val3 is evaluated at run time
//  can't const initialize age3

const constinit double weight{33.33};
// constexpr constinit double scale_factor{3.11};// Can't combine constexpr and constinit

int main()
{

    // constinit double height{1.72};

    std::cout << "age : " << age << std::endl;
    std::cout << "age1 : " << age1 << std::endl;
    std::cout << "age2 : " << age2 << std::endl;

    age = 33; // Can change a const init variable
    std::cout << "age : " << age << std::endl;

    // Combining const and constinit
    std::cout << "weight : " << weight << std::endl;
    // weight = 44.44; // Compiler error

    return 0;
}
/*Differece between constexpr and constinit
`constinit` and `constexpr` are two different features introduced in C++11 and C++20, respectively, that relate to compile-time initialization and evaluation, but they serve different purposes and have different use cases.

1. **`constinit`**:

   - Introduced in C++20.
   - It's used to ensure that a variable is initialized at compile time, just like `constexpr`, but it emphasizes initialization rather than computation.
   - `constinit` is primarily used to specify that a variable should have static storage duration and be initialized only once, typically during program startup.
   - It's often used for global or static variables to guarantee their initialization at compile time and prevent dynamic initialization, which can lead to certain issues like the static initialization order fiasco.
   - `constinit` doesn't require that the value or expression be computed at compile time; its primary purpose is to enforce that the initialization happens at compile time.

Example:

```cpp
constinit int x = 42; // x is initialized at compile time
```

2. **`constexpr`**:

   - Introduced in C++11.
   - `constexpr` is used to specify that a function or expression can be evaluated at compile time. It focuses on compile-time computation.
   - It can be applied to functions, variables, and other constructs and allows you to perform computations during compilation, often for generating constant values, initializing arrays, or making compile-time decisions.
   - `constexpr` functions guarantee that their results are available at compile time and can be used in other `constexpr` contexts.
   - Variables marked as `constexpr` must be initialized with constant expressions and are usually used for creating compile-time constants.

Example:

```cpp
constexpr int square(int x) {
    return x * x; // This can be computed at compile time
}

constexpr int y = square(5); // y is a compile-time constant
```

In summary, `constinit` is primarily used to ensure that variables are initialized at compile time, whereas `constexpr` is used for specifying that functions or expressions can be evaluated at compile time, allowing for compile-time computations. They serve different purposes and are applied to different parts of C++ code.
*/