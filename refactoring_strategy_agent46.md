# Refactoring Strategy: CPU Kernels (NN & Control Flow) (Part 6 of 10) - Agent 46

An initial analysis of the repository shows that there are currently **no C++ source files** (`*.cc`, `*.cpp`, `*.h`, `*.hpp`) present in this submodule for CPU Kernels (NN & Control Flow) (Part 6).

When the C++ files for the CPU Kernels (NN & Control Flow) (Part 6) are added, the following strict refactoring rules will be applied to rewrite the codebase to strict C99/C11:

1.  **No Classes, Templates, or Inheritance:** The code will use strictly procedural C. All C++ object-oriented features will be removed.
2.  **Function Replacements for Class Methods:** Class methods will be replaced by C functions that accept a pointer to the relevant `struct` as their first argument (e.g., `Tensor_dim(Tensor* t)`).
3.  **Strings and Vectors:** `std::string` and `std::vector` will be entirely replaced by manually managed C buffers and dynamic arrays, utilizing existing basic implementations like `tf_vector` and `tf_string` where appropriate.
4.  **Memory Management:** Strict manual memory management will be enforced. All smart pointers (`std::shared_ptr`, `std::unique_ptr`) will be removed. Memory leaks will be handled by establishing clear ownership policies for pointers and ensuring proper calls to `free()` or custom deallocators.
5.  **Unit Testing:** Basic unit tests will be written in C using simple frameworks (like Unity) or basic assertions to ensure the correctness of the refactored kernels.
