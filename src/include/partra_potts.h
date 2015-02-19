#ifndef PARTRA_POTTS_H
#define PARTRA_POTTS_H

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

unsigned char p_sq_f_f_file(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, free row b.c.
unsigned char p_sq_c_f_file(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, cylindrical row b.c.
unsigned char pf_sq_f_f_file(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, free row b.c.
unsigned char pf_sq_c_f_file(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, cylindrical row b.c.
unsigned char p_sq_f_r_file(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, free row b.c.
unsigned char p_sq_c_r_file(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, cylindrical row b.c.
unsigned char pf_sq_f_r_file(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, free row b.c.
unsigned char pf_sq_c_r_file(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, cylindrical row b.c.

unsigned char p_tri_f_f_file(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, free row b.c.
unsigned char p_tri_c_f_file(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, cylindrical row b.c.
unsigned char pf_tri_f_f_file(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, free row b.c.
unsigned char pf_tri_c_f_file(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, cylindrical row b.c.
unsigned char p_tri_f_r_file(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, free row b.c.
unsigned char p_tri_c_r_file(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, cylindrical row b.c.
unsigned char pf_tri_f_r_file(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, free row b.c.
unsigned char pf_tri_c_r_file(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, cylindrical row b.c.

unsigned char p2_sq_f_f_file(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, free row b.c., when q is a power of 2
unsigned char p2_sq_c_f_file(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char pf2_sq_f_f_file(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, free row b.c., when q is a power of 2
unsigned char pf2_sq_c_f_file(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char p2_sq_f_r_file(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, free row b.c., when q is a power of 2
unsigned char p2_sq_c_r_file(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char pf2_sq_f_r_file(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, free row b.c., when q is a power of 2
unsigned char pf2_sq_c_r_file(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, cylindrical row b.c., when q is a power of 2

unsigned char p2_tri_f_f_file(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, free row b.c., when q is a power of 2
unsigned char p2_tri_c_f_file(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char pf2_tri_f_f_file(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, free row b.c., when q is a power of 2
unsigned char pf2_tri_c_f_file(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char p2_tri_f_r_file(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, free row b.c., when q is a power of 2
unsigned char p2_tri_c_r_file(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char pf2_tri_f_r_file(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, free row b.c., when q is a power of 2
unsigned char pf2_tri_c_r_file(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, cylindrical row b.c., when q is a power of 2

/*
unsigned char p_sq_f_f(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, free row b.c.
unsigned char p_sq_c_f(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, cylindrical row b.c.
unsigned char pf_sq_f_f(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, free row b.c.
unsigned char pf_sq_c_f(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, cylindrical row b.c.
unsigned char p_sq_f_r(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, free row b.c.
unsigned char p_sq_c_r(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, cylindrical row b.c.
unsigned char pf_sq_f_r(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, free row b.c.
unsigned char pf_sq_c_r(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, cylindrical row b.c.

unsigned char p_tri_f_f(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, free row b.c.
unsigned char p_tri_c_f(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, cylindrical row b.c.
unsigned char pf_tri_f_f(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, free row b.c.
unsigned char pf_tri_c_f(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, cylindrical row b.c.
unsigned char p_tri_f_r(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, free row b.c.
unsigned char p_tri_c_r(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, cylindrical row b.c.
unsigned char pf_tri_f_r(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, free row b.c.
unsigned char pf_tri_c_r(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, cylindrical row b.c.

unsigned char p2_sq_f_f(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, free row b.c., when q is a power of 2
unsigned char p2_sq_c_f(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char pf2_sq_f_f(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, free row b.c., when q is a power of 2
unsigned char pf2_sq_c_f(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char p2_sq_f_r(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, free row b.c., when q is a power of 2
unsigned char p2_sq_c_r(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char pf2_sq_f_r(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, free row b.c., when q is a power of 2
unsigned char pf2_sq_c_r(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, cylindrical row b.c., when q is a power of 2

unsigned char p2_tri_f_f(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, free row b.c., when q is a power of 2
unsigned char p2_tri_c_f(const unsigned char, const unsigned long long, const char*); //Potts full transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char pf2_tri_f_f(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, free row b.c., when q is a power of 2
unsigned char pf2_tri_c_f(const unsigned char, const unsigned long long, const char*); //Potts in a field full transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char p2_tri_f_r(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, free row b.c., when q is a power of 2
unsigned char p2_tri_c_r(const unsigned char, const unsigned long long, const char*); //Potts reduced transfer matrix, cylindrical row b.c., when q is a power of 2
unsigned char pf2_tri_f_r(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, free row b.c., when q is a power of 2
unsigned char pf2_tri_c_r(const unsigned char, const unsigned long long, const char*); //Potts in a field reduced transfer matrix, cylindrical row b.c., when q is a power of 2
*/

#ifdef __cplusplus
}
#endif

#endif