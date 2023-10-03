#include <iostream>


int main(){

	constexpr int SOME_LIB_MAJOR_VERSION {1237};
	
	constexpr int eye_count {2};
	
	constexpr double PI {3.14};

    //eye_count = 4;
	
	std::cout << "eye count : " << eye_count << std::endl;
	std::cout << "PI : " << PI << std::endl;


	//int leg_count {2}; // Non constexpr
	                    // leg_count is not known at compile time
	//constexpr int arm_count{leg_count}; // Error 


	constexpr int room_count{10};
	constexpr int door_count{room_count};// OK constant or constexpr can be the part used for intialization of constexpr
	/*
    A constexpr variable must satisfy the following requirements:

1.  its type must be a LiteralType
2.  it must be immediately initialized
3.  the full-expression of its initialization, including all implicit conversions, constructors calls, etc, must be a constant expression*/

	const int table_count{5};
	constexpr int chair_count{ table_count * 5};// Works


   // static_assert( SOME_LIB_MAJOR_VERSION == 123);

   // int age = 5;
   // static_assert( age == 5);

    std::cout << "App doing its thing..." << std::endl;


   
    return 0;
}

/*In C++, `constexpr` is a keyword introduced in C++11 to indicate that a function or variable can be evaluated at compile-time. It allows you to write code that can perform computations and generate values during compilation rather than at runtime. This can lead to improved performance and can enable various compile-time optimizations. `constexpr` can be applied to both variables and functions.

Here are some of the benefits and uses of `constexpr` in C++:

1. **Compile-Time Computation**: You can use `constexpr` to perform computations at compile time, which can be more efficient than doing them at runtime. This is especially useful for complex mathematical calculations, generating lookup tables, or other operations that don't depend on runtime inputs.

2. **Performance Optimization**: `constexpr` can be used to ensure that certain code is executed at compile time, reducing the runtime overhead and improving the performance of your program.

3. **Immutable Constants**: You can use `constexpr` to declare constants that are computed at compile time and cannot be modified at runtime, providing safety and clarity in your code.

Here are the basic rules and conditions for using `constexpr`:

1. **Constant Expression**: To use `constexpr`, the expression or function must be evaluated at compile time and produce a constant expression. This means that all inputs to the expression or function must be known at compile time.

2. **Literal Types**: The result type of a `constexpr` function and the types of its parameters must be literal types. Literal types include fundamental types like integers, floating-point numbers, and pointers, as well as user-defined types that meet certain criteria.

3. **No Side Effects**: `constexpr` functions should not have side effects (i.e., they should not modify global variables, have I/O operations, or perform actions that can't be determined at compile time).

4. **Recursive Calls**: `constexpr` functions can be recursive, but the recursion depth must be known at compile time.

Here's an example of using `constexpr` in C++:

```cpp
constexpr int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    constexpr int result = factorial(5); // Compile-time computation
    static_assert(result == 120, "Factorial of 5 should be 120");
    
    return 0;
}
```

In this example, the `factorial` function is marked as `constexpr`, allowing the calculation of the factorial of 5 to be performed at compile time. The `static_assert` statement checks that the computed value is equal to 120 at compile time. If it's not, a compilation error will occur.

In summary, `constexpr` in C++ is a powerful feature that enables compile-time computations and the creation of immutable constants. It can lead to performance improvements and safer code by moving computations from runtime to compile time. However, it comes with certain restrictions and conditions to ensure that the code can be evaluated at compile time.*/