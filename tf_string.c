#include "tf_string.h"
#include <stdlib.h>
#include <string.h>

void TF_String_init(TF_String* str) {
    if (!str) return;
    str->data = (char*)malloc(1);
    if (str->data) {
        str->data[0] = '\0';
        str->size = 0;
        str->capacity = 1;
    } else {
        str->size = 0;
        str->capacity = 0;
    }
}

void TF_String_init_with_cstr(TF_String* str, const char* cstr) {
    if (!str) return;
    if (!cstr) {
        TF_String_init(str);
        return;
    }

    size_t len = strlen(cstr);
    str->data = (char*)malloc(len + 1);
    if (str->data) {
        memcpy(str->data, cstr, len + 1);
        str->size = len;
        str->capacity = len + 1;
    } else {
        str->size = 0;
        str->capacity = 0;
    }
}

void TF_String_append(TF_String* str, const char* cstr) {
    if (!str || !cstr || !str->data) return;

    size_t len = strlen(cstr);
    if (len == 0) return;

    size_t new_size = str->size + len;
    if (new_size + 1 > str->capacity) {
        size_t new_capacity = str->capacity * 2;
        if (new_capacity < new_size + 1) {
            new_capacity = new_size + 1;
        }

        char* new_data = (char*)realloc(str->data, new_capacity);
        if (!new_data) return; // Allocation failed

        str->data = new_data;
        str->capacity = new_capacity;
    }

    memcpy(str->data + str->size, cstr, len + 1); // Copy string and null terminator
    str->size = new_size;
}

const char* TF_String_get_cstr(const TF_String* str) {
    if (!str || !str->data) return "";
    return str->data;
}

void TF_String_free(TF_String* str) {
    if (!str) return;
    if (str->data) {
        free(str->data);
        str->data = NULL;
    }
    str->size = 0;
    str->capacity = 0;
}
