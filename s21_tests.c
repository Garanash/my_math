#include "s21_tests.h"

void print_test(long double x, long double real, long double expected) {
  printf("Input: %Lf\nReal output: %Lf\nExpected: %Lf\n", x, real, expected);
  if (isinf(expected)) {
    printf(isinf(real) ? "SUCCESS" : "FAIL");
    ck_assert_double_infinite(real);
  } else {
    printf(fabsl(real - expected) < EPS ? "SUCCESS" : "FAIL");
    ck_assert_float_eq_tol(real, expected, EPS);
  }
  printf("\n---------------------------------------------\n");
}

void print_test2(long double x, long double y, long double real,
                 long double expected) {
  printf("Input: x: %Lf y:%Lf\nReal output: %Lf\nExpected: %Lf\n", x, y, real,
         expected);
  if (isinf(expected)) {
    printf(isinf(real) ? "SUCCESS" : "FAIL");
    ck_assert_double_infinite(real);
  } else {
    printf(fabsl(real - expected) < EPS ? "SUCCESS" : "FAIL");
    ck_assert_float_eq_tol(real, expected, EPS);
  }
  printf("\n---------------------------------------------\n");
}

void run_test(Suite *test) {
  SRunner *sr = srunner_create(test);
  printf("\n");
  srunner_run_all(sr, CK_NORMAL);
  srunner_free(sr);
}

int main() {
  run_test(s21_abs_suite());
  run_test(s21_atan_suite());
  run_test(s21_exp_suite());
  run_test(s21_ceil_suite());
  run_test(s21_fmod_suite());
  run_test(s21_sin_suite());
  run_test(s21_asin_suite());
  run_test(s21_acos_suite());
  run_test(s21_cos_suite());
  run_test(s21_floor_suite());
  run_test(s21_pow_suite());
  run_test(s21_tan_suite());
  run_test(s21_fabs_suite());
  run_test(s21_sqrt_suite());
  run_test(s21_log_suite());
  return 0;
}
