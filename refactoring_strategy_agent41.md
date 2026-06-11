# Refactoring Strategy: CPU Kernels (NN & Control Flow) (Part 1 of 10)

## Current Status
An initial analysis of the repository shows that there are currently **no C++ source files** (`*.cc`, `*.cpp`, `*.h`, `*.hpp`) present for this specific submodule. The workspace primarily contains the overall refactoring plan documents (`TENSORFLOW_C_REWRITE_PLAN.md`, `README.md`), a script (`generate_plan.py`), and some base C utility files for strings and vectors (`tf_string.h`, `tf_string.c`, `tf_vector.h`, `tf_vector.c` along with their tests).

## Action Plan (Once files are available)
When the C++ files for the CPU Kernels (NN & Control Flow) (Part 1 of 10) are added, the following strict refactoring rules will be applied to rewrite the codebase to strict C99/C11:

1. **Remove Object-Oriented Paradigms**:
   - Classes, templates, and inheritance will be completely removed.
   - C++ classes will be converted to C `struct`s.

2. **Function Signatures**:
   - Class methods will be replaced by C functions.
   - The first argument of these functions will be a pointer to the respective `struct` (e.g., `Tensor_dim(Tensor* t)`).

3. **Data Structures**:
   - Standard C++ library structures like `std::string` and `std::vector` will be replaced.
   - We will use manually managed C buffers, `char*`, and dynamically allocated arrays (`malloc`/`calloc`/`realloc`), leveraging the existing `tf_string` and `tf_vector` implementations where applicable.

4. **Memory Management**:
   - Smart pointers (`std::shared_ptr`, `std::unique_ptr`) will be eliminated.
   - A clear ownership policy will be established for each dynamically allocated structure.
   - Proper calls to `free()` or custom deallocators will be implemented to prevent memory leaks.

5. **Testing**:
   - Basic unit tests will be written in C.
   - Basic `assert()` statements or simple test frameworks will be used to ensure the translated code behaves correctly.
