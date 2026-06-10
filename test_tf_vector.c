#include "tf_vector.h"
#include <assert.h>
#include <stdio.h>

void test_tf_vector_init() {
    TF_Vector vec;
    TF_Vector_init(&vec);
    assert(TF_Vector_size(&vec) == 0);
    TF_Vector_free(&vec);
}

void test_tf_vector_push_and_get() {
    TF_Vector vec;
    TF_Vector_init(&vec);

    int a = 10, b = 20, c = 30;
    TF_Vector_push_back(&vec, &a);
    TF_Vector_push_back(&vec, &b);
    TF_Vector_push_back(&vec, &c);

    assert(TF_Vector_size(&vec) == 3);
    assert(*(int*)TF_Vector_get(&vec, 0) == 10);
    assert(*(int*)TF_Vector_get(&vec, 1) == 20);
    assert(*(int*)TF_Vector_get(&vec, 2) == 30);
    assert(TF_Vector_get(&vec, 3) == NULL);

    TF_Vector_free(&vec);
}

int main() {
    test_tf_vector_init();
    test_tf_vector_push_and_get();
    printf("All TF_Vector tests passed!\n");
    return 0;
}
