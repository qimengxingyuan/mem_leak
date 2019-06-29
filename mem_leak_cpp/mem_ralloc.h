#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <map>
#include <pthread.h>
#include <assert.h>


#ifndef MEM_LEAK_SAFE_H
#define MEM_LEAK_SAFE_H

#define safe_free(p)    mem_safe_free(__FILE__, __LINE__, p)
#define safe_malloc(s)  mem_safe_malloc(__FILE__, __LINE__, s)

extern void mem_safe_free(const char * file, size_t line, void * ptr);
extern void * mem_safe_malloc(const char * file, size_t line, size_t size);
extern void mem_leak_result(void);
extern int mem_leak_init(void);
extern void mem_leak_destroy(void);

#endif