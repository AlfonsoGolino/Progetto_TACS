
# 1 "<previous_module>"
unsigned __CPROVER_bitvector[1] __cs_active_thread[3] = {1};

# 2 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_pc[3];

# 3 "<previous_module>"
unsigned __CPROVER_bitvector[8] __cs_pc_cs[3];

# 4 "<previous_module>"
unsigned __CPROVER_bitvector[2] __cs_last_thread;

# 5 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_thread_lines[3] = {58, 84, 84};

# 7 "<previous_module>"
void *__cs_safe_malloc(unsigned int __cs_size)
{
        
# 8 "<previous_module>"
void *__cs_ptr = (malloc(__cs_size));
        
# 9 "<previous_module>"
return __cs_ptr;
}


# 12 "<previous_module>"
void __cs_init_scalar(void *__cs_var, unsigned int __cs_size)
{
        
# 13 "<previous_module>"
if (__cs_size == (sizeof(int)))
                
# 14 "<previous_module>"
*((int *) __cs_var) = nondet_int();
        else

# 15 "<previous_module>"
        {
                
# 16 "<previous_module>"
__cs_var = malloc(__cs_size);
        }

}


# 20 "<previous_module>"
void __CSEQ_message(char *__cs_message)
{
        ;
}


# 22 "<previous_module>"
typedef int __cs_t;

# 24 "<previous_module>"
void *__cs_threadargs[3];

# 25 "<previous_module>"
void *__cs_thread_joinargs[3];

# 27 "<previous_module>"
int __cs_create(__cs_t *__cs_new_thread_id, void *__cs_attr, void *(*__cs_thread_function)(void *), void *__cs_arg, int __cs_threadID)
{
        
# 28 "<previous_module>"
if (__cs_threadID > THREADS)
                return 0;

        
# 29 "<previous_module>"
*__cs_new_thread_id = __cs_threadID;
        
# 30 "<previous_module>"
__cs_active_thread[__cs_threadID] = 1;
        
# 31 "<previous_module>"
__cs_threadargs[__cs_threadID] = __cs_arg;
        
# 32 "<previous_module>"
__CSEQ_message("thread spawned");
        
# 33 "<previous_module>"
return 0;
}


# 36 "<previous_module>"
int __cs_join(__cs_t __cs_id, void **__cs_value_ptr)
{
        
# 37 "<previous_module>"
__CPROVER_assume(__cs_pc[__cs_id] == __cs_thread_lines[__cs_id]);
        
# 38 "<previous_module>"
*__cs_value_ptr = __cs_thread_joinargs[__cs_id];
        
# 39 "<previous_module>"
return 0;
}


# 42 "<previous_module>"
int __cs_exit(void *__cs_value_ptr, unsigned int __cs_thread_index)
{
        
# 43 "<previous_module>"
__cs_thread_joinargs[__cs_thread_index] = __cs_value_ptr;
        
# 44 "<previous_module>"
return 0;
}


# 47 "<previous_module>"
int __cs_self(void)
{
        return 1;
}


# 49 "<previous_module>"
typedef int __cs_mutex_t;

# 51 "<previous_module>"
int __cs_mutex_init(__cs_mutex_t *__cs_m, int __cs_val)
{
        
# 52 "<previous_module>"
*__cs_m = -1;
        
# 53 "<previous_module>"
return 0;
}


# 56 "<previous_module>"
int __cs_mutex_destroy(__cs_mutex_t *__cs_mutex_to_destroy)
{
        
# 57 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_destroy) != 0, "attempt to destroy an uninitialized mutex");
        
# 58 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_destroy) != (-2), "attempt to destroy a previously destroyed mutex");
        
# 59 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_destroy) == (-1), "attempt to destroy a locked mutex");
        
# 60 "<previous_module>"
*__cs_mutex_to_destroy = -2;
        
# 61 "<previous_module>"
__CSEQ_message("lock destroyed");
        
# 62 "<previous_module>"
return 0;
}


# 65 "<previous_module>"
int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock, unsigned __CPROVER_bitvector[2] __cs_thread_index)
{
        
# 66 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_lock) != 0, "attempt to lock an uninitialized mutex");
        
# 67 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_lock) != (-2), "attempt to lock a destroyed mutex");
        
# 68 "<previous_module>"
__CPROVER_assume((*__cs_mutex_to_lock) == (-1));
        
# 69 "<previous_module>"
*__cs_mutex_to_lock = __cs_thread_index + 1;
        
# 70 "<previous_module>"
__CSEQ_message("lock acquired");
        
# 71 "<previous_module>"
return 0;
}


# 74 "<previous_module>"
int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock, unsigned __CPROVER_bitvector[2] __cs_thread_index)
{
        
# 75 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_unlock) != 0, "attempt to unlock an uninitialized mutex");
        
# 76 "<previous_module>"
__CPROVER_assert((*__cs_mutex_to_unlock) != (-2), "attempt to unlock a destroyed mutex");
        
# 77 "<previous_module>"
__CPROVER_assume((*__cs_mutex_to_unlock) == (__cs_thread_index + 1));
        
# 78 "<previous_module>"
*__cs_mutex_to_unlock = -1;
        
# 79 "<previous_module>"
__CSEQ_message("lock released");
        
# 80 "<previous_module>"
return 0;
}


# 83 "<previous_module>"
typedef int __cs_cond_t;

# 85 "<previous_module>"
int __cs_cond_init(__cs_cond_t *__cs_cond_to_init, void *__cs_attr)
{
        
# 86 "<previous_module>"
*__cs_cond_to_init = -1;
        
# 87 "<previous_module>"
return 0;
}


# 90 "<previous_module>"
int __cs_cond_destroy(__cs_cond_t *__cs_cond_to_destroy)
{
        
# 91 "<previous_module>"
*__cs_cond_to_destroy = -2;
        
# 92 "<previous_module>"
return 0;
}


# 95 "<previous_module>"
int __cs_cond_wait_1(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m, unsigned int __cs_thread_index)
{
        
# 96 "<previous_module>"
__CPROVER_assert((*__cs_cond_to_wait_for) != 0, "attempt to use an uninitialized conditional variable");
        
# 97 "<previous_module>"
__CPROVER_assert((*__cs_cond_to_wait_for) != (-2), "attempt to use a destroyed conditional variable");
        
# 98 "<previous_module>"
__cs_mutex_unlock(__cs_m, __cs_thread_index);
        
# 99 "<previous_module>"
return 0;
}


# 102 "<previous_module>"
int __cs_cond_wait_2(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m, unsigned int __cs_thread_index)
{
        
# 103 "<previous_module>"
__CPROVER_assume((*__cs_cond_to_wait_for) == 1);
        
# 104 "<previous_module>"
__cs_mutex_lock(__cs_m, __cs_thread_index);
        
# 105 "<previous_module>"
return 0;
}


# 108 "<previous_module>"
int __cs_cond_signal(__cs_cond_t *__cs_cond_to_signal)
{
        
# 109 "<previous_module>"
*__cs_cond_to_signal = 1;
        
# 110 "<previous_module>"
__CSEQ_message("conditional variable signal");
        
# 111 "<previous_module>"
return 0;
}


# 114 "<previous_module>"
int __cs_cond_broadcast(__cs_cond_t *__cs_cond_to_broadcast)
{
        
# 115 "<previous_module>"
*__cs_cond_to_broadcast = 1;
        
# 116 "<previous_module>"
__CSEQ_message("conditional variable broadcast");
        
# 117 "<previous_module>"
return 0;
}


# 123 "<previous_module>"
typedef struct __cs_barrier_t
{
        
# 121 "<previous_module>"
unsigned int init;
        
# 122 "<previous_module>"
unsigned int current;
} __cs_barrier_t;

# 125 "<previous_module>"
int __cs_barrier_init(__cs_barrier_t *__cs_barrier_to_init, void *__cs_attr, unsigned int count)
{
        
# 126 "<previous_module>"
__CPROVER_assert(count > 0, "count must be greater than 0");
        
# 127 "<previous_module>"
__cs_barrier_to_init->current = count;
        
# 128 "<previous_module>"
__cs_barrier_to_init->init = count;
        
# 129 "<previous_module>"
return 0;
}


# 132 "<previous_module>"
int __cs_barrier_destroy(__cs_barrier_t *__cs_barrier_to_destroy)
{
        
# 133 "<previous_module>"
__cs_barrier_to_destroy->init = -1;
        
# 134 "<previous_module>"
__cs_barrier_to_destroy->current = -1;
        
# 135 "<previous_module>"
return 0;
}


# 139 "<previous_module>"
int __cs_barrier_wait_1(__cs_barrier_t *__cs_barrier_to_wait)
{
        
# 140 "<previous_module>"
__CPROVER_assert(__cs_barrier_to_wait->init > 0, "attempt to use an uninitialized barrier variable");
        
# 141 "<previous_module>"
__cs_barrier_to_wait->current--;
        
# 142 "<previous_module>"
return 0;
}


# 145 "<previous_module>"
int __cs_barrier_wait_2(__cs_barrier_t *__cs_barrier_to_wait)
{
        
# 146 "<previous_module>"
__CPROVER_assert(__cs_barrier_to_wait->init > 0, "attempt to use an uninitialized barrier variable");
        
# 147 "<previous_module>"
__CPROVER_assume(__cs_barrier_to_wait->current == 0);
        
# 148 "<previous_module>"
__cs_barrier_to_wait->current = __cs_barrier_to_wait->init;
        
# 149 "<previous_module>"
return 0;
}


# 152 "<previous_module>"
typedef int __cs_attr_t;

# 153 "<previous_module>"
struct sched_param
{
        
# 154 "<previous_module>"
int sched_priority;
};

# 156 "<previous_module>"
int __cs_attr_init(__cs_attr_t *t)
{
        return 0;
}


# 157 "<previous_module>"
int __cs_attr_destroy(__cs_attr_t *t)
{
        return 0;
}


# 158 "<previous_module>"
int __cs_attr_getdetachstate(const __cs_attr_t *t, int *s)
{
        return 0;
}


# 159 "<previous_module>"
int __cs_attr_getguardsize(const __cs_attr_t *t, unsigned int *s)
{
        return 0;
}


# 160 "<previous_module>"
int __cs_attr_getinheritsched(const __cs_attr_t *t, int *s)
{
        return 0;
}


# 161 "<previous_module>"
int __cs_attr_getschedparam(const __cs_attr_t *t, struct sched_param *s)
{
        return 0;
}


# 162 "<previous_module>"
int __cs_attr_getschedpolicy(const __cs_attr_t *t, int *s)
{
        return 0;
}


# 163 "<previous_module>"
int __cs_attr_getscope(const __cs_attr_t *t, int *s)
{
        return 0;
}


# 164 "<previous_module>"
int __cs_attr_getstackaddr(const __cs_attr_t *t, void **s)
{
        return 0;
}


# 165 "<previous_module>"
int __cs_attr_getstacksize(const __cs_attr_t *t, unsigned int *s)
{
        return 0;
}


# 166 "<previous_module>"
int __cs_attr_setdetachstate(__cs_attr_t *t, int s)
{
        return 0;
}


# 167 "<previous_module>"
int __cs_attr_setguardsize(__cs_attr_t *t, unsigned int s)
{
        return 0;
}


# 168 "<previous_module>"
int __cs_attr_setinheritsched(__cs_attr_t *t, int s)
{
        return 0;
}


# 169 "<previous_module>"
int __cs_attr_setschedparam(__cs_attr_t *t, const struct sched_param *s)
{
        return 0;
}


# 170 "<previous_module>"
int __cs_attr_setschedpolicy(__cs_attr_t *t, int s)
{
        return 0;
}


# 171 "<previous_module>"
int __cs_attr_setscope(__cs_attr_t *t, int s)
{
        return 0;
}


# 172 "<previous_module>"
int __cs_attr_setstackaddr(__cs_attr_t *t, void *s)
{
        return 0;
}


# 173 "<previous_module>"
int __cs_attr_setstacksize(__cs_attr_t *t, unsigned int s)
{
        return 0;
}


# 174 "<previous_module>"
typedef int _____STARTSTRIPPINGFROMHERE_____;

# 175 "<previous_module>"
typedef int __cs_barrier_t;

# 176 "<previous_module>"
typedef int __cs_barrierattr_t;

# 177 "<previous_module>"
typedef int __cs_attr_t;

# 178 "<previous_module>"
typedef int __cs_cond_t;

# 179 "<previous_module>"
typedef int __cs_condattr_t;

# 180 "<previous_module>"
typedef int __cs_key_t;

# 181 "<previous_module>"
typedef int __cs_mutex_t;

# 182 "<previous_module>"
typedef int __cs_mutexattr_t;

# 183 "<previous_module>"
typedef int __cs_once_t;

# 184 "<previous_module>"
typedef int __cs_rwlock_t;

# 185 "<previous_module>"
typedef int __cs_rwlockattr_t;

# 186 "<previous_module>"
typedef int __cs_t;

# 187 "<previous_module>"
typedef int size_t;

# 188 "<previous_module>"
typedef int __builtin_va_list;

# 189 "<previous_module>"
typedef int __gnuc_va_list;

# 190 "<previous_module>"
typedef int __int8_t;

# 191 "<previous_module>"
typedef int __uint8_t;

# 192 "<previous_module>"
typedef int __int16_t;

# 193 "<previous_module>"
typedef int __uint16_t;

# 194 "<previous_module>"
typedef int __int_least16_t;

# 195 "<previous_module>"
typedef int __uint_least16_t;

# 196 "<previous_module>"
typedef int __int32_t;

# 197 "<previous_module>"
typedef int __uint32_t;

# 198 "<previous_module>"
typedef int __int64_t;

# 199 "<previous_module>"
typedef int __uint64_t;

# 200 "<previous_module>"
typedef int __int_least32_t;

# 201 "<previous_module>"
typedef int __uint_least32_t;

# 202 "<previous_module>"
typedef int __s8;

# 203 "<previous_module>"
typedef int __u8;

# 204 "<previous_module>"
typedef int __s16;

# 205 "<previous_module>"
typedef int __u16;

# 206 "<previous_module>"
typedef int __s32;

# 207 "<previous_module>"
typedef int __u32;

# 208 "<previous_module>"
typedef int __s64;

# 209 "<previous_module>"
typedef int __u64;

# 210 "<previous_module>"
typedef int _LOCK_T;

# 211 "<previous_module>"
typedef int _LOCK_RECURSIVE_T;

# 212 "<previous_module>"
typedef int _off_t;

# 213 "<previous_module>"
typedef int __dev_t;

# 214 "<previous_module>"
typedef int __uid_t;

# 215 "<previous_module>"
typedef int __gid_t;

# 216 "<previous_module>"
typedef int _off64_t;

# 217 "<previous_module>"
typedef int _fpos_t;

# 218 "<previous_module>"
typedef int _ssize_t;

# 219 "<previous_module>"
typedef int wint_t;

# 220 "<previous_module>"
typedef int _mbstate_t;

# 221 "<previous_module>"
typedef int _flock_t;

# 222 "<previous_module>"
typedef int _iconv_t;

# 223 "<previous_module>"
typedef int __ULong;

# 224 "<previous_module>"
typedef int __FILE;

# 225 "<previous_module>"
typedef int ptrdiff_t;

# 226 "<previous_module>"
typedef int wchar_t;

# 227 "<previous_module>"
typedef int __off_t;

# 228 "<previous_module>"
typedef int __pid_t;

# 229 "<previous_module>"
typedef int __loff_t;

# 230 "<previous_module>"
typedef int u_char;

# 231 "<previous_module>"
typedef int u_short;

# 232 "<previous_module>"
typedef int u_int;

# 233 "<previous_module>"
typedef int u_long;

# 234 "<previous_module>"
typedef int ushort;

# 235 "<previous_module>"
typedef int uint;

# 236 "<previous_module>"
typedef int clock_t;

# 237 "<previous_module>"
typedef int time_t;

# 238 "<previous_module>"
typedef int daddr_t;

# 239 "<previous_module>"
typedef int caddr_t;

# 240 "<previous_module>"
typedef int ino_t;

# 241 "<previous_module>"
typedef int off_t;

# 242 "<previous_module>"
typedef int dev_t;

# 243 "<previous_module>"
typedef int uid_t;

# 244 "<previous_module>"
typedef int gid_t;

# 245 "<previous_module>"
typedef int pid_t;

# 246 "<previous_module>"
typedef int key_t;

# 247 "<previous_module>"
typedef int ssize_t;

# 248 "<previous_module>"
typedef int mode_t;

# 249 "<previous_module>"
typedef int nlink_t;

# 250 "<previous_module>"
typedef int fd_mask;

# 251 "<previous_module>"
typedef int _types_fd_set;

# 252 "<previous_module>"
typedef int fd_set;

# 253 "<previous_module>"
typedef int clockid_t;

# 254 "<previous_module>"
typedef int timer_t;

# 255 "<previous_module>"
typedef int useconds_t;

# 256 "<previous_module>"
typedef int suseconds_t;

# 257 "<previous_module>"
typedef int FILE;

# 258 "<previous_module>"
typedef int fpos_t;

# 259 "<previous_module>"
typedef int cookie_read_function_t;

# 260 "<previous_module>"
typedef int cookie_write_function_t;

# 261 "<previous_module>"
typedef int cookie_seek_function_t;

# 262 "<previous_module>"
typedef int cookie_close_function_t;

# 263 "<previous_module>"
typedef int cookie_io_functions_t;

# 264 "<previous_module>"
typedef int div_t;

# 265 "<previous_module>"
typedef int ldiv_t;

# 266 "<previous_module>"
typedef int lldiv_t;

# 267 "<previous_module>"
typedef int sigset_t;

# 268 "<previous_module>"
typedef int __sigset_t;

# 269 "<previous_module>"
typedef int _sig_func_ptr;

# 270 "<previous_module>"
typedef int sig_atomic_t;

# 271 "<previous_module>"
typedef int __tzrule_type;

# 272 "<previous_module>"
typedef int __tzinfo_type;

# 273 "<previous_module>"
typedef int mbstate_t;

# 274 "<previous_module>"
typedef int sem_t;

# 275 "<previous_module>"
typedef int pthread_t;

# 276 "<previous_module>"
typedef int pthread_attr_t;

# 277 "<previous_module>"
typedef int pthread_mutex_t;

# 278 "<previous_module>"
typedef int pthread_mutexattr_t;

# 279 "<previous_module>"
typedef int pthread_cond_t;

# 280 "<previous_module>"
typedef int pthread_condattr_t;

# 281 "<previous_module>"
typedef int pthread_key_t;

# 282 "<previous_module>"
typedef int pthread_once_t;

# 283 "<previous_module>"
typedef int pthread_rwlock_t;

# 284 "<previous_module>"
typedef int pthread_rwlockattr_t;

# 285 "<previous_module>"
typedef int pthread_spinlock_t;

# 286 "<previous_module>"
typedef int pthread_barrier_t;

# 287 "<previous_module>"
typedef int pthread_barrierattr_t;

# 288 "<previous_module>"
typedef int jmp_buf;

# 289 "<previous_module>"
typedef int rlim_t;

# 290 "<previous_module>"
typedef int sa_family_t;

# 291 "<previous_module>"
typedef int sigjmp_buf;

# 292 "<previous_module>"
typedef int stack_t;

# 293 "<previous_module>"
typedef int siginfo_t;

# 294 "<previous_module>"
typedef int z_stream;

# 295 "<previous_module>"
typedef int int8_t;

# 296 "<previous_module>"
typedef int uint8_t;

# 297 "<previous_module>"
typedef int int16_t;

# 298 "<previous_module>"
typedef int uint16_t;

# 299 "<previous_module>"
typedef int int32_t;

# 300 "<previous_module>"
typedef int uint32_t;

# 301 "<previous_module>"
typedef int int64_t;

# 302 "<previous_module>"
typedef int uint64_t;

# 303 "<previous_module>"
typedef int int_least8_t;

# 304 "<previous_module>"
typedef int uint_least8_t;

# 305 "<previous_module>"
typedef int int_least16_t;

# 306 "<previous_module>"
typedef int uint_least16_t;

# 307 "<previous_module>"
typedef int int_least32_t;

# 308 "<previous_module>"
typedef int uint_least32_t;

# 309 "<previous_module>"
typedef int int_least64_t;

# 310 "<previous_module>"
typedef int uint_least64_t;

# 311 "<previous_module>"
typedef int int_fast8_t;

# 312 "<previous_module>"
typedef int uint_fast8_t;

# 313 "<previous_module>"
typedef int int_fast16_t;

# 314 "<previous_module>"
typedef int uint_fast16_t;

# 315 "<previous_module>"
typedef int int_fast32_t;

# 316 "<previous_module>"
typedef int uint_fast32_t;

# 317 "<previous_module>"
typedef int int_fast64_t;

# 318 "<previous_module>"
typedef int uint_fast64_t;

# 319 "<previous_module>"
typedef int intptr_t;

# 320 "<previous_module>"
typedef int uintptr_t;

# 321 "<previous_module>"
typedef int intmax_t;

# 322 "<previous_module>"
typedef int uintmax_t;

# 323 "<previous_module>"
typedef _Bool bool;

# 324 "<previous_module>"
typedef void BZFILE;

# 325 "<previous_module>"
typedef int va_list;

# 326 "<previous_module>"
typedef int loff_t;

# 327 "<previous_module>"
typedef int _____STOPSTRIPPINGFROMHERE_____;

# 328 "<previous_module>"
struct lstack_node
{
        
# 330 "<previous_module>"
int value;
        
# 331 "<previous_module>"
struct lstack_node *next;
};

# 333 "<previous_module>"
struct lstack_head
{
        
# 335 "<previous_module>"
unsigned int aba;
        
# 336 "<previous_module>"
struct lstack_node *node;
};

# 344 "<previous_module>"
typedef struct anonstruct_0
{
        
# 340 "<previous_module>"
struct lstack_node *node_buffer;
        
# 341 "<previous_module>"
struct lstack_head head;
        
# 342 "<previous_module>"
struct lstack_head free;
        
# 343 "<previous_module>"
int size;
} lstack_t;

# 345 "<previous_module>"
lstack_t results;

# 346 "<previous_module>"
int __CSEQ_atomic_fetch_add(int *__cs_param___CSEQ_atomic_fetch_add_obj, int __cs_param___CSEQ_atomic_fetch_add_v)

# 347 "<previous_module>"
{
        
# 348 "<previous_module>"
static int __cs_local___CSEQ_atomic_fetch_add_old;
        
# 349 "<previous_module>"
__cs_local___CSEQ_atomic_fetch_add_old = *__cs_param___CSEQ_atomic_fetch_add_obj;
        
# 350 "<previous_module>"
*__cs_param___CSEQ_atomic_fetch_add_obj = (*__cs_param___CSEQ_atomic_fetch_add_obj) + __cs_param___CSEQ_atomic_fetch_add_v;
        
# 351 "<previous_module>"
return __cs_local___CSEQ_atomic_fetch_add_old;
        ;
}


# 353 "<previous_module>"
int __CSEQ_atomic_fetch_sub(int *__cs_param___CSEQ_atomic_fetch_sub_obj, int __cs_param___CSEQ_atomic_fetch_sub_v)

# 354 "<previous_module>"
{
        
# 355 "<previous_module>"
static int __cs_local___CSEQ_atomic_fetch_sub_old;
        
# 356 "<previous_module>"
__cs_local___CSEQ_atomic_fetch_sub_old = *__cs_param___CSEQ_atomic_fetch_sub_obj;
        
# 357 "<previous_module>"
*__cs_param___CSEQ_atomic_fetch_sub_obj = (*__cs_param___CSEQ_atomic_fetch_sub_obj) - __cs_param___CSEQ_atomic_fetch_sub_v;
        
# 358 "<previous_module>"
return __cs_local___CSEQ_atomic_fetch_sub_old;
        ;
}


# 360 "<previous_module>"
void *worker_0(void *__cs_param_worker_arg)

# 361 "<previous_module>"
{
        
# 362 "<previous_module>"
static int __cs_local_worker_thread;
        
# 363 "<previous_module>"
IF(1,0,tworker_0_1)__CSEQ_removeindent;
        
# 364 "<previous_module>"
__cs_local_worker_thread = (int) __cs_param_worker_arg;
        
# 365 "<previous_module>"
static int __cs_local_worker_valore[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        
# 366 "<previous_module>"
static int *__cs_local_worker_valore_restituito;
        
# 367 "<previous_module>"
tworker_0_1: IF(1,1,tworker_0_2)__CSEQ_removeindent;
        
# 368 "<previous_module>"
__cs_local_worker_valore_restituito = (int *) __cs_safe_malloc((sizeof(int)) * 10);
        
# 369 "<previous_module>"
static int __cs_retval__lstack_push_1;

# 370 "<previous_module>"
        {
                
# 371 "<previous_module>"
static int __cs_param_lstack_push_value;
                
# 372 "<previous_module>"
__cs_param_lstack_push_value = __cs_local_worker_valore[0] + ((__cs_local_worker_thread - 1) * 10);
                
# 373 "<previous_module>"
static struct lstack_node *__cs_local_lstack_push_node;
                
# 374 "<previous_module>"
static struct lstack_node *__cs_retval__pop_1;

# 375 "<previous_module>"
                {
                        
# 376 "<previous_module>"
static struct lstack_head *__cs_param_pop_head;
                        
# 377 "<previous_module>"
tworker_0_2: IF(1,2,tworker_0_3)__CSEQ_removeindent;
                        
# 378 "<previous_module>"
__cs_param_pop_head = &results.free;
                        
# 379 "<previous_module>"
static struct lstack_head __cs_local_pop_next;
                        
# 380 "<previous_module>"
static struct lstack_head __cs_local_pop_orig;
                        
# 381 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_1;

# 382 "<previous_module>"
                        {
                                
# 383 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 384 "<previous_module>"
tworker_0_3: IF(1,3,tworker_0_4)__CSEQ_removeindent;
                                
# 385 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                                
# 386 "<previous_module>"
tworker_0_4: IF(1,4,tworker_0_5)__CSEQ_removeindent;
                                
# 387 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_1 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 388 "<previous_module>"
goto __exit____VERIFIER_load_Struct_1;
                                ;
                                
# 389 "<previous_module>"
__exit____VERIFIER_load_Struct_1:
                                __CPROVER_assume(__cs_pc_cs[1] >= 5);

                                
# 390 "<previous_module>"
;
                                ;
                        }
                        
# 392 "<previous_module>"
;
                        
# 393 "<previous_module>"
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_1;
                        
# 394 "<previous_module>"
;
                        ;
                        
# 395 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
                        
# 396 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
                        
# 397 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_2)

# 398 "<previous_module>"
                        {
                                
# 399 "<previous_module>"
tworker_0_5: IF(1,5,tworker_0_6)__CSEQ_removeindent;
                                
# 400 "<previous_module>"
__cs_retval__pop_1 = 0;
                                
# 401 "<previous_module>"
goto __exit__pop_1;
                                ;
                        }

                        
# 403 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 6);
                        ;
                        
# 404 "<previous_module>"
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
                        
# 405 "<previous_module>"
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
                        
# 406 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_1;

# 407 "<previous_module>"
                        {
                                
# 408 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 409 "<previous_module>"
tworker_0_6: IF(1,6,tworker_0_7)__CSEQ_removeindent;
                                
# 410 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                                
# 411 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 412 "<previous_module>"
tworker_0_7: IF(1,7,tworker_0_8)__CSEQ_removeindent;
                                
# 413 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                                
# 414 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 415 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                                
# 416 "<previous_module>"
;
                                ;
                                
# 417 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 418 "<previous_module>"
tworker_0_8: IF(1,8,tworker_0_9)__CSEQ_removeindent;
                                
# 419 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 420 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 421 "<previous_module>"
                                {
                                        
# 422 "<previous_module>"
tworker_0_9: IF(1,9,tworker_0_10)__CSEQ_removeindent;
                                        
# 423 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 424 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_1 = 1;
                                        
# 425 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_1;
                                        ;
                                }
                                else

# 428 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[1] >= 10);
                                        
# 429 "<previous_module>"
tworker_0_10: IF(1,10,tworker_0_11)__CSEQ_removeindent;
                                        
# 430 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 431 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_1 = 0;
                                        
# 432 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_1;
                                        ;
                                }

                                
# 434 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 11);
                                ;
                                
# 435 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_1:
                                __CPROVER_assume(__cs_pc_cs[1] >= 11);

                                
# 436 "<previous_module>"
;
                                ;
                        }
                        
# 438 "<previous_module>"
;
                        
# 439 "<previous_module>"
tworker_0_11: IF(1,11,tworker_0_12)__CSEQ_removeindent;
                        
# 440 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_1);
                        
# 441 "<previous_module>"
tworker_0_12: IF(1,12,tworker_0_13)__CSEQ_removeindent;
                        
# 442 "<previous_module>"
__cs_retval__pop_1 = __cs_local_pop_orig.node;
                        
# 443 "<previous_module>"
goto __exit__pop_1;
                        ;
                        
# 444 "<previous_module>"
__exit__pop_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 13);

                        
# 445 "<previous_module>"
;
                        ;
                }
                
# 447 "<previous_module>"
;
                
# 448 "<previous_module>"
tworker_0_13: IF(1,13,tworker_0_14)__CSEQ_removeindent;
                
# 449 "<previous_module>"
__cs_local_lstack_push_node = __cs_retval__pop_1;
                
# 450 "<previous_module>"
;
                ;
                
# 451 "<previous_module>"
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
                
# 452 "<previous_module>"
tworker_0_14: IF(1,14,tworker_0_15)__CSEQ_removeindent;
                
# 453 "<previous_module>"
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
                
# 454 "<previous_module>"
if (__cs_local_lstack_push___cs_tmp_if_cond_3)

# 455 "<previous_module>"
                {
                        
# 456 "<previous_module>"
__cs_retval__lstack_push_1 = ENOMEM;
                        
# 457 "<previous_module>"
goto __exit__lstack_push_1;
                        ;
                }

                
# 459 "<previous_module>"
;
                
# 460 "<previous_module>"
tworker_0_15: IF(1,15,tworker_0_16)__CSEQ_removeindent;
                
# 461 "<previous_module>"
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;

# 462 "<previous_module>"
                {
                        
# 463 "<previous_module>"
static struct lstack_head *__cs_param_push_head;
                        
# 464 "<previous_module>"
tworker_0_16: IF(1,16,tworker_0_17)__CSEQ_removeindent;
                        
# 465 "<previous_module>"
__cs_param_push_head = &results.head;
                        
# 466 "<previous_module>"
static struct lstack_node *__cs_param_push_node;
                        
# 467 "<previous_module>"
tworker_0_17: IF(1,17,tworker_0_18)__CSEQ_removeindent;
                        
# 468 "<previous_module>"
__cs_param_push_node = __cs_local_lstack_push_node;
                        
# 469 "<previous_module>"
static struct lstack_head __cs_local_push_next;
                        
# 470 "<previous_module>"
static struct lstack_head __cs_local_push_orig;
                        
# 471 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_2;

# 472 "<previous_module>"
                        {
                                
# 473 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 474 "<previous_module>"
tworker_0_18: IF(1,18,tworker_0_19)__CSEQ_removeindent;
                                
# 475 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                                
# 476 "<previous_module>"
tworker_0_19: IF(1,19,tworker_0_20)__CSEQ_removeindent;
                                
# 477 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_2 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 478 "<previous_module>"
goto __exit____VERIFIER_load_Struct_2;
                                ;
                                
# 479 "<previous_module>"
__exit____VERIFIER_load_Struct_2:
                                __CPROVER_assume(__cs_pc_cs[1] >= 20);

                                
# 480 "<previous_module>"
;
                                ;
                        }
                        
# 482 "<previous_module>"
;
                        
# 483 "<previous_module>"
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_2;
                        
# 484 "<previous_module>"
tworker_0_20: IF(1,20,tworker_0_21)__CSEQ_removeindent;
                        
# 485 "<previous_module>"
(*__cs_param_push_node).next = __cs_local_push_orig.node;
                        
# 486 "<previous_module>"
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
                        
# 487 "<previous_module>"
tworker_0_21: IF(1,21,tworker_0_22)__CSEQ_removeindent;
                        
# 488 "<previous_module>"
__cs_local_push_next.node = __cs_param_push_node;
                        
# 489 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_2;

# 490 "<previous_module>"
                        {
                                
# 491 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 492 "<previous_module>"
tworker_0_22: IF(1,22,tworker_0_23)__CSEQ_removeindent;
                                
# 493 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                                
# 494 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 495 "<previous_module>"
tworker_0_23: IF(1,23,tworker_0_24)__CSEQ_removeindent;
                                
# 496 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                                
# 497 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 498 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                                
# 499 "<previous_module>"
;
                                ;
                                
# 500 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 501 "<previous_module>"
tworker_0_24: IF(1,24,tworker_0_25)__CSEQ_removeindent;
                                
# 502 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 503 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 504 "<previous_module>"
                                {
                                        
# 505 "<previous_module>"
tworker_0_25: IF(1,25,tworker_0_26)__CSEQ_removeindent;
                                        
# 506 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 507 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_2 = 1;
                                        
# 508 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_2;
                                        ;
                                }
                                else

# 511 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[1] >= 26);
                                        
# 512 "<previous_module>"
tworker_0_26: IF(1,26,tworker_0_27)__CSEQ_removeindent;
                                        
# 513 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 514 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_2 = 0;
                                        
# 515 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_2;
                                        ;
                                }

                                
# 517 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 27);
                                ;
                                
# 518 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_2:
                                __CPROVER_assume(__cs_pc_cs[1] >= 27);

                                
# 519 "<previous_module>"
;
                                ;
                        }
                        
# 521 "<previous_module>"
;
                        
# 522 "<previous_module>"
tworker_0_27: IF(1,27,tworker_0_28)__CSEQ_removeindent;
                        
# 523 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_2);
                        
# 524 "<previous_module>"
__exit__push_1:
                        __CPROVER_assume(__cs_pc_cs[1] >= 28);

                        
# 525 "<previous_module>"
;
                        ;
                }
                
# 527 "<previous_module>"
;
                
# 528 "<previous_module>"
tworker_0_28: IF(1,28,tworker_0_29)__CSEQ_removeindent;
                
# 529 "<previous_module>"
__CSEQ_atomic_fetch_add(&results.size, 1);
                
# 530 "<previous_module>"
__cs_retval__lstack_push_1 = 0;
                
# 531 "<previous_module>"
goto __exit__lstack_push_1;
                ;
                
# 532 "<previous_module>"
__exit__lstack_push_1:
                __CPROVER_assume(__cs_pc_cs[1] >= 29);

                
# 533 "<previous_module>"
;
                ;
        }
        
# 535 "<previous_module>"
;
        
# 536 "<previous_module>"
__cs_retval__lstack_push_1;
        
# 537 "<previous_module>"
static int __cs_retval__lstack_pop_1;

# 538 "<previous_module>"
        {
                
# 539 "<previous_module>"
static struct lstack_node *__cs_local_lstack_pop_node;
                
# 540 "<previous_module>"
static struct lstack_node *__cs_retval__pop_2;

# 541 "<previous_module>"
                {
                        
# 542 "<previous_module>"
static struct lstack_head *__cs_param_pop_head;
                        
# 543 "<previous_module>"
tworker_0_29: IF(1,29,tworker_0_30)__CSEQ_removeindent;
                        
# 544 "<previous_module>"
__cs_param_pop_head = &results.head;
                        
# 545 "<previous_module>"
static struct lstack_head __cs_local_pop_next;
                        
# 546 "<previous_module>"
static struct lstack_head __cs_local_pop_orig;
                        
# 547 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_3;

# 548 "<previous_module>"
                        {
                                
# 549 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 550 "<previous_module>"
tworker_0_30: IF(1,30,tworker_0_31)__CSEQ_removeindent;
                                
# 551 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                                
# 552 "<previous_module>"
tworker_0_31: IF(1,31,tworker_0_32)__CSEQ_removeindent;
                                
# 553 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_3 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 554 "<previous_module>"
goto __exit____VERIFIER_load_Struct_3;
                                ;
                                
# 555 "<previous_module>"
__exit____VERIFIER_load_Struct_3:
                                __CPROVER_assume(__cs_pc_cs[1] >= 32);

                                
# 556 "<previous_module>"
;
                                ;
                        }
                        
# 558 "<previous_module>"
;
                        
# 559 "<previous_module>"
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_3;
                        
# 560 "<previous_module>"
;
                        ;
                        
# 561 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
                        
# 562 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
                        
# 563 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_2)

# 564 "<previous_module>"
                        {
                                
# 565 "<previous_module>"
tworker_0_32: IF(1,32,tworker_0_33)__CSEQ_removeindent;
                                
# 566 "<previous_module>"
__cs_retval__pop_2 = 0;
                                
# 567 "<previous_module>"
goto __exit__pop_2;
                                ;
                        }

                        
# 569 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 33);
                        ;
                        
# 570 "<previous_module>"
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
                        
# 571 "<previous_module>"
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
                        
# 572 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_3;

# 573 "<previous_module>"
                        {
                                
# 574 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 575 "<previous_module>"
tworker_0_33: IF(1,33,tworker_0_34)__CSEQ_removeindent;
                                
# 576 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                                
# 577 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 578 "<previous_module>"
tworker_0_34: IF(1,34,tworker_0_35)__CSEQ_removeindent;
                                
# 579 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                                
# 580 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 581 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                                
# 582 "<previous_module>"
;
                                ;
                                
# 583 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 584 "<previous_module>"
tworker_0_35: IF(1,35,tworker_0_36)__CSEQ_removeindent;
                                
# 585 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 586 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 587 "<previous_module>"
                                {
                                        
# 588 "<previous_module>"
tworker_0_36: IF(1,36,tworker_0_37)__CSEQ_removeindent;
                                        
# 589 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 590 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_3 = 1;
                                        
# 591 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_3;
                                        ;
                                }
                                else

# 594 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[1] >= 37);
                                        
# 595 "<previous_module>"
tworker_0_37: IF(1,37,tworker_0_38)__CSEQ_removeindent;
                                        
# 596 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 597 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_3 = 0;
                                        
# 598 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_3;
                                        ;
                                }

                                
# 600 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 38);
                                ;
                                
# 601 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_3:
                                __CPROVER_assume(__cs_pc_cs[1] >= 38);

                                
# 602 "<previous_module>"
;
                                ;
                        }
                        
# 604 "<previous_module>"
;
                        
# 605 "<previous_module>"
tworker_0_38: IF(1,38,tworker_0_39)__CSEQ_removeindent;
                        
# 606 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_3);
                        
# 607 "<previous_module>"
tworker_0_39: IF(1,39,tworker_0_40)__CSEQ_removeindent;
                        
# 608 "<previous_module>"
__cs_retval__pop_2 = __cs_local_pop_orig.node;
                        
# 609 "<previous_module>"
goto __exit__pop_2;
                        ;
                        
# 610 "<previous_module>"
__exit__pop_2:
                        __CPROVER_assume(__cs_pc_cs[1] >= 40);

                        
# 611 "<previous_module>"
;
                        ;
                }
                
# 613 "<previous_module>"
;
                
# 614 "<previous_module>"
tworker_0_40: IF(1,40,tworker_0_41)__CSEQ_removeindent;
                
# 615 "<previous_module>"
__cs_local_lstack_pop_node = __cs_retval__pop_2;
                
# 616 "<previous_module>"
;
                ;
                
# 617 "<previous_module>"
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
                
# 618 "<previous_module>"
tworker_0_41: IF(1,41,tworker_0_42)__CSEQ_removeindent;
                
# 619 "<previous_module>"
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
                
# 620 "<previous_module>"
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)

# 621 "<previous_module>"
                {
                        
# 622 "<previous_module>"
__cs_retval__lstack_pop_1 = 0;
                        
# 623 "<previous_module>"
goto __exit__lstack_pop_1;
                        ;
                }

                
# 625 "<previous_module>"
;
                
# 626 "<previous_module>"
tworker_0_42: IF(1,42,tworker_0_43)__CSEQ_removeindent;
                
# 627 "<previous_module>"
__CSEQ_atomic_fetch_sub(&results.size, 1);
                
# 628 "<previous_module>"
static int __cs_local_lstack_pop_value;
                
# 629 "<previous_module>"
tworker_0_43: IF(1,43,tworker_0_44)__CSEQ_removeindent;
                
# 630 "<previous_module>"
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;

# 631 "<previous_module>"
                {
                        
# 632 "<previous_module>"
static struct lstack_head *__cs_param_push_head;
                        
# 633 "<previous_module>"
tworker_0_44: IF(1,44,tworker_0_45)__CSEQ_removeindent;
                        
# 634 "<previous_module>"
__cs_param_push_head = &results.free;
                        
# 635 "<previous_module>"
static struct lstack_node *__cs_param_push_node;
                        
# 636 "<previous_module>"
tworker_0_45: IF(1,45,tworker_0_46)__CSEQ_removeindent;
                        
# 637 "<previous_module>"
__cs_param_push_node = __cs_local_lstack_pop_node;
                        
# 638 "<previous_module>"
static struct lstack_head __cs_local_push_next;
                        
# 639 "<previous_module>"
static struct lstack_head __cs_local_push_orig;
                        
# 640 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_4;

# 641 "<previous_module>"
                        {
                                
# 642 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 643 "<previous_module>"
tworker_0_46: IF(1,46,tworker_0_47)__CSEQ_removeindent;
                                
# 644 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                                
# 645 "<previous_module>"
tworker_0_47: IF(1,47,tworker_0_48)__CSEQ_removeindent;
                                
# 646 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_4 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 647 "<previous_module>"
goto __exit____VERIFIER_load_Struct_4;
                                ;
                                
# 648 "<previous_module>"
__exit____VERIFIER_load_Struct_4:
                                __CPROVER_assume(__cs_pc_cs[1] >= 48);

                                
# 649 "<previous_module>"
;
                                ;
                        }
                        
# 651 "<previous_module>"
;
                        
# 652 "<previous_module>"
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_4;
                        
# 653 "<previous_module>"
tworker_0_48: IF(1,48,tworker_0_49)__CSEQ_removeindent;
                        
# 654 "<previous_module>"
(*__cs_param_push_node).next = __cs_local_push_orig.node;
                        
# 655 "<previous_module>"
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
                        
# 656 "<previous_module>"
tworker_0_49: IF(1,49,tworker_0_50)__CSEQ_removeindent;
                        
# 657 "<previous_module>"
__cs_local_push_next.node = __cs_param_push_node;
                        
# 658 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_4;

# 659 "<previous_module>"
                        {
                                
# 660 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 661 "<previous_module>"
tworker_0_50: IF(1,50,tworker_0_51)__CSEQ_removeindent;
                                
# 662 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                                
# 663 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 664 "<previous_module>"
tworker_0_51: IF(1,51,tworker_0_52)__CSEQ_removeindent;
                                
# 665 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                                
# 666 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 667 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                                
# 668 "<previous_module>"
;
                                ;
                                
# 669 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 670 "<previous_module>"
tworker_0_52: IF(1,52,tworker_0_53)__CSEQ_removeindent;
                                
# 671 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 672 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 673 "<previous_module>"
                                {
                                        
# 674 "<previous_module>"
tworker_0_53: IF(1,53,tworker_0_54)__CSEQ_removeindent;
                                        
# 675 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 676 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_4 = 1;
                                        
# 677 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_4;
                                        ;
                                }
                                else

# 680 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[1] >= 54);
                                        
# 681 "<previous_module>"
tworker_0_54: IF(1,54,tworker_0_55)__CSEQ_removeindent;
                                        
# 682 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 683 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_4 = 0;
                                        
# 684 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_4;
                                        ;
                                }

                                
# 686 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 55);
                                ;
                                
# 687 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_4:
                                __CPROVER_assume(__cs_pc_cs[1] >= 55);

                                
# 688 "<previous_module>"
;
                                ;
                        }
                        
# 690 "<previous_module>"
;
                        
# 691 "<previous_module>"
tworker_0_55: IF(1,55,tworker_0_56)__CSEQ_removeindent;
                        
# 692 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_4);
                        
# 693 "<previous_module>"
__exit__push_2:
                        __CPROVER_assume(__cs_pc_cs[1] >= 56);

                        
# 694 "<previous_module>"
;
                        ;
                }
                
# 696 "<previous_module>"
;
                
# 697 "<previous_module>"
__cs_retval__lstack_pop_1 = __cs_local_lstack_pop_value;
                
# 698 "<previous_module>"
goto __exit__lstack_pop_1;
                ;
                
# 699 "<previous_module>"
__exit__lstack_pop_1:
                __CPROVER_assume(__cs_pc_cs[1] >= 56);

                
# 700 "<previous_module>"
;
                ;
        }
        
# 702 "<previous_module>"
;
        
# 703 "<previous_module>"
tworker_0_56: IF(1,56,tworker_0_57)__CSEQ_removeindent;
        
# 704 "<previous_module>"
__cs_local_worker_valore_restituito[0] = __cs_retval__lstack_pop_1;
        
# 705 "<previous_module>"
static int __cs_retval__lstack_push_2;

# 706 "<previous_module>"
        {
                
# 707 "<previous_module>"
static int __cs_param_lstack_push_value;
                
# 708 "<previous_module>"
__cs_param_lstack_push_value = __cs_local_worker_valore[1] + ((__cs_local_worker_thread - 1) * 10);
                
# 709 "<previous_module>"
static struct lstack_node *__cs_local_lstack_push_node;
                
# 710 "<previous_module>"
static struct lstack_node *__cs_retval__pop_3;

# 711 "<previous_module>"
                {
                        
# 712 "<previous_module>"
static struct lstack_head *__cs_param_pop_head;
                        
# 713 "<previous_module>"
tworker_0_57: IF(1,57,tworker_0_58)__CSEQ_removeindent;
                        
# 714 "<previous_module>"
__cs_param_pop_head = &results.free;
                        
# 715 "<previous_module>"
static struct lstack_head __cs_local_pop_next;
                        
# 716 "<previous_module>"
static struct lstack_head __cs_local_pop_orig;
                        
# 717 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_5;

# 718 "<previous_module>"
                        {
                                
# 719 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 720 "<previous_module>"
tworker_0_58: IF(1,58,tworker_0_59)__CSEQ_removeindent;
                                
# 721 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                                
# 722 "<previous_module>"
tworker_0_59: IF(1,59,tworker_0_60)__CSEQ_removeindent;
                                
# 723 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_5 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 724 "<previous_module>"
goto __exit____VERIFIER_load_Struct_5;
                                ;
                                
# 725 "<previous_module>"
__exit____VERIFIER_load_Struct_5:
                                __CPROVER_assume(__cs_pc_cs[1] >= 60);

                                
# 726 "<previous_module>"
;
                                ;
                        }
                        
# 728 "<previous_module>"
;
                        
# 729 "<previous_module>"
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_5;
                        
# 730 "<previous_module>"
;
                        ;
                        
# 731 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
                        
# 732 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
                        
# 733 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_2)

# 734 "<previous_module>"
                        {
                                
# 735 "<previous_module>"
tworker_0_60: IF(1,60,tworker_0_61)__CSEQ_removeindent;
                                
# 736 "<previous_module>"
__cs_retval__pop_3 = 0;
                                
# 737 "<previous_module>"
goto __exit__pop_3;
                                ;
                        }

                        
# 739 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 61);
                        ;
                        
# 740 "<previous_module>"
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
                        
# 741 "<previous_module>"
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
                        
# 742 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_5;

# 743 "<previous_module>"
                        {
                                
# 744 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 745 "<previous_module>"
tworker_0_61: IF(1,61,tworker_0_62)__CSEQ_removeindent;
                                
# 746 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                                
# 747 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 748 "<previous_module>"
tworker_0_62: IF(1,62,tworker_0_63)__CSEQ_removeindent;
                                
# 749 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                                
# 750 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 751 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                                
# 752 "<previous_module>"
;
                                ;
                                
# 753 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 754 "<previous_module>"
tworker_0_63: IF(1,63,tworker_0_64)__CSEQ_removeindent;
                                
# 755 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 756 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 757 "<previous_module>"
                                {
                                        
# 758 "<previous_module>"
tworker_0_64: IF(1,64,tworker_0_65)__CSEQ_removeindent;
                                        
# 759 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 760 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_5 = 1;
                                        
# 761 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_5;
                                        ;
                                }
                                else

# 764 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[1] >= 65);
                                        
# 765 "<previous_module>"
tworker_0_65: IF(1,65,tworker_0_66)__CSEQ_removeindent;
                                        
# 766 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 767 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_5 = 0;
                                        
# 768 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_5;
                                        ;
                                }

                                
# 770 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 66);
                                ;
                                
# 771 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_5:
                                __CPROVER_assume(__cs_pc_cs[1] >= 66);

                                
# 772 "<previous_module>"
;
                                ;
                        }
                        
# 774 "<previous_module>"
;
                        
# 775 "<previous_module>"
tworker_0_66: IF(1,66,tworker_0_67)__CSEQ_removeindent;
                        
# 776 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_5);
                        
# 777 "<previous_module>"
tworker_0_67: IF(1,67,tworker_0_68)__CSEQ_removeindent;
                        
# 778 "<previous_module>"
__cs_retval__pop_3 = __cs_local_pop_orig.node;
                        
# 779 "<previous_module>"
goto __exit__pop_3;
                        ;
                        
# 780 "<previous_module>"
__exit__pop_3:
                        __CPROVER_assume(__cs_pc_cs[1] >= 68);

                        
# 781 "<previous_module>"
;
                        ;
                }
                
# 783 "<previous_module>"
;
                
# 784 "<previous_module>"
tworker_0_68: IF(1,68,tworker_0_69)__CSEQ_removeindent;
                
# 785 "<previous_module>"
__cs_local_lstack_push_node = __cs_retval__pop_3;
                
# 786 "<previous_module>"
;
                ;
                
# 787 "<previous_module>"
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
                
# 788 "<previous_module>"
tworker_0_69: IF(1,69,tworker_0_70)__CSEQ_removeindent;
                
# 789 "<previous_module>"
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
                
# 790 "<previous_module>"
if (__cs_local_lstack_push___cs_tmp_if_cond_3)

# 791 "<previous_module>"
                {
                        
# 792 "<previous_module>"
__cs_retval__lstack_push_2 = ENOMEM;
                        
# 793 "<previous_module>"
goto __exit__lstack_push_2;
                        ;
                }

                
# 795 "<previous_module>"
;
                
# 796 "<previous_module>"
tworker_0_70: IF(1,70,tworker_0_71)__CSEQ_removeindent;
                
# 797 "<previous_module>"
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;

# 798 "<previous_module>"
                {
                        
# 799 "<previous_module>"
static struct lstack_head *__cs_param_push_head;
                        
# 800 "<previous_module>"
tworker_0_71: IF(1,71,tworker_0_72)__CSEQ_removeindent;
                        
# 801 "<previous_module>"
__cs_param_push_head = &results.head;
                        
# 802 "<previous_module>"
static struct lstack_node *__cs_param_push_node;
                        
# 803 "<previous_module>"
tworker_0_72: IF(1,72,tworker_0_73)__CSEQ_removeindent;
                        
# 804 "<previous_module>"
__cs_param_push_node = __cs_local_lstack_push_node;
                        
# 805 "<previous_module>"
static struct lstack_head __cs_local_push_next;
                        
# 806 "<previous_module>"
static struct lstack_head __cs_local_push_orig;
                        
# 807 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_6;

# 808 "<previous_module>"
                        {
                                
# 809 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 810 "<previous_module>"
tworker_0_73: IF(1,73,tworker_0_74)__CSEQ_removeindent;
                                
# 811 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                                
# 812 "<previous_module>"
tworker_0_74: IF(1,74,tworker_0_75)__CSEQ_removeindent;
                                
# 813 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_6 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 814 "<previous_module>"
goto __exit____VERIFIER_load_Struct_6;
                                ;
                                
# 815 "<previous_module>"
__exit____VERIFIER_load_Struct_6:
                                __CPROVER_assume(__cs_pc_cs[1] >= 75);

                                
# 816 "<previous_module>"
;
                                ;
                        }
                        
# 818 "<previous_module>"
;
                        
# 819 "<previous_module>"
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_6;
                        
# 820 "<previous_module>"
tworker_0_75: IF(1,75,tworker_0_76)__CSEQ_removeindent;
                        
# 821 "<previous_module>"
(*__cs_param_push_node).next = __cs_local_push_orig.node;
                        
# 822 "<previous_module>"
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
                        
# 823 "<previous_module>"
tworker_0_76: IF(1,76,tworker_0_77)__CSEQ_removeindent;
                        
# 824 "<previous_module>"
__cs_local_push_next.node = __cs_param_push_node;
                        
# 825 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_6;

# 826 "<previous_module>"
                        {
                                
# 827 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 828 "<previous_module>"
tworker_0_77: IF(1,77,tworker_0_78)__CSEQ_removeindent;
                                
# 829 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                                
# 830 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 831 "<previous_module>"
tworker_0_78: IF(1,78,tworker_0_79)__CSEQ_removeindent;
                                
# 832 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                                
# 833 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 834 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                                
# 835 "<previous_module>"
;
                                ;
                                
# 836 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 837 "<previous_module>"
tworker_0_79: IF(1,79,tworker_0_80)__CSEQ_removeindent;
                                
# 838 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 839 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 840 "<previous_module>"
                                {
                                        
# 841 "<previous_module>"
tworker_0_80: IF(1,80,tworker_0_81)__CSEQ_removeindent;
                                        
# 842 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 843 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_6 = 1;
                                        
# 844 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_6;
                                        ;
                                }
                                else

# 847 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[1] >= 81);
                                        
# 848 "<previous_module>"
tworker_0_81: IF(1,81,tworker_0_82)__CSEQ_removeindent;
                                        
# 849 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 850 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_6 = 0;
                                        
# 851 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_6;
                                        ;
                                }

                                
# 853 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= 82);
                                ;
                                
# 854 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_6:
                                __CPROVER_assume(__cs_pc_cs[1] >= 82);

                                
# 855 "<previous_module>"
;
                                ;
                        }
                        
# 857 "<previous_module>"
;
                        
# 858 "<previous_module>"
tworker_0_82: IF(1,82,tworker_0_83)__CSEQ_removeindent;
                        
# 859 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_6);
                        
# 860 "<previous_module>"
__exit__push_3:
                        __CPROVER_assume(__cs_pc_cs[1] >= 83);

                        
# 861 "<previous_module>"
;
                        ;
                }
                
# 863 "<previous_module>"
;
                
# 864 "<previous_module>"
tworker_0_83: IF(1,83,tworker_0_84)__CSEQ_removeindent;
                
# 865 "<previous_module>"
__CSEQ_atomic_fetch_add(&results.size, 1);
                
# 866 "<previous_module>"
__cs_retval__lstack_push_2 = 0;
                
# 867 "<previous_module>"
goto __exit__lstack_push_2;
                ;
                
# 868 "<previous_module>"
__exit__lstack_push_2:
                __CPROVER_assume(__cs_pc_cs[1] >= 84);

                
# 869 "<previous_module>"
;
                ;
        }
        
# 871 "<previous_module>"
;
        
# 872 "<previous_module>"
__cs_retval__lstack_push_2;
        
# 873 "<previous_module>"
goto __exit_worker;
        ;
        
# 874 "<previous_module>"
__exit_worker:
        __CPROVER_assume(__cs_pc_cs[1] >= 84);

        
# 875 "<previous_module>"
;
        ;
        
# 876 "<previous_module>"
tworker_0_84: __CSEQ_removeindent;
        
# 877 "<previous_module>"
__cs_exit(0, 1);
}


# 879 "<previous_module>"
void *worker_1(void *__cs_param_worker_arg)

# 880 "<previous_module>"
{
        
# 881 "<previous_module>"
static int __cs_local_worker_thread;
        
# 882 "<previous_module>"
IF(2,0,tworker_1_1)__CSEQ_removeindent;
        
# 883 "<previous_module>"
__cs_local_worker_thread = (int) __cs_param_worker_arg;
        
# 884 "<previous_module>"
static int __cs_local_worker_valore[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        
# 885 "<previous_module>"
static int *__cs_local_worker_valore_restituito;
        
# 886 "<previous_module>"
tworker_1_1: IF(2,1,tworker_1_2)__CSEQ_removeindent;
        
# 887 "<previous_module>"
__cs_local_worker_valore_restituito = (int *) __cs_safe_malloc((sizeof(int)) * 10);
        
# 888 "<previous_module>"
static int __cs_retval__lstack_push_1;

# 889 "<previous_module>"
        {
                
# 890 "<previous_module>"
static int __cs_param_lstack_push_value;
                
# 891 "<previous_module>"
__cs_param_lstack_push_value = __cs_local_worker_valore[0] + ((__cs_local_worker_thread - 1) * 10);
                
# 892 "<previous_module>"
static struct lstack_node *__cs_local_lstack_push_node;
                
# 893 "<previous_module>"
static struct lstack_node *__cs_retval__pop_1;

# 894 "<previous_module>"
                {
                        
# 895 "<previous_module>"
static struct lstack_head *__cs_param_pop_head;
                        
# 896 "<previous_module>"
tworker_1_2: IF(2,2,tworker_1_3)__CSEQ_removeindent;
                        
# 897 "<previous_module>"
__cs_param_pop_head = &results.free;
                        
# 898 "<previous_module>"
static struct lstack_head __cs_local_pop_next;
                        
# 899 "<previous_module>"
static struct lstack_head __cs_local_pop_orig;
                        
# 900 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_1;

# 901 "<previous_module>"
                        {
                                
# 902 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 903 "<previous_module>"
tworker_1_3: IF(2,3,tworker_1_4)__CSEQ_removeindent;
                                
# 904 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                                
# 905 "<previous_module>"
tworker_1_4: IF(2,4,tworker_1_5)__CSEQ_removeindent;
                                
# 906 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_1 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 907 "<previous_module>"
goto __exit____VERIFIER_load_Struct_1;
                                ;
                                
# 908 "<previous_module>"
__exit____VERIFIER_load_Struct_1:
                                __CPROVER_assume(__cs_pc_cs[2] >= 5);

                                
# 909 "<previous_module>"
;
                                ;
                        }
                        
# 911 "<previous_module>"
;
                        
# 912 "<previous_module>"
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_1;
                        
# 913 "<previous_module>"
;
                        ;
                        
# 914 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
                        
# 915 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
                        
# 916 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_2)

# 917 "<previous_module>"
                        {
                                
# 918 "<previous_module>"
tworker_1_5: IF(2,5,tworker_1_6)__CSEQ_removeindent;
                                
# 919 "<previous_module>"
__cs_retval__pop_1 = 0;
                                
# 920 "<previous_module>"
goto __exit__pop_1;
                                ;
                        }

                        
# 922 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 6);
                        ;
                        
# 923 "<previous_module>"
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
                        
# 924 "<previous_module>"
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
                        
# 925 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_1;

# 926 "<previous_module>"
                        {
                                
# 927 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 928 "<previous_module>"
tworker_1_6: IF(2,6,tworker_1_7)__CSEQ_removeindent;
                                
# 929 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                                
# 930 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 931 "<previous_module>"
tworker_1_7: IF(2,7,tworker_1_8)__CSEQ_removeindent;
                                
# 932 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                                
# 933 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 934 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                                
# 935 "<previous_module>"
;
                                ;
                                
# 936 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 937 "<previous_module>"
tworker_1_8: IF(2,8,tworker_1_9)__CSEQ_removeindent;
                                
# 938 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 939 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 940 "<previous_module>"
                                {
                                        
# 941 "<previous_module>"
tworker_1_9: IF(2,9,tworker_1_10)__CSEQ_removeindent;
                                        
# 942 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 943 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_1 = 1;
                                        
# 944 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_1;
                                        ;
                                }
                                else

# 947 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[2] >= 10);
                                        
# 948 "<previous_module>"
tworker_1_10: IF(2,10,tworker_1_11)__CSEQ_removeindent;
                                        
# 949 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 950 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_1 = 0;
                                        
# 951 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_1;
                                        ;
                                }

                                
# 953 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 11);
                                ;
                                
# 954 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_1:
                                __CPROVER_assume(__cs_pc_cs[2] >= 11);

                                
# 955 "<previous_module>"
;
                                ;
                        }
                        
# 957 "<previous_module>"
;
                        
# 958 "<previous_module>"
tworker_1_11: IF(2,11,tworker_1_12)__CSEQ_removeindent;
                        
# 959 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_1);
                        
# 960 "<previous_module>"
tworker_1_12: IF(2,12,tworker_1_13)__CSEQ_removeindent;
                        
# 961 "<previous_module>"
__cs_retval__pop_1 = __cs_local_pop_orig.node;
                        
# 962 "<previous_module>"
goto __exit__pop_1;
                        ;
                        
# 963 "<previous_module>"
__exit__pop_1:
                        __CPROVER_assume(__cs_pc_cs[2] >= 13);

                        
# 964 "<previous_module>"
;
                        ;
                }
                
# 966 "<previous_module>"
;
                
# 967 "<previous_module>"
tworker_1_13: IF(2,13,tworker_1_14)__CSEQ_removeindent;
                
# 968 "<previous_module>"
__cs_local_lstack_push_node = __cs_retval__pop_1;
                
# 969 "<previous_module>"
;
                ;
                
# 970 "<previous_module>"
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
                
# 971 "<previous_module>"
tworker_1_14: IF(2,14,tworker_1_15)__CSEQ_removeindent;
                
# 972 "<previous_module>"
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
                
# 973 "<previous_module>"
if (__cs_local_lstack_push___cs_tmp_if_cond_3)

# 974 "<previous_module>"
                {
                        
# 975 "<previous_module>"
__cs_retval__lstack_push_1 = ENOMEM;
                        
# 976 "<previous_module>"
goto __exit__lstack_push_1;
                        ;
                }

                
# 978 "<previous_module>"
;
                
# 979 "<previous_module>"
tworker_1_15: IF(2,15,tworker_1_16)__CSEQ_removeindent;
                
# 980 "<previous_module>"
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;

# 981 "<previous_module>"
                {
                        
# 982 "<previous_module>"
static struct lstack_head *__cs_param_push_head;
                        
# 983 "<previous_module>"
tworker_1_16: IF(2,16,tworker_1_17)__CSEQ_removeindent;
                        
# 984 "<previous_module>"
__cs_param_push_head = &results.head;
                        
# 985 "<previous_module>"
static struct lstack_node *__cs_param_push_node;
                        
# 986 "<previous_module>"
tworker_1_17: IF(2,17,tworker_1_18)__CSEQ_removeindent;
                        
# 987 "<previous_module>"
__cs_param_push_node = __cs_local_lstack_push_node;
                        
# 988 "<previous_module>"
static struct lstack_head __cs_local_push_next;
                        
# 989 "<previous_module>"
static struct lstack_head __cs_local_push_orig;
                        
# 990 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_2;

# 991 "<previous_module>"
                        {
                                
# 992 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 993 "<previous_module>"
tworker_1_18: IF(2,18,tworker_1_19)__CSEQ_removeindent;
                                
# 994 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                                
# 995 "<previous_module>"
tworker_1_19: IF(2,19,tworker_1_20)__CSEQ_removeindent;
                                
# 996 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_2 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 997 "<previous_module>"
goto __exit____VERIFIER_load_Struct_2;
                                ;
                                
# 998 "<previous_module>"
__exit____VERIFIER_load_Struct_2:
                                __CPROVER_assume(__cs_pc_cs[2] >= 20);

                                
# 999 "<previous_module>"
;
                                ;
                        }
                        
# 1001 "<previous_module>"
;
                        
# 1002 "<previous_module>"
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_2;
                        
# 1003 "<previous_module>"
tworker_1_20: IF(2,20,tworker_1_21)__CSEQ_removeindent;
                        
# 1004 "<previous_module>"
(*__cs_param_push_node).next = __cs_local_push_orig.node;
                        
# 1005 "<previous_module>"
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
                        
# 1006 "<previous_module>"
tworker_1_21: IF(2,21,tworker_1_22)__CSEQ_removeindent;
                        
# 1007 "<previous_module>"
__cs_local_push_next.node = __cs_param_push_node;
                        
# 1008 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_2;

# 1009 "<previous_module>"
                        {
                                
# 1010 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 1011 "<previous_module>"
tworker_1_22: IF(2,22,tworker_1_23)__CSEQ_removeindent;
                                
# 1012 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                                
# 1013 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 1014 "<previous_module>"
tworker_1_23: IF(2,23,tworker_1_24)__CSEQ_removeindent;
                                
# 1015 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                                
# 1016 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 1017 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                                
# 1018 "<previous_module>"
;
                                ;
                                
# 1019 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 1020 "<previous_module>"
tworker_1_24: IF(2,24,tworker_1_25)__CSEQ_removeindent;
                                
# 1021 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 1022 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 1023 "<previous_module>"
                                {
                                        
# 1024 "<previous_module>"
tworker_1_25: IF(2,25,tworker_1_26)__CSEQ_removeindent;
                                        
# 1025 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 1026 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_2 = 1;
                                        
# 1027 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_2;
                                        ;
                                }
                                else

# 1030 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[2] >= 26);
                                        
# 1031 "<previous_module>"
tworker_1_26: IF(2,26,tworker_1_27)__CSEQ_removeindent;
                                        
# 1032 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 1033 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_2 = 0;
                                        
# 1034 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_2;
                                        ;
                                }

                                
# 1036 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 27);
                                ;
                                
# 1037 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_2:
                                __CPROVER_assume(__cs_pc_cs[2] >= 27);

                                
# 1038 "<previous_module>"
;
                                ;
                        }
                        
# 1040 "<previous_module>"
;
                        
# 1041 "<previous_module>"
tworker_1_27: IF(2,27,tworker_1_28)__CSEQ_removeindent;
                        
# 1042 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_2);
                        
# 1043 "<previous_module>"
__exit__push_1:
                        __CPROVER_assume(__cs_pc_cs[2] >= 28);

                        
# 1044 "<previous_module>"
;
                        ;
                }
                
# 1046 "<previous_module>"
;
                
# 1047 "<previous_module>"
tworker_1_28: IF(2,28,tworker_1_29)__CSEQ_removeindent;
                
# 1048 "<previous_module>"
__CSEQ_atomic_fetch_add(&results.size, 1);
                
# 1049 "<previous_module>"
__cs_retval__lstack_push_1 = 0;
                
# 1050 "<previous_module>"
goto __exit__lstack_push_1;
                ;
                
# 1051 "<previous_module>"
__exit__lstack_push_1:
                __CPROVER_assume(__cs_pc_cs[2] >= 29);

                
# 1052 "<previous_module>"
;
                ;
        }
        
# 1054 "<previous_module>"
;
        
# 1055 "<previous_module>"
__cs_retval__lstack_push_1;
        
# 1056 "<previous_module>"
static int __cs_retval__lstack_pop_1;

# 1057 "<previous_module>"
        {
                
# 1058 "<previous_module>"
static struct lstack_node *__cs_local_lstack_pop_node;
                
# 1059 "<previous_module>"
static struct lstack_node *__cs_retval__pop_2;

# 1060 "<previous_module>"
                {
                        
# 1061 "<previous_module>"
static struct lstack_head *__cs_param_pop_head;
                        
# 1062 "<previous_module>"
tworker_1_29: IF(2,29,tworker_1_30)__CSEQ_removeindent;
                        
# 1063 "<previous_module>"
__cs_param_pop_head = &results.head;
                        
# 1064 "<previous_module>"
static struct lstack_head __cs_local_pop_next;
                        
# 1065 "<previous_module>"
static struct lstack_head __cs_local_pop_orig;
                        
# 1066 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_3;

# 1067 "<previous_module>"
                        {
                                
# 1068 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 1069 "<previous_module>"
tworker_1_30: IF(2,30,tworker_1_31)__CSEQ_removeindent;
                                
# 1070 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                                
# 1071 "<previous_module>"
tworker_1_31: IF(2,31,tworker_1_32)__CSEQ_removeindent;
                                
# 1072 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_3 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 1073 "<previous_module>"
goto __exit____VERIFIER_load_Struct_3;
                                ;
                                
# 1074 "<previous_module>"
__exit____VERIFIER_load_Struct_3:
                                __CPROVER_assume(__cs_pc_cs[2] >= 32);

                                
# 1075 "<previous_module>"
;
                                ;
                        }
                        
# 1077 "<previous_module>"
;
                        
# 1078 "<previous_module>"
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_3;
                        
# 1079 "<previous_module>"
;
                        ;
                        
# 1080 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
                        
# 1081 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
                        
# 1082 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_2)

# 1083 "<previous_module>"
                        {
                                
# 1084 "<previous_module>"
tworker_1_32: IF(2,32,tworker_1_33)__CSEQ_removeindent;
                                
# 1085 "<previous_module>"
__cs_retval__pop_2 = 0;
                                
# 1086 "<previous_module>"
goto __exit__pop_2;
                                ;
                        }

                        
# 1088 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 33);
                        ;
                        
# 1089 "<previous_module>"
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
                        
# 1090 "<previous_module>"
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
                        
# 1091 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_3;

# 1092 "<previous_module>"
                        {
                                
# 1093 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 1094 "<previous_module>"
tworker_1_33: IF(2,33,tworker_1_34)__CSEQ_removeindent;
                                
# 1095 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                                
# 1096 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 1097 "<previous_module>"
tworker_1_34: IF(2,34,tworker_1_35)__CSEQ_removeindent;
                                
# 1098 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                                
# 1099 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 1100 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                                
# 1101 "<previous_module>"
;
                                ;
                                
# 1102 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 1103 "<previous_module>"
tworker_1_35: IF(2,35,tworker_1_36)__CSEQ_removeindent;
                                
# 1104 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 1105 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 1106 "<previous_module>"
                                {
                                        
# 1107 "<previous_module>"
tworker_1_36: IF(2,36,tworker_1_37)__CSEQ_removeindent;
                                        
# 1108 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 1109 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_3 = 1;
                                        
# 1110 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_3;
                                        ;
                                }
                                else

# 1113 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[2] >= 37);
                                        
# 1114 "<previous_module>"
tworker_1_37: IF(2,37,tworker_1_38)__CSEQ_removeindent;
                                        
# 1115 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 1116 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_3 = 0;
                                        
# 1117 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_3;
                                        ;
                                }

                                
# 1119 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 38);
                                ;
                                
# 1120 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_3:
                                __CPROVER_assume(__cs_pc_cs[2] >= 38);

                                
# 1121 "<previous_module>"
;
                                ;
                        }
                        
# 1123 "<previous_module>"
;
                        
# 1124 "<previous_module>"
tworker_1_38: IF(2,38,tworker_1_39)__CSEQ_removeindent;
                        
# 1125 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_3);
                        
# 1126 "<previous_module>"
tworker_1_39: IF(2,39,tworker_1_40)__CSEQ_removeindent;
                        
# 1127 "<previous_module>"
__cs_retval__pop_2 = __cs_local_pop_orig.node;
                        
# 1128 "<previous_module>"
goto __exit__pop_2;
                        ;
                        
# 1129 "<previous_module>"
__exit__pop_2:
                        __CPROVER_assume(__cs_pc_cs[2] >= 40);

                        
# 1130 "<previous_module>"
;
                        ;
                }
                
# 1132 "<previous_module>"
;
                
# 1133 "<previous_module>"
tworker_1_40: IF(2,40,tworker_1_41)__CSEQ_removeindent;
                
# 1134 "<previous_module>"
__cs_local_lstack_pop_node = __cs_retval__pop_2;
                
# 1135 "<previous_module>"
;
                ;
                
# 1136 "<previous_module>"
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
                
# 1137 "<previous_module>"
tworker_1_41: IF(2,41,tworker_1_42)__CSEQ_removeindent;
                
# 1138 "<previous_module>"
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
                
# 1139 "<previous_module>"
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)

# 1140 "<previous_module>"
                {
                        
# 1141 "<previous_module>"
__cs_retval__lstack_pop_1 = 0;
                        
# 1142 "<previous_module>"
goto __exit__lstack_pop_1;
                        ;
                }

                
# 1144 "<previous_module>"
;
                
# 1145 "<previous_module>"
tworker_1_42: IF(2,42,tworker_1_43)__CSEQ_removeindent;
                
# 1146 "<previous_module>"
__CSEQ_atomic_fetch_sub(&results.size, 1);
                
# 1147 "<previous_module>"
static int __cs_local_lstack_pop_value;
                
# 1148 "<previous_module>"
tworker_1_43: IF(2,43,tworker_1_44)__CSEQ_removeindent;
                
# 1149 "<previous_module>"
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;

# 1150 "<previous_module>"
                {
                        
# 1151 "<previous_module>"
static struct lstack_head *__cs_param_push_head;
                        
# 1152 "<previous_module>"
tworker_1_44: IF(2,44,tworker_1_45)__CSEQ_removeindent;
                        
# 1153 "<previous_module>"
__cs_param_push_head = &results.free;
                        
# 1154 "<previous_module>"
static struct lstack_node *__cs_param_push_node;
                        
# 1155 "<previous_module>"
tworker_1_45: IF(2,45,tworker_1_46)__CSEQ_removeindent;
                        
# 1156 "<previous_module>"
__cs_param_push_node = __cs_local_lstack_pop_node;
                        
# 1157 "<previous_module>"
static struct lstack_head __cs_local_push_next;
                        
# 1158 "<previous_module>"
static struct lstack_head __cs_local_push_orig;
                        
# 1159 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_4;

# 1160 "<previous_module>"
                        {
                                
# 1161 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 1162 "<previous_module>"
tworker_1_46: IF(2,46,tworker_1_47)__CSEQ_removeindent;
                                
# 1163 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                                
# 1164 "<previous_module>"
tworker_1_47: IF(2,47,tworker_1_48)__CSEQ_removeindent;
                                
# 1165 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_4 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 1166 "<previous_module>"
goto __exit____VERIFIER_load_Struct_4;
                                ;
                                
# 1167 "<previous_module>"
__exit____VERIFIER_load_Struct_4:
                                __CPROVER_assume(__cs_pc_cs[2] >= 48);

                                
# 1168 "<previous_module>"
;
                                ;
                        }
                        
# 1170 "<previous_module>"
;
                        
# 1171 "<previous_module>"
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_4;
                        
# 1172 "<previous_module>"
tworker_1_48: IF(2,48,tworker_1_49)__CSEQ_removeindent;
                        
# 1173 "<previous_module>"
(*__cs_param_push_node).next = __cs_local_push_orig.node;
                        
# 1174 "<previous_module>"
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
                        
# 1175 "<previous_module>"
tworker_1_49: IF(2,49,tworker_1_50)__CSEQ_removeindent;
                        
# 1176 "<previous_module>"
__cs_local_push_next.node = __cs_param_push_node;
                        
# 1177 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_4;

# 1178 "<previous_module>"
                        {
                                
# 1179 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 1180 "<previous_module>"
tworker_1_50: IF(2,50,tworker_1_51)__CSEQ_removeindent;
                                
# 1181 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                                
# 1182 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 1183 "<previous_module>"
tworker_1_51: IF(2,51,tworker_1_52)__CSEQ_removeindent;
                                
# 1184 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                                
# 1185 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 1186 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                                
# 1187 "<previous_module>"
;
                                ;
                                
# 1188 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 1189 "<previous_module>"
tworker_1_52: IF(2,52,tworker_1_53)__CSEQ_removeindent;
                                
# 1190 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 1191 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 1192 "<previous_module>"
                                {
                                        
# 1193 "<previous_module>"
tworker_1_53: IF(2,53,tworker_1_54)__CSEQ_removeindent;
                                        
# 1194 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 1195 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_4 = 1;
                                        
# 1196 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_4;
                                        ;
                                }
                                else

# 1199 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[2] >= 54);
                                        
# 1200 "<previous_module>"
tworker_1_54: IF(2,54,tworker_1_55)__CSEQ_removeindent;
                                        
# 1201 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 1202 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_4 = 0;
                                        
# 1203 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_4;
                                        ;
                                }

                                
# 1205 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 55);
                                ;
                                
# 1206 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_4:
                                __CPROVER_assume(__cs_pc_cs[2] >= 55);

                                
# 1207 "<previous_module>"
;
                                ;
                        }
                        
# 1209 "<previous_module>"
;
                        
# 1210 "<previous_module>"
tworker_1_55: IF(2,55,tworker_1_56)__CSEQ_removeindent;
                        
# 1211 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_4);
                        
# 1212 "<previous_module>"
__exit__push_2:
                        __CPROVER_assume(__cs_pc_cs[2] >= 56);

                        
# 1213 "<previous_module>"
;
                        ;
                }
                
# 1215 "<previous_module>"
;
                
# 1216 "<previous_module>"
__cs_retval__lstack_pop_1 = __cs_local_lstack_pop_value;
                
# 1217 "<previous_module>"
goto __exit__lstack_pop_1;
                ;
                
# 1218 "<previous_module>"
__exit__lstack_pop_1:
                __CPROVER_assume(__cs_pc_cs[2] >= 56);

                
# 1219 "<previous_module>"
;
                ;
        }
        
# 1221 "<previous_module>"
;
        
# 1222 "<previous_module>"
tworker_1_56: IF(2,56,tworker_1_57)__CSEQ_removeindent;
        
# 1223 "<previous_module>"
__cs_local_worker_valore_restituito[0] = __cs_retval__lstack_pop_1;
        
# 1224 "<previous_module>"
static int __cs_retval__lstack_push_2;

# 1225 "<previous_module>"
        {
                
# 1226 "<previous_module>"
static int __cs_param_lstack_push_value;
                
# 1227 "<previous_module>"
__cs_param_lstack_push_value = __cs_local_worker_valore[1] + ((__cs_local_worker_thread - 1) * 10);
                
# 1228 "<previous_module>"
static struct lstack_node *__cs_local_lstack_push_node;
                
# 1229 "<previous_module>"
static struct lstack_node *__cs_retval__pop_3;

# 1230 "<previous_module>"
                {
                        
# 1231 "<previous_module>"
static struct lstack_head *__cs_param_pop_head;
                        
# 1232 "<previous_module>"
tworker_1_57: IF(2,57,tworker_1_58)__CSEQ_removeindent;
                        
# 1233 "<previous_module>"
__cs_param_pop_head = &results.free;
                        
# 1234 "<previous_module>"
static struct lstack_head __cs_local_pop_next;
                        
# 1235 "<previous_module>"
static struct lstack_head __cs_local_pop_orig;
                        
# 1236 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_5;

# 1237 "<previous_module>"
                        {
                                
# 1238 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 1239 "<previous_module>"
tworker_1_58: IF(2,58,tworker_1_59)__CSEQ_removeindent;
                                
# 1240 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                                
# 1241 "<previous_module>"
tworker_1_59: IF(2,59,tworker_1_60)__CSEQ_removeindent;
                                
# 1242 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_5 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 1243 "<previous_module>"
goto __exit____VERIFIER_load_Struct_5;
                                ;
                                
# 1244 "<previous_module>"
__exit____VERIFIER_load_Struct_5:
                                __CPROVER_assume(__cs_pc_cs[2] >= 60);

                                
# 1245 "<previous_module>"
;
                                ;
                        }
                        
# 1247 "<previous_module>"
;
                        
# 1248 "<previous_module>"
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_5;
                        
# 1249 "<previous_module>"
;
                        ;
                        
# 1250 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
                        
# 1251 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
                        
# 1252 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_2)

# 1253 "<previous_module>"
                        {
                                
# 1254 "<previous_module>"
tworker_1_60: IF(2,60,tworker_1_61)__CSEQ_removeindent;
                                
# 1255 "<previous_module>"
__cs_retval__pop_3 = 0;
                                
# 1256 "<previous_module>"
goto __exit__pop_3;
                                ;
                        }

                        
# 1258 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 61);
                        ;
                        
# 1259 "<previous_module>"
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
                        
# 1260 "<previous_module>"
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
                        
# 1261 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_5;

# 1262 "<previous_module>"
                        {
                                
# 1263 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 1264 "<previous_module>"
tworker_1_61: IF(2,61,tworker_1_62)__CSEQ_removeindent;
                                
# 1265 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                                
# 1266 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 1267 "<previous_module>"
tworker_1_62: IF(2,62,tworker_1_63)__CSEQ_removeindent;
                                
# 1268 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                                
# 1269 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 1270 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                                
# 1271 "<previous_module>"
;
                                ;
                                
# 1272 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 1273 "<previous_module>"
tworker_1_63: IF(2,63,tworker_1_64)__CSEQ_removeindent;
                                
# 1274 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 1275 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 1276 "<previous_module>"
                                {
                                        
# 1277 "<previous_module>"
tworker_1_64: IF(2,64,tworker_1_65)__CSEQ_removeindent;
                                        
# 1278 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 1279 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_5 = 1;
                                        
# 1280 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_5;
                                        ;
                                }
                                else

# 1283 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[2] >= 65);
                                        
# 1284 "<previous_module>"
tworker_1_65: IF(2,65,tworker_1_66)__CSEQ_removeindent;
                                        
# 1285 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 1286 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_5 = 0;
                                        
# 1287 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_5;
                                        ;
                                }

                                
# 1289 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 66);
                                ;
                                
# 1290 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_5:
                                __CPROVER_assume(__cs_pc_cs[2] >= 66);

                                
# 1291 "<previous_module>"
;
                                ;
                        }
                        
# 1293 "<previous_module>"
;
                        
# 1294 "<previous_module>"
tworker_1_66: IF(2,66,tworker_1_67)__CSEQ_removeindent;
                        
# 1295 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_5);
                        
# 1296 "<previous_module>"
tworker_1_67: IF(2,67,tworker_1_68)__CSEQ_removeindent;
                        
# 1297 "<previous_module>"
__cs_retval__pop_3 = __cs_local_pop_orig.node;
                        
# 1298 "<previous_module>"
goto __exit__pop_3;
                        ;
                        
# 1299 "<previous_module>"
__exit__pop_3:
                        __CPROVER_assume(__cs_pc_cs[2] >= 68);

                        
# 1300 "<previous_module>"
;
                        ;
                }
                
# 1302 "<previous_module>"
;
                
# 1303 "<previous_module>"
tworker_1_68: IF(2,68,tworker_1_69)__CSEQ_removeindent;
                
# 1304 "<previous_module>"
__cs_local_lstack_push_node = __cs_retval__pop_3;
                
# 1305 "<previous_module>"
;
                ;
                
# 1306 "<previous_module>"
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
                
# 1307 "<previous_module>"
tworker_1_69: IF(2,69,tworker_1_70)__CSEQ_removeindent;
                
# 1308 "<previous_module>"
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
                
# 1309 "<previous_module>"
if (__cs_local_lstack_push___cs_tmp_if_cond_3)

# 1310 "<previous_module>"
                {
                        
# 1311 "<previous_module>"
__cs_retval__lstack_push_2 = ENOMEM;
                        
# 1312 "<previous_module>"
goto __exit__lstack_push_2;
                        ;
                }

                
# 1314 "<previous_module>"
;
                
# 1315 "<previous_module>"
tworker_1_70: IF(2,70,tworker_1_71)__CSEQ_removeindent;
                
# 1316 "<previous_module>"
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;

# 1317 "<previous_module>"
                {
                        
# 1318 "<previous_module>"
static struct lstack_head *__cs_param_push_head;
                        
# 1319 "<previous_module>"
tworker_1_71: IF(2,71,tworker_1_72)__CSEQ_removeindent;
                        
# 1320 "<previous_module>"
__cs_param_push_head = &results.head;
                        
# 1321 "<previous_module>"
static struct lstack_node *__cs_param_push_node;
                        
# 1322 "<previous_module>"
tworker_1_72: IF(2,72,tworker_1_73)__CSEQ_removeindent;
                        
# 1323 "<previous_module>"
__cs_param_push_node = __cs_local_lstack_push_node;
                        
# 1324 "<previous_module>"
static struct lstack_head __cs_local_push_next;
                        
# 1325 "<previous_module>"
static struct lstack_head __cs_local_push_orig;
                        
# 1326 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_6;

# 1327 "<previous_module>"
                        {
                                
# 1328 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 1329 "<previous_module>"
tworker_1_73: IF(2,73,tworker_1_74)__CSEQ_removeindent;
                                
# 1330 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                                
# 1331 "<previous_module>"
tworker_1_74: IF(2,74,tworker_1_75)__CSEQ_removeindent;
                                
# 1332 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_6 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 1333 "<previous_module>"
goto __exit____VERIFIER_load_Struct_6;
                                ;
                                
# 1334 "<previous_module>"
__exit____VERIFIER_load_Struct_6:
                                __CPROVER_assume(__cs_pc_cs[2] >= 75);

                                
# 1335 "<previous_module>"
;
                                ;
                        }
                        
# 1337 "<previous_module>"
;
                        
# 1338 "<previous_module>"
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_6;
                        
# 1339 "<previous_module>"
tworker_1_75: IF(2,75,tworker_1_76)__CSEQ_removeindent;
                        
# 1340 "<previous_module>"
(*__cs_param_push_node).next = __cs_local_push_orig.node;
                        
# 1341 "<previous_module>"
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
                        
# 1342 "<previous_module>"
tworker_1_76: IF(2,76,tworker_1_77)__CSEQ_removeindent;
                        
# 1343 "<previous_module>"
__cs_local_push_next.node = __cs_param_push_node;
                        
# 1344 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_6;

# 1345 "<previous_module>"
                        {
                                
# 1346 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 1347 "<previous_module>"
tworker_1_77: IF(2,77,tworker_1_78)__CSEQ_removeindent;
                                
# 1348 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                                
# 1349 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 1350 "<previous_module>"
tworker_1_78: IF(2,78,tworker_1_79)__CSEQ_removeindent;
                                
# 1351 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                                
# 1352 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 1353 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                                
# 1354 "<previous_module>"
;
                                ;
                                
# 1355 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 1356 "<previous_module>"
tworker_1_79: IF(2,79,tworker_1_80)__CSEQ_removeindent;
                                
# 1357 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 1358 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 1359 "<previous_module>"
                                {
                                        
# 1360 "<previous_module>"
tworker_1_80: IF(2,80,tworker_1_81)__CSEQ_removeindent;
                                        
# 1361 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 1362 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_6 = 1;
                                        
# 1363 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_6;
                                        ;
                                }
                                else

# 1366 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[2] >= 81);
                                        
# 1367 "<previous_module>"
tworker_1_81: IF(2,81,tworker_1_82)__CSEQ_removeindent;
                                        
# 1368 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 1369 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_6 = 0;
                                        
# 1370 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_6;
                                        ;
                                }

                                
# 1372 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= 82);
                                ;
                                
# 1373 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_6:
                                __CPROVER_assume(__cs_pc_cs[2] >= 82);

                                
# 1374 "<previous_module>"
;
                                ;
                        }
                        
# 1376 "<previous_module>"
;
                        
# 1377 "<previous_module>"
tworker_1_82: IF(2,82,tworker_1_83)__CSEQ_removeindent;
                        
# 1378 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_6);
                        
# 1379 "<previous_module>"
__exit__push_3:
                        __CPROVER_assume(__cs_pc_cs[2] >= 83);

                        
# 1380 "<previous_module>"
;
                        ;
                }
                
# 1382 "<previous_module>"
;
                
# 1383 "<previous_module>"
tworker_1_83: IF(2,83,tworker_1_84)__CSEQ_removeindent;
                
# 1384 "<previous_module>"
__CSEQ_atomic_fetch_add(&results.size, 1);
                
# 1385 "<previous_module>"
__cs_retval__lstack_push_2 = 0;
                
# 1386 "<previous_module>"
goto __exit__lstack_push_2;
                ;
                
# 1387 "<previous_module>"
__exit__lstack_push_2:
                __CPROVER_assume(__cs_pc_cs[2] >= 84);

                
# 1388 "<previous_module>"
;
                ;
        }
        
# 1390 "<previous_module>"
;
        
# 1391 "<previous_module>"
__cs_retval__lstack_push_2;
        
# 1392 "<previous_module>"
goto __exit_worker;
        ;
        
# 1393 "<previous_module>"
__exit_worker:
        __CPROVER_assume(__cs_pc_cs[2] >= 84);

        
# 1394 "<previous_module>"
;
        ;
        
# 1395 "<previous_module>"
tworker_1_84: __CSEQ_removeindent;
        
# 1396 "<previous_module>"
__cs_exit(0, 2);
}


# 1398 "<previous_module>"
int main_thread(void)

# 1399 "<previous_module>"
{
        
# 1400 "<previous_module>"
IF(0,0,tmain_1)__CSEQ_removeindent;
        
# 1401 "<previous_module>"
static int __cs_local_main__agg_t1[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
        
# 1402 "<previous_module>"
static int __cs_local_main__agg_t2[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
        
# 1403 "<previous_module>"
static __cs_t __cs_local_main_threads0;
        
# 1404 "<previous_module>"
;
        ;
        
# 1405 "<previous_module>"
static __cs_t __cs_local_main_threads1;
        
# 1406 "<previous_module>"
;
        ;
        
# 1407 "<previous_module>"
static int __cs_retval__lstack_init_1;

# 1408 "<previous_module>"
        {
                
# 1409 "<previous_module>"
results.head.aba = 0;
                
# 1410 "<previous_module>"
results.head.node = 0;
                
# 1411 "<previous_module>"
results.size = 0;
                
# 1412 "<previous_module>"
results.node_buffer = __cs_safe_malloc(6 * (sizeof(struct lstack_node)));
                
# 1413 "<previous_module>"
;
                ;
                
# 1414 "<previous_module>"
static _Bool __cs_local_lstack_init___cs_tmp_if_cond_1;
                
# 1415 "<previous_module>"
__cs_local_lstack_init___cs_tmp_if_cond_1 = results.node_buffer == 0;
                
# 1416 "<previous_module>"
if (__cs_local_lstack_init___cs_tmp_if_cond_1)

# 1417 "<previous_module>"
                {
                        
# 1418 "<previous_module>"
__cs_retval__lstack_init_1 = ENOMEM;
                        
# 1419 "<previous_module>"
goto __exit__lstack_init_1;
                        ;
                }

                
# 1421 "<previous_module>"
;
                
# 1422 "<previous_module>"
results.node_buffer[0].next = results.node_buffer + 1;
                
# 1423 "<previous_module>"
results.node_buffer[1].next = results.node_buffer + 2;
                
# 1424 "<previous_module>"
results.node_buffer[2].next = results.node_buffer + 3;
                
# 1425 "<previous_module>"
results.node_buffer[3].next = results.node_buffer + 4;
                
# 1426 "<previous_module>"
results.node_buffer[4].next = results.node_buffer + 5;
                
# 1427 "<previous_module>"
results.node_buffer[5].next = results.node_buffer + 6;
                
# 1428 "<previous_module>"
results.node_buffer[5].next = 0;
                
# 1429 "<previous_module>"
results.free.aba = 0;
                
# 1430 "<previous_module>"
results.free.node = results.node_buffer;
                
# 1431 "<previous_module>"
__cs_retval__lstack_init_1 = 0;
                
# 1432 "<previous_module>"
goto __exit__lstack_init_1;
                ;
                
# 1433 "<previous_module>"
__exit__lstack_init_1:
                __CPROVER_assume(__cs_pc_cs[0] >= 1);

                
# 1434 "<previous_module>"
;
                ;
        }
        
# 1436 "<previous_module>"
;
        
# 1437 "<previous_module>"
__cs_retval__lstack_init_1;
        
# 1438 "<previous_module>"
__cs_create(&__cs_local_main_threads0, 0, worker_0, 1, 1);
        
# 1439 "<previous_module>"
tmain_1: IF(0,1,tmain_2)__CSEQ_removeindent;
        
# 1440 "<previous_module>"
__cs_create(&__cs_local_main_threads1, 0, worker_1, 2, 2);
        
# 1441 "<previous_module>"
tmain_2: IF(0,2,tmain_3)__CSEQ_removeindent;
        
# 1442 "<previous_module>"
__cs_join(__cs_local_main_threads0, 0);
        
# 1443 "<previous_module>"
tmain_3: IF(0,3,tmain_4)__CSEQ_removeindent;
        
# 1444 "<previous_module>"
__cs_join(__cs_local_main_threads1, 0);
        
# 1445 "<previous_module>"
static int __cs_local_main__agg_e1;
        
# 1446 "<previous_module>"
static int __cs_retval__lstack_pop_2;

# 1447 "<previous_module>"
        {
                
# 1448 "<previous_module>"
static struct lstack_node *__cs_local_lstack_pop_node;
                
# 1449 "<previous_module>"
static struct lstack_node *__cs_retval__pop_4;

# 1450 "<previous_module>"
                {
                        
# 1451 "<previous_module>"
static struct lstack_head *__cs_param_pop_head;
                        
# 1452 "<previous_module>"
tmain_4: IF(0,4,tmain_5)__CSEQ_removeindent;
                        
# 1453 "<previous_module>"
__cs_param_pop_head = &results.head;
                        
# 1454 "<previous_module>"
static struct lstack_head __cs_local_pop_next;
                        
# 1455 "<previous_module>"
static struct lstack_head __cs_local_pop_orig;
                        
# 1456 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_7;

# 1457 "<previous_module>"
                        {
                                
# 1458 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 1459 "<previous_module>"
tmain_5: IF(0,5,tmain_6)__CSEQ_removeindent;
                                
# 1460 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                                
# 1461 "<previous_module>"
tmain_6: IF(0,6,tmain_7)__CSEQ_removeindent;
                                
# 1462 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_7 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 1463 "<previous_module>"
goto __exit____VERIFIER_load_Struct_7;
                                ;
                                
# 1464 "<previous_module>"
__exit____VERIFIER_load_Struct_7:
                                __CPROVER_assume(__cs_pc_cs[0] >= 7);

                                
# 1465 "<previous_module>"
;
                                ;
                        }
                        
# 1467 "<previous_module>"
;
                        
# 1468 "<previous_module>"
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_7;
                        
# 1469 "<previous_module>"
;
                        ;
                        
# 1470 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
                        
# 1471 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
                        
# 1472 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_2)

# 1473 "<previous_module>"
                        {
                                
# 1474 "<previous_module>"
tmain_7: IF(0,7,tmain_8)__CSEQ_removeindent;
                                
# 1475 "<previous_module>"
__cs_retval__pop_4 = 0;
                                
# 1476 "<previous_module>"
goto __exit__pop_4;
                                ;
                        }

                        
# 1478 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 8);
                        ;
                        
# 1479 "<previous_module>"
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
                        
# 1480 "<previous_module>"
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
                        
# 1481 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_7;

# 1482 "<previous_module>"
                        {
                                
# 1483 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 1484 "<previous_module>"
tmain_8: IF(0,8,tmain_9)__CSEQ_removeindent;
                                
# 1485 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                                
# 1486 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 1487 "<previous_module>"
tmain_9: IF(0,9,tmain_10)__CSEQ_removeindent;
                                
# 1488 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                                
# 1489 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 1490 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                                
# 1491 "<previous_module>"
;
                                ;
                                
# 1492 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 1493 "<previous_module>"
tmain_10: IF(0,10,tmain_11)__CSEQ_removeindent;
                                
# 1494 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 1495 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 1496 "<previous_module>"
                                {
                                        
# 1497 "<previous_module>"
tmain_11: IF(0,11,tmain_12)__CSEQ_removeindent;
                                        
# 1498 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 1499 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_7 = 1;
                                        
# 1500 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_7;
                                        ;
                                }
                                else

# 1503 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[0] >= 12);
                                        
# 1504 "<previous_module>"
tmain_12: IF(0,12,tmain_13)__CSEQ_removeindent;
                                        
# 1505 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 1506 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_7 = 0;
                                        
# 1507 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_7;
                                        ;
                                }

                                
# 1509 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 13);
                                ;
                                
# 1510 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_7:
                                __CPROVER_assume(__cs_pc_cs[0] >= 13);

                                
# 1511 "<previous_module>"
;
                                ;
                        }
                        
# 1513 "<previous_module>"
;
                        
# 1514 "<previous_module>"
tmain_13: IF(0,13,tmain_14)__CSEQ_removeindent;
                        
# 1515 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_7);
                        
# 1516 "<previous_module>"
tmain_14: IF(0,14,tmain_15)__CSEQ_removeindent;
                        
# 1517 "<previous_module>"
__cs_retval__pop_4 = __cs_local_pop_orig.node;
                        
# 1518 "<previous_module>"
goto __exit__pop_4;
                        ;
                        
# 1519 "<previous_module>"
__exit__pop_4:
                        __CPROVER_assume(__cs_pc_cs[0] >= 15);

                        
# 1520 "<previous_module>"
;
                        ;
                }
                
# 1522 "<previous_module>"
;
                
# 1523 "<previous_module>"
tmain_15: IF(0,15,tmain_16)__CSEQ_removeindent;
                
# 1524 "<previous_module>"
__cs_local_lstack_pop_node = __cs_retval__pop_4;
                
# 1525 "<previous_module>"
;
                ;
                
# 1526 "<previous_module>"
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
                
# 1527 "<previous_module>"
tmain_16: IF(0,16,tmain_17)__CSEQ_removeindent;
                
# 1528 "<previous_module>"
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
                
# 1529 "<previous_module>"
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)

# 1530 "<previous_module>"
                {
                        
# 1531 "<previous_module>"
__cs_retval__lstack_pop_2 = 0;
                        
# 1532 "<previous_module>"
goto __exit__lstack_pop_2;
                        ;
                }

                
# 1534 "<previous_module>"
;
                
# 1535 "<previous_module>"
tmain_17: IF(0,17,tmain_18)__CSEQ_removeindent;
                
# 1536 "<previous_module>"
__CSEQ_atomic_fetch_sub(&results.size, 1);
                
# 1537 "<previous_module>"
static int __cs_local_lstack_pop_value;
                
# 1538 "<previous_module>"
tmain_18: IF(0,18,tmain_19)__CSEQ_removeindent;
                
# 1539 "<previous_module>"
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;

# 1540 "<previous_module>"
                {
                        
# 1541 "<previous_module>"
static struct lstack_head *__cs_param_push_head;
                        
# 1542 "<previous_module>"
tmain_19: IF(0,19,tmain_20)__CSEQ_removeindent;
                        
# 1543 "<previous_module>"
__cs_param_push_head = &results.free;
                        
# 1544 "<previous_module>"
static struct lstack_node *__cs_param_push_node;
                        
# 1545 "<previous_module>"
tmain_20: IF(0,20,tmain_21)__CSEQ_removeindent;
                        
# 1546 "<previous_module>"
__cs_param_push_node = __cs_local_lstack_pop_node;
                        
# 1547 "<previous_module>"
static struct lstack_head __cs_local_push_next;
                        
# 1548 "<previous_module>"
static struct lstack_head __cs_local_push_orig;
                        
# 1549 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_8;

# 1550 "<previous_module>"
                        {
                                
# 1551 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 1552 "<previous_module>"
tmain_21: IF(0,21,tmain_22)__CSEQ_removeindent;
                                
# 1553 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                                
# 1554 "<previous_module>"
tmain_22: IF(0,22,tmain_23)__CSEQ_removeindent;
                                
# 1555 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_8 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 1556 "<previous_module>"
goto __exit____VERIFIER_load_Struct_8;
                                ;
                                
# 1557 "<previous_module>"
__exit____VERIFIER_load_Struct_8:
                                __CPROVER_assume(__cs_pc_cs[0] >= 23);

                                
# 1558 "<previous_module>"
;
                                ;
                        }
                        
# 1560 "<previous_module>"
;
                        
# 1561 "<previous_module>"
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_8;
                        
# 1562 "<previous_module>"
tmain_23: IF(0,23,tmain_24)__CSEQ_removeindent;
                        
# 1563 "<previous_module>"
(*__cs_param_push_node).next = __cs_local_push_orig.node;
                        
# 1564 "<previous_module>"
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
                        
# 1565 "<previous_module>"
tmain_24: IF(0,24,tmain_25)__CSEQ_removeindent;
                        
# 1566 "<previous_module>"
__cs_local_push_next.node = __cs_param_push_node;
                        
# 1567 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_8;

# 1568 "<previous_module>"
                        {
                                
# 1569 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 1570 "<previous_module>"
tmain_25: IF(0,25,tmain_26)__CSEQ_removeindent;
                                
# 1571 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                                
# 1572 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 1573 "<previous_module>"
tmain_26: IF(0,26,tmain_27)__CSEQ_removeindent;
                                
# 1574 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                                
# 1575 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 1576 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                                
# 1577 "<previous_module>"
;
                                ;
                                
# 1578 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 1579 "<previous_module>"
tmain_27: IF(0,27,tmain_28)__CSEQ_removeindent;
                                
# 1580 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 1581 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 1582 "<previous_module>"
                                {
                                        
# 1583 "<previous_module>"
tmain_28: IF(0,28,tmain_29)__CSEQ_removeindent;
                                        
# 1584 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 1585 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_8 = 1;
                                        
# 1586 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_8;
                                        ;
                                }
                                else

# 1589 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[0] >= 29);
                                        
# 1590 "<previous_module>"
tmain_29: IF(0,29,tmain_30)__CSEQ_removeindent;
                                        
# 1591 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 1592 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_8 = 0;
                                        
# 1593 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_8;
                                        ;
                                }

                                
# 1595 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 30);
                                ;
                                
# 1596 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_8:
                                __CPROVER_assume(__cs_pc_cs[0] >= 30);

                                
# 1597 "<previous_module>"
;
                                ;
                        }
                        
# 1599 "<previous_module>"
;
                        
# 1600 "<previous_module>"
tmain_30: IF(0,30,tmain_31)__CSEQ_removeindent;
                        
# 1601 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_8);
                        
# 1602 "<previous_module>"
__exit__push_4:
                        __CPROVER_assume(__cs_pc_cs[0] >= 31);

                        
# 1603 "<previous_module>"
;
                        ;
                }
                
# 1605 "<previous_module>"
;
                
# 1606 "<previous_module>"
__cs_retval__lstack_pop_2 = __cs_local_lstack_pop_value;
                
# 1607 "<previous_module>"
goto __exit__lstack_pop_2;
                ;
                
# 1608 "<previous_module>"
__exit__lstack_pop_2:
                __CPROVER_assume(__cs_pc_cs[0] >= 31);

                
# 1609 "<previous_module>"
;
                ;
        }
        
# 1611 "<previous_module>"
;
        
# 1612 "<previous_module>"
__cs_local_main__agg_e1 = __cs_retval__lstack_pop_2;
        
# 1613 "<previous_module>"
static int __cs_local_main__agg_e2;
        
# 1614 "<previous_module>"
static int __cs_retval__lstack_pop_3;

# 1615 "<previous_module>"
        {
                
# 1616 "<previous_module>"
static struct lstack_node *__cs_local_lstack_pop_node;
                
# 1617 "<previous_module>"
static struct lstack_node *__cs_retval__pop_5;

# 1618 "<previous_module>"
                {
                        
# 1619 "<previous_module>"
static struct lstack_head *__cs_param_pop_head;
                        
# 1620 "<previous_module>"
tmain_31: IF(0,31,tmain_32)__CSEQ_removeindent;
                        
# 1621 "<previous_module>"
__cs_param_pop_head = &results.head;
                        
# 1622 "<previous_module>"
static struct lstack_head __cs_local_pop_next;
                        
# 1623 "<previous_module>"
static struct lstack_head __cs_local_pop_orig;
                        
# 1624 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_9;

# 1625 "<previous_module>"
                        {
                                
# 1626 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 1627 "<previous_module>"
tmain_32: IF(0,32,tmain_33)__CSEQ_removeindent;
                                
# 1628 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                                
# 1629 "<previous_module>"
tmain_33: IF(0,33,tmain_34)__CSEQ_removeindent;
                                
# 1630 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_9 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 1631 "<previous_module>"
goto __exit____VERIFIER_load_Struct_9;
                                ;
                                
# 1632 "<previous_module>"
__exit____VERIFIER_load_Struct_9:
                                __CPROVER_assume(__cs_pc_cs[0] >= 34);

                                
# 1633 "<previous_module>"
;
                                ;
                        }
                        
# 1635 "<previous_module>"
;
                        
# 1636 "<previous_module>"
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_9;
                        
# 1637 "<previous_module>"
;
                        ;
                        
# 1638 "<previous_module>"
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
                        
# 1639 "<previous_module>"
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
                        
# 1640 "<previous_module>"
if (__cs_local_pop___cs_tmp_if_cond_2)

# 1641 "<previous_module>"
                        {
                                
# 1642 "<previous_module>"
tmain_34: IF(0,34,tmain_35)__CSEQ_removeindent;
                                
# 1643 "<previous_module>"
__cs_retval__pop_5 = 0;
                                
# 1644 "<previous_module>"
goto __exit__pop_5;
                                ;
                        }

                        
# 1646 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 35);
                        ;
                        
# 1647 "<previous_module>"
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
                        
# 1648 "<previous_module>"
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
                        
# 1649 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_9;

# 1650 "<previous_module>"
                        {
                                
# 1651 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 1652 "<previous_module>"
tmain_35: IF(0,35,tmain_36)__CSEQ_removeindent;
                                
# 1653 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                                
# 1654 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 1655 "<previous_module>"
tmain_36: IF(0,36,tmain_37)__CSEQ_removeindent;
                                
# 1656 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                                
# 1657 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 1658 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                                
# 1659 "<previous_module>"
;
                                ;
                                
# 1660 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 1661 "<previous_module>"
tmain_37: IF(0,37,tmain_38)__CSEQ_removeindent;
                                
# 1662 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 1663 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 1664 "<previous_module>"
                                {
                                        
# 1665 "<previous_module>"
tmain_38: IF(0,38,tmain_39)__CSEQ_removeindent;
                                        
# 1666 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 1667 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_9 = 1;
                                        
# 1668 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_9;
                                        ;
                                }
                                else

# 1671 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[0] >= 39);
                                        
# 1672 "<previous_module>"
tmain_39: IF(0,39,tmain_40)__CSEQ_removeindent;
                                        
# 1673 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 1674 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_9 = 0;
                                        
# 1675 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_9;
                                        ;
                                }

                                
# 1677 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 40);
                                ;
                                
# 1678 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_9:
                                __CPROVER_assume(__cs_pc_cs[0] >= 40);

                                
# 1679 "<previous_module>"
;
                                ;
                        }
                        
# 1681 "<previous_module>"
;
                        
# 1682 "<previous_module>"
tmain_40: IF(0,40,tmain_41)__CSEQ_removeindent;
                        
# 1683 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_9);
                        
# 1684 "<previous_module>"
tmain_41: IF(0,41,tmain_42)__CSEQ_removeindent;
                        
# 1685 "<previous_module>"
__cs_retval__pop_5 = __cs_local_pop_orig.node;
                        
# 1686 "<previous_module>"
goto __exit__pop_5;
                        ;
                        
# 1687 "<previous_module>"
__exit__pop_5:
                        __CPROVER_assume(__cs_pc_cs[0] >= 42);

                        
# 1688 "<previous_module>"
;
                        ;
                }
                
# 1690 "<previous_module>"
;
                
# 1691 "<previous_module>"
tmain_42: IF(0,42,tmain_43)__CSEQ_removeindent;
                
# 1692 "<previous_module>"
__cs_local_lstack_pop_node = __cs_retval__pop_5;
                
# 1693 "<previous_module>"
;
                ;
                
# 1694 "<previous_module>"
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
                
# 1695 "<previous_module>"
tmain_43: IF(0,43,tmain_44)__CSEQ_removeindent;
                
# 1696 "<previous_module>"
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
                
# 1697 "<previous_module>"
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)

# 1698 "<previous_module>"
                {
                        
# 1699 "<previous_module>"
__cs_retval__lstack_pop_3 = 0;
                        
# 1700 "<previous_module>"
goto __exit__lstack_pop_3;
                        ;
                }

                
# 1702 "<previous_module>"
;
                
# 1703 "<previous_module>"
tmain_44: IF(0,44,tmain_45)__CSEQ_removeindent;
                
# 1704 "<previous_module>"
__CSEQ_atomic_fetch_sub(&results.size, 1);
                
# 1705 "<previous_module>"
static int __cs_local_lstack_pop_value;
                
# 1706 "<previous_module>"
tmain_45: IF(0,45,tmain_46)__CSEQ_removeindent;
                
# 1707 "<previous_module>"
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;

# 1708 "<previous_module>"
                {
                        
# 1709 "<previous_module>"
static struct lstack_head *__cs_param_push_head;
                        
# 1710 "<previous_module>"
tmain_46: IF(0,46,tmain_47)__CSEQ_removeindent;
                        
# 1711 "<previous_module>"
__cs_param_push_head = &results.free;
                        
# 1712 "<previous_module>"
static struct lstack_node *__cs_param_push_node;
                        
# 1713 "<previous_module>"
tmain_47: IF(0,47,tmain_48)__CSEQ_removeindent;
                        
# 1714 "<previous_module>"
__cs_param_push_node = __cs_local_lstack_pop_node;
                        
# 1715 "<previous_module>"
static struct lstack_head __cs_local_push_next;
                        
# 1716 "<previous_module>"
static struct lstack_head __cs_local_push_orig;
                        
# 1717 "<previous_module>"
static struct lstack_head __cs_retval____VERIFIER_load_Struct_10;

# 1718 "<previous_module>"
                        {
                                
# 1719 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                                
# 1720 "<previous_module>"
tmain_48: IF(0,48,tmain_49)__CSEQ_removeindent;
                                
# 1721 "<previous_module>"
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                                
# 1722 "<previous_module>"
tmain_49: IF(0,49,tmain_50)__CSEQ_removeindent;
                                
# 1723 "<previous_module>"
__cs_retval____VERIFIER_load_Struct_10 = *__cs_param___VERIFIER_load_Struct_head;
                                
# 1724 "<previous_module>"
goto __exit____VERIFIER_load_Struct_10;
                                ;
                                
# 1725 "<previous_module>"
__exit____VERIFIER_load_Struct_10:
                                __CPROVER_assume(__cs_pc_cs[0] >= 50);

                                
# 1726 "<previous_module>"
;
                                ;
                        }
                        
# 1728 "<previous_module>"
;
                        
# 1729 "<previous_module>"
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_10;
                        
# 1730 "<previous_module>"
tmain_50: IF(0,50,tmain_51)__CSEQ_removeindent;
                        
# 1731 "<previous_module>"
(*__cs_param_push_node).next = __cs_local_push_orig.node;
                        
# 1732 "<previous_module>"
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
                        
# 1733 "<previous_module>"
tmain_51: IF(0,51,tmain_52)__CSEQ_removeindent;
                        
# 1734 "<previous_module>"
__cs_local_push_next.node = __cs_param_push_node;
                        
# 1735 "<previous_module>"
static _Bool __cs_retval____VERIFIER_compare_and_exchange_10;

# 1736 "<previous_module>"
                        {
                                
# 1737 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                                
# 1738 "<previous_module>"
tmain_52: IF(0,52,tmain_53)__CSEQ_removeindent;
                                
# 1739 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                                
# 1740 "<previous_module>"
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                                
# 1741 "<previous_module>"
tmain_53: IF(0,53,tmain_54)__CSEQ_removeindent;
                                
# 1742 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                                
# 1743 "<previous_module>"
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                                
# 1744 "<previous_module>"
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                                
# 1745 "<previous_module>"
;
                                ;
                                
# 1746 "<previous_module>"
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                                
# 1747 "<previous_module>"
tmain_54: IF(0,54,tmain_55)__CSEQ_removeindent;
                                
# 1748 "<previous_module>"
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                                
# 1749 "<previous_module>"
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)

# 1750 "<previous_module>"
                                {
                                        
# 1751 "<previous_module>"
tmain_55: IF(0,55,tmain_56)__CSEQ_removeindent;
                                        
# 1752 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                                        
# 1753 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_10 = 1;
                                        
# 1754 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_10;
                                        ;
                                }
                                else

# 1757 "<previous_module>"
                                {
                                        __CPROVER_assume(__cs_pc_cs[0] >= 56);
                                        
# 1758 "<previous_module>"
tmain_56: IF(0,56,tmain_57)__CSEQ_removeindent;
                                        
# 1759 "<previous_module>"
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                                        
# 1760 "<previous_module>"
__cs_retval____VERIFIER_compare_and_exchange_10 = 0;
                                        
# 1761 "<previous_module>"
goto __exit____VERIFIER_compare_and_exchange_10;
                                        ;
                                }

                                
# 1763 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= 57);
                                ;
                                
# 1764 "<previous_module>"
__exit____VERIFIER_compare_and_exchange_10:
                                __CPROVER_assume(__cs_pc_cs[0] >= 57);

                                
# 1765 "<previous_module>"
;
                                ;
                        }
                        
# 1767 "<previous_module>"
;
                        
# 1768 "<previous_module>"
tmain_57: IF(0,57,tmain_58)__CSEQ_removeindent;
                        
# 1769 "<previous_module>"
__CPROVER_assume(__cs_retval____VERIFIER_compare_and_exchange_10);
                        
# 1770 "<previous_module>"
__exit__push_5:
                        __CPROVER_assume(__cs_pc_cs[0] >= 58);

                        
# 1771 "<previous_module>"
;
                        ;
                }
                
# 1773 "<previous_module>"
;
                
# 1774 "<previous_module>"
__cs_retval__lstack_pop_3 = __cs_local_lstack_pop_value;
                
# 1775 "<previous_module>"
goto __exit__lstack_pop_3;
                ;
                
# 1776 "<previous_module>"
__exit__lstack_pop_3:
                __CPROVER_assume(__cs_pc_cs[0] >= 58);

                
# 1777 "<previous_module>"
;
                ;
        }
        
# 1779 "<previous_module>"
;
        
# 1780 "<previous_module>"
__cs_local_main__agg_e2 = __cs_retval__lstack_pop_3;
        
# 1781 "<previous_module>"
static int __cs_local_main_i1;
        
# 1782 "<previous_module>"
__cs_local_main_i1 = 0;
        
# 1783 "<previous_module>"
static int __cs_local_main_i2;
        
# 1784 "<previous_module>"
__cs_local_main_i2 = 0;
        
# 1785 "<previous_module>"
;
        ;
        
# 1786 "<previous_module>"
static _Bool __cs_local_main___cs_tmp_if_cond_5;
        
# 1787 "<previous_module>"
__cs_local_main___cs_tmp_if_cond_5 = (__cs_local_main__agg_e1 >= 1) && (__cs_local_main__agg_e1 <= 10);
        
# 1788 "<previous_module>"
if (__cs_local_main___cs_tmp_if_cond_5)

# 1789 "<previous_module>"
        {
                
# 1790 "<previous_module>"
__cs_local_main__agg_t1[__cs_local_main_i1] = __cs_local_main__agg_e1;
                
# 1791 "<previous_module>"
__cs_local_main_i1++;
        }

        
# 1793 "<previous_module>"
;
        
# 1794 "<previous_module>"
;
        ;
        
# 1795 "<previous_module>"
static _Bool __cs_local_main___cs_tmp_if_cond_6;
        
# 1796 "<previous_module>"
__cs_local_main___cs_tmp_if_cond_6 = (__cs_local_main__agg_e1 >= 11) && (__cs_local_main__agg_e1 <= 20);
        
# 1797 "<previous_module>"
if (__cs_local_main___cs_tmp_if_cond_6)

# 1798 "<previous_module>"
        {
                
# 1799 "<previous_module>"
__cs_local_main__agg_t2[__cs_local_main_i2] = __cs_local_main__agg_e1;
                
# 1800 "<previous_module>"
__cs_local_main_i2++;
        }

        
# 1802 "<previous_module>"
;
        
# 1803 "<previous_module>"
;
        ;
        
# 1804 "<previous_module>"
static _Bool __cs_local_main___cs_tmp_if_cond_7;
        
# 1805 "<previous_module>"
__cs_local_main___cs_tmp_if_cond_7 = (__cs_local_main__agg_e2 >= 1) && (__cs_local_main__agg_e2 <= 10);
        
# 1806 "<previous_module>"
if (__cs_local_main___cs_tmp_if_cond_7)

# 1807 "<previous_module>"
        {
                
# 1808 "<previous_module>"
__cs_local_main__agg_t1[__cs_local_main_i1] = __cs_local_main__agg_e2;
                
# 1809 "<previous_module>"
__cs_local_main_i1++;
        }

        
# 1811 "<previous_module>"
;
        
# 1812 "<previous_module>"
;
        ;
        
# 1813 "<previous_module>"
static _Bool __cs_local_main___cs_tmp_if_cond_8;
        
# 1814 "<previous_module>"
__cs_local_main___cs_tmp_if_cond_8 = (__cs_local_main__agg_e2 >= 11) && (__cs_local_main__agg_e2 <= 20);
        
# 1815 "<previous_module>"
if (__cs_local_main___cs_tmp_if_cond_8)

# 1816 "<previous_module>"
        {
                
# 1817 "<previous_module>"
__cs_local_main__agg_t2[__cs_local_main_i2] = __cs_local_main__agg_e2;
                
# 1818 "<previous_module>"
__cs_local_main_i2++;
        }

        
# 1820 "<previous_module>"
;
        
# 1821 "<previous_module>"
assert(0);
        
# 1822 "<previous_module>"
goto __exit_main;
        ;
        
# 1823 "<previous_module>"
__exit_main:
        __CPROVER_assume(__cs_pc_cs[0] >= 58);

        
# 1824 "<previous_module>"
;
        ;
        
# 1825 "<previous_module>"
tmain_58: __CSEQ_removeindent;
        
# 1826 "<previous_module>"
__cs_exit(0, 0);
}


# 1828 "<previous_module>"
int main(void)
{
        
# 1829 "<previous_module>"
/* round  0 */__CSEQ_removeindent;
        
# 1830 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 1831 "<previous_module>"
unsigned __CPROVER_bitvector[6] __cs_tmp_t0_r0;
        
# 1832 "<previous_module>"
__cs_pc_cs[0] = __cs_tmp_t0_r0;
        
# 1833 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] > 0);
        
# 1834 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 58);
        
# 1835 "<previous_module>"
main_thread();
        
# 1836 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        
# 1838 "<previous_module>"
    /* worker_0 */__CSEQ_removeindent;
        
# 1839 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t1_r0;
        
# 1840 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 1841 "<previous_module>"
__cs_pc_cs[1] = __cs_tmp_t1_r0;
                
# 1842 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 84);
                
# 1843 "<previous_module>"
worker_0(__cs_threadargs[1]);
                
# 1844 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 1847 "<previous_module>"
    /* worker_1 */__CSEQ_removeindent;
        
# 1848 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t2_r0;
        
# 1849 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 1850 "<previous_module>"
__cs_pc_cs[2] = __cs_tmp_t2_r0;
                
# 1851 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 84);
                
# 1852 "<previous_module>"
worker_1(__cs_threadargs[2]);
                
# 1853 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 1856 "<previous_module>"
/* round  1 */__CSEQ_removeindent;
        
# 1857 "<previous_module>"
    /* main */__CSEQ_removeindent;
        
# 1858 "<previous_module>"
unsigned __CPROVER_bitvector[6] __cs_tmp_t0_r1;
        
# 1859 "<previous_module>"
if (__cs_active_thread[0])
        {
                
# 1860 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
                
# 1861 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 1862 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 58);
                
# 1863 "<previous_module>"
main_thread();
                
# 1864 "<previous_module>"
__cs_pc[0] = __cs_pc_cs[0];
        }

        
# 1868 "<previous_module>"
    /* worker_0 */__CSEQ_removeindent;
        
# 1869 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t1_r1;
        
# 1870 "<previous_module>"
if (__cs_active_thread[1])
        {
                
# 1871 "<previous_module>"
__cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r1;
                
# 1872 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] >= __cs_pc[1]);
                
# 1873 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[1] <= 84);
                
# 1874 "<previous_module>"
worker_0(__cs_threadargs[1]);
                
# 1875 "<previous_module>"
__cs_pc[1] = __cs_pc_cs[1];
        }

        
# 1878 "<previous_module>"
    /* worker_1 */__CSEQ_removeindent;
        
# 1879 "<previous_module>"
unsigned __CPROVER_bitvector[7] __cs_tmp_t2_r1;
        
# 1880 "<previous_module>"
if (__cs_active_thread[2])
        {
                
# 1881 "<previous_module>"
__cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r1;
                
# 1882 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] >= __cs_pc[2]);
                
# 1883 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[2] <= 84);
                
# 1884 "<previous_module>"
worker_1(__cs_threadargs[2]);
                
# 1885 "<previous_module>"
__cs_pc[2] = __cs_pc_cs[2];
        }

        
# 1888 "<previous_module>"
unsigned __CPROVER_bitvector[6] __cs_tmp_t0_r2;
        
# 1889 "<previous_module>"
if (__cs_active_thread[0] == 1)
        {
                
# 1890 "<previous_module>"
__cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
                
# 1891 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] >= __cs_pc[0]);
                
# 1892 "<previous_module>"
__CPROVER_assume(__cs_pc_cs[0] <= 58);
                
# 1893 "<previous_module>"
main_thread();
        }

        
# 1895 "<previous_module>"
return 0;
}

