#ifndef TESTS_H
#define TESTS_H

#define EPS 0.000001

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_math.h"

void print_test(long double x, long double real, long double expected);
void print_test2(long double x, long double y, long double real,
                 long double expected);
Suite *s21_abs_suite(void);
Suite *s21_atan_suite(void);
Suite *s21_exp_suite(void);
Suite *s21_fmod_suite(void);
Suite *s21_sin_suite(void);
Suite *s21_acos_suite(void);
Suite *s21_asin_suite(void);
Suite *s21_cos_suite(void);
Suite *s21_floor_suite(void);
Suite *s21_pow_suite(void);
Suite *s21_tan_suite(void);
Suite *s21_ceil_suite(void);
Suite *s21_sqrt_suite(void);
Suite *s21_fabs_suite(void);
Suite *s21_log_suite(void);

#endif