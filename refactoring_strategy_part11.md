# Refactoring Strategy: Common Definitions & Memory Management (Part 1 of 5)

## Current Status
An initial analysis of the repository shows that there are currently **no C++ source files** (`*.cc`, `*.cpp`, `*.h`, `*.hpp`) present for this submodule. The workspace currently contains the main refactoring plan (`TENSORFLOW_C_REWRITE_PLAN.md`), along with base implementations for C strings and vectors (`tf_string`, `tf_vector`).

## Action Plan (Once files are available)
When the C++ files for Common Definitions & Memory Management (Part 1) are added to the repository, the following strict refactoring rules will be applied to translate the codebase to strict C99/C11:

1. **Remove Object-Oriented Paradigms**:
   - Classes, templates, and inheritance will be completely removed.
   - C++ classes representing allocators, tensors, and data types will be converted to C `struct`s.

2. **Function Signatures**:
   - Class methods will be replaced by C functions.
   - The first argument of these functions will be a pointer to the respective `struct` (e.g., `Allocator_allocate(Allocator* a, size_t size)`).

3. **Data Structures**:
   - Standard C++ library structures like `std::string` and `std::vector` will be replaced.
   - We will use the recently implemented `TF_String` and `TF_Vector` from the Core Utilities, or manually managed C buffers and arrays (`malloc`/`calloc`/`realloc`) as needed.

4. **Memory Management**:
   - Smart pointers (`std::shared_ptr`, `std::unique_ptr`) will be eliminated.
   - A strict ownership policy will be established for each dynamically allocated structure.
   - Proper calls to `free()` or custom deallocators will be implemented, and `valgrind` will be used to ensure zero memory leaks.

5. **Testing**:
   - Basic unit tests will be written in C.
   - Frameworks like `Unity` or basic `assert()` statements will be used to verify correct memory allocation, tensor shapes, and fundamental data type behavior.
