#include "tf_string.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

void test_tf_string_init() {
    TF_String str;
    TF_String_init(&str);
    assert(str.size == 0);
    assert(str.capacity == 1);
    assert(strcmp(TF_String_get_cstr(&str), "") == 0);
    TF_String_free(&str);
}

void test_tf_string_init_with_cstr() {
    TF_String str;
    TF_String_init_with_cstr(&str, "hello");
    assert(str.size == 5);
    assert(str.capacity == 6);
    assert(strcmp(TF_String_get_cstr(&str), "hello") == 0);
    TF_String_free(&str);
}

void test_tf_string_append() {
    TF_String str;
    TF_String_init_with_cstr(&str, "hello");
    TF_String_append(&str, " world");
    assert(str.size == 11);
    assert(strcmp(TF_String_get_cstr(&str), "hello world") == 0);
    TF_String_free(&str);
}

int main() {
    test_tf_string_init();
    test_tf_string_init_with_cstr();
    test_tf_string_append();
    printf("All TF_String tests passed!\n");
    return 0;
}
