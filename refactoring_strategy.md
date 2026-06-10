# Refactoring Strategy: Core Platform & Utilities (Part 3 of 10)

## Action Plan
When the C++ files for the Core Platform & Utilities are added, the following strict refactoring rules will be applied to rewrite the codebase to strict C99/C11:

1. **Remove Object-Oriented Paradigms**:
   - Classes, templates, and inheritance will be completely removed.
   - C++ classes will be converted to C `struct`s.

2. **Function Signatures**:
   - Class methods will be replaced by C functions.
   - The first argument of these functions will be a pointer to the respective `struct` (e.g., `MyStruct_method(MyStruct* self)`).

3. **Data Structures**:
   - Standard C++ library structures like `std::string` and `std::vector` will be replaced.
   - We will use manually managed C buffers, `char*`, and dynamically allocated arrays (`malloc`/`calloc`/`realloc`).

4. **Memory Management**:
   - Smart pointers (`std::shared_ptr`, `std::unique_ptr`) will be eliminated.
   - A clear ownership policy will be established for each dynamically allocated structure.
   - Proper calls to `free()` or custom deallocators will be implemented to prevent memory leaks.

5. **Testing**:
   - Basic unit tests will be written in C.
   - Frameworks like `Unity` or basic `assert()` statements will be used to ensure the translated code behaves correctly.
