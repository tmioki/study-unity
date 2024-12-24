#include "unity.h"
#include "mylib.h"

void setUp(void) {
    // テスト前の初期化処理
}

void tearDown(void) {
    // テスト後のクリーンアップ
}

void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3));
}

void test_add_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-1, add(-2, 1));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_negative_numbers);
    return UNITY_END();
}
