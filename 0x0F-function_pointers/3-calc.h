<<<<<<< HEAD
#ifndef _CALC_H_
#define _CALC_H_

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - struct
 * @op: operator
 * @f: function
 */
=======
#ifndef _HEADER_
#define _HEADER_

/**
 * struct op - Struct op
 * @op: operator
 * @f: function
 */

>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

<<<<<<< HEAD
=======
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
>>>>>>> 9adfffcd78e627f7c0ebd812ad37f0f174aec34e
#endif
