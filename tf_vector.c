#include "tf_vector.h"
#include <stdlib.h>

void TF_Vector_init(TF_Vector* vec) {
    if (!vec) return;
    vec->data = NULL;
    vec->size = 0;
    vec->capacity = 0;
}

void TF_Vector_push_back(TF_Vector* vec, void* element) {
    if (!vec) return;

    if (vec->size == vec->capacity) {
        size_t new_capacity = vec->capacity == 0 ? 1 : vec->capacity * 2;
        void** new_data = (void**)realloc(vec->data, new_capacity * sizeof(void*));
        if (!new_data) return; // Allocation failed

        vec->data = new_data;
        vec->capacity = new_capacity;
    }

    vec->data[vec->size++] = element;
}

void* TF_Vector_get(const TF_Vector* vec, size_t index) {
    if (!vec || !vec->data || index >= vec->size) return NULL;
    return vec->data[index];
}

size_t TF_Vector_size(const TF_Vector* vec) {
    if (!vec) return 0;
    return vec->size;
}

void TF_Vector_free(TF_Vector* vec) {
    if (!vec) return;
    if (vec->data) {
        free(vec->data);
        vec->data = NULL;
    }
    vec->size = 0;
    vec->capacity = 0;
}
