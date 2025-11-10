#include <iostream>
#include <cstring>

/*
 * EXERCISE 4: Rule of Three
 *
 * Goal: Understand when and why you need custom copy operations
 *
 * Rule of Three: If you need to define one of these, you probably need all three:
 * 1. Destructor
 * 2. Copy constructor
 * 3. Copy assignment operator
 *
 * Task: Study the DynamicArray class below and understand each special function
 */

class DynamicArray
{
private:
    int *data;
    size_t size;

public:
    // Regular constructor
    DynamicArray(size_t sz) : size(sz)
    {
        data = new int[size];
        std::cout << "Constructor: allocated " << size << " ints\n";
        // Initialize to zero
        for (size_t i = 0; i < size; i++)
        {
            data[i] = 0;
        }
    }

    // 1. Destructor - free the memory
    ~DynamicArray()
    {
        std::cout << "Destructor: freeing " << size << " ints\n";
        delete[] data;
    }

    // 2. Copy constructor - deep copy when creating new object from existing
    DynamicArray(const DynamicArray &other) : size(other.size)
    {
        std::cout << "Copy constructor: deep copying " << size << " ints\n";
        data = new int[size];
        for (size_t i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }
    }

    // 3. Copy assignment operator - deep copy when assigning to existing object
    DynamicArray &operator=(const DynamicArray &other)
    {
        std::cout << "Copy assignment: copying " << other.size << " ints\n";

        // Check for self-assignment
        if (this == &other)
        {
            return *this;
        }

        // Free old memory
        delete[] data;

        // Copy new data
        size = other.size;
        data = new int[size];
        for (size_t i = 0; i < size; i++)
        {
            data[i] = other.data[i];
        }

        return *this;
    }

    // Utility methods
    void set(size_t index, int value)
    {
        if (index < size)
        {
            data[index] = value;
        }
    }

    int get(size_t index) const
    {
        return (index < size) ? data[index] : 0;
    }

    void print() const
    {
        std::cout << "[";
        for (size_t i = 0; i < size; i++)
        {
            std::cout << data[i];
            if (i < size - 1)
                std::cout << ", ";
        }
        std::cout << "]\n";
    }
};

void demonstrateCopyConstructor()
{
    std::cout << "\n--- Copy Constructor ---\n";
    DynamicArray arr1(3);
    arr1.set(0, 10);
    arr1.set(1, 20);
    arr1.set(2, 30);

    DynamicArray arr2 = arr1; // Copy constructor called
    arr2.set(0, 99);

    std::cout << "arr1: ";
    arr1.print();
    std::cout << "arr2: ";
    arr2.print();
}

void demonstrateCopyAssignment()
{
    std::cout << "\n--- Copy Assignment ---\n";
    DynamicArray arr1(3);
    arr1.set(0, 100);

    DynamicArray arr2(2);
    arr2 = arr1; // Copy assignment called

    std::cout << "arr1: ";
    arr1.print();
    std::cout << "arr2: ";
    arr2.print();
}

int main()
{
    std::cout << "=== Rule of Three Demo ===\n";

    demonstrateCopyConstructor();
    demonstrateCopyAssignment();

    std::cout << "\n--- Cleanup ---\n";
    return 0;
}

/*
 * Key Concepts:
 *
 * WITHOUT Rule of Three:
 * - Default copy would just copy the pointer (shallow copy)
 * - Both objects would point to same memory
 * - Double-free crash when both destructors run!
 *
 * WITH Rule of Three:
 * - Each object owns its own memory
 * - Safe to copy and destroy independently
 *
 * Modern C++ (Rule of Five):
 * Also add move constructor and move assignment for efficiency
 * We'll cover that in the smart-pointers section!
 *
 * Compile with: g++ -std=c++17 04_rule_of_three.cpp -o rule_three
 */
