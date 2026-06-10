#ifndef TF_VECTOR_H
#define TF_VECTOR_H

#include <stddef.h>

typedef struct {
    void** data;
    size_t size;
    size_t capacity;
} TF_Vector;

/* Initialize an empty TF_Vector */
void TF_Vector_init(TF_Vector* vec);

/* Add an element to the end of the TF_Vector */
void TF_Vector_push_back(TF_Vector* vec, void* element);

/* Get an element at a specific index. Returns NULL if out of bounds. */
void* TF_Vector_get(const TF_Vector* vec, size_t index);

/* Get the number of elements in the TF_Vector */
size_t TF_Vector_size(const TF_Vector* vec);

/* Free the memory allocated for the TF_Vector's internal array.
   Does NOT free the individual elements. */
void TF_Vector_free(TF_Vector* vec);

#endif /* TF_VECTOR_H */
