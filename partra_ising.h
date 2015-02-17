#ifndef PARTRA_ISING_H
#define PARTRA_ISING_H

#include <stdio.h>
#include <limits.h>
#include <errno.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <complex.h>
#include <stdarg.h>

#ifndef PARTRA_TYPEDEF
#define PARTRA_TYPEDEF
typedef unsigned char**** Matrix;
typedef unsigned long long**** Matrix_ll;
typedef long double complex**** Matrix_ldc;
typedef unsigned char*** Row;
typedef unsigned long long*** Row_ll;
typedef long double complex*** Row_ldc;
#endif

#ifdef __cplusplus
extern "C" {
#endif

unsigned char i_sq_f_f(const unsigned char, char*); //Ising full transfer matrix, free row b.c.
unsigned char i_sq_c_f(const unsigned char, char*); //Ising full transfer matrix, cylindrical row b.c.
unsigned char if_sq_f_f(const unsigned char, char*); //Ising in a field full transfer matrix, free row b.c.
unsigned char if_sq_c_f(const unsigned char, char*); //Ising in a field full transfer matrix, cylindrical row b.c.
unsigned char i_sq_f_r(const unsigned char, char*); //Ising reduced transfer matrix, free row b.c.
unsigned char i_sq_c_r(const unsigned char, char*); //Ising reduced transfer matrix, cylindrical row b.c.
unsigned char if_sq_f_r(const unsigned char, char*); //Ising in a field reduced transfer matrix, free row b.c.
unsigned char if_sq_c_r(const unsigned char, char*); //Ising in a field reduced transfer matrix, cylindrical row b.c.

unsigned char i_tri_f_f(const unsigned char, char*); //Ising full transfer matrix, free row b.c.
unsigned char i_tri_c_f(const unsigned char, char*); //Ising full transfer matrix, cylindrical row b.c.
unsigned char if_tri_f_f(const unsigned char, char*); //Ising in a field full transfer matrix, free row b.c.
unsigned char if_tri_c_f(const unsigned char, char*); //Ising in a field full transfer matrix, cylindrical row b.c.
unsigned char i_tri_f_r(const unsigned char, char*); //Ising reduced transfer matrix, free row b.c.
unsigned char i_tri_c_r(const unsigned char, char*); //Ising reduced transfer matrix, cylindrical row b.c.
unsigned char if_tri_f_r(const unsigned char, char*); //Ising in a field reduced transfer matrix, free row b.c.
unsigned char if_tri_c_r(const unsigned char, char*); //Ising in a field reduced transfer matrix, cylindrical row b.c.

#ifdef __cplusplus
}
#endif

#endif