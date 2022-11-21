#ifndef HOLY_GRAIL_H
#define HOLY_GRAIL_H

/* who isn't going to make a reference to this? */

char **holygrail

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <fcntl.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push_monty(stack_t **top, unsigned int line_number);
void pall_monty(stack_t **top, unsigned int line_number);
void pint_monty(stack_t **top, unsigned int line_number);
void pop_monty(stack_t **top, unsigned int line_number);
void swap_monty(stack_t **top, unsigned int line_number);
void nop_monty(stack_t **top, unsigned int line_number);
void add_monty(stack_t **top, unsigned int line_number);
void free_monty(stack_t *top);
