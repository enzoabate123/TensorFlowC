#ifndef TF_STRING_H
#define TF_STRING_H

#include <stddef.h>

typedef struct {
    char* data;
    size_t size;
    size_t capacity;
} TF_String;

/* Initialize an empty TF_String */
void TF_String_init(TF_String* str);

/* Initialize a TF_String from a C-style string */
void TF_String_init_with_cstr(TF_String* str, const char* cstr);

/* Append a C-style string to a TF_String */
void TF_String_append(TF_String* str, const char* cstr);

/* Get the C-style string from a TF_String.
   The returned pointer is valid until the next modification. */
const char* TF_String_get_cstr(const TF_String* str);

/* Free the memory allocated by a TF_String */
void TF_String_free(TF_String* str);

#endif /* TF_STRING_H */
