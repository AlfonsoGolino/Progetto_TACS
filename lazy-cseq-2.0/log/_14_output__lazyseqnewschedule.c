unsigned int __cs_active_thread[3]={1};
unsigned int __cs_pc[3];
unsigned int __cs_pc_cs[3];
unsigned int __cs_last_thread;
unsigned int __cs_thread_lines[3] = {58, 84, 84};

void *__cs_safe_malloc(unsigned int __cs_size) {
	void *__cs_ptr = malloc(__cs_size);
	return __cs_ptr;
}

void __cs_init_scalar(void *__cs_var, unsigned int __cs_size) {
	if (__cs_size == sizeof(int))
		*(int *)__cs_var = __CSEQ_nondet_int();
	else {
		__cs_var = malloc(__cs_size);
	}
}

void __CSEQ_message(char *__cs_message) { ; }

typedef int __cs_t;

void *__cs_threadargs[3];
void *__cs_thread_joinargs[3];

int __cs_create(__cs_t *__cs_new_thread_id, void *__cs_attr, void *(*__cs_thread_function)(void*), void *__cs_arg, int __cs_threadID) {
	if (__cs_threadID > THREADS) return 0;
	*__cs_new_thread_id = __cs_threadID;
	__cs_active_thread[__cs_threadID] = 1;
	__cs_threadargs[__cs_threadID] = __cs_arg;
	__CSEQ_message("thread spawned");
	return 0;
}

int __cs_join(__cs_t __cs_id, void **__cs_value_ptr) {
	__CSEQ_assume(__cs_pc[__cs_id] == __cs_thread_lines[__cs_id]);
	*__cs_value_ptr = __cs_thread_joinargs[__cs_id];
	return 0;
}

int __cs_exit(void *__cs_value_ptr, unsigned int __cs_thread_index) {
	__cs_thread_joinargs[__cs_thread_index] = __cs_value_ptr;
	return 0;
}

int __cs_self(void) { return 1; }

typedef int __cs_mutex_t;

int __cs_mutex_init (__cs_mutex_t *__cs_m, int __cs_val) {
	*__cs_m = -1;
	return 0;
}

int __cs_mutex_destroy(__cs_mutex_t *__cs_mutex_to_destroy) {
	__CSEQ_assertext(*__cs_mutex_to_destroy!=0,"attempt to destroy an uninitialized mutex");
	__CSEQ_assertext(*__cs_mutex_to_destroy!=-2,"attempt to destroy a previously destroyed mutex");
	__CSEQ_assertext(*__cs_mutex_to_destroy==-1,"attempt to destroy a locked mutex");
	*__cs_mutex_to_destroy = -2;
	__CSEQ_message("lock destroyed");
	return 0;
}

int __cs_mutex_lock(__cs_mutex_t *__cs_mutex_to_lock, unsigned int __cs_thread_index) {
	__CSEQ_assertext(*__cs_mutex_to_lock!=0,"attempt to lock an uninitialized mutex");
	__CSEQ_assertext(*__cs_mutex_to_lock!=-2,"attempt to lock a destroyed mutex");
	__CSEQ_assume(*__cs_mutex_to_lock==-1);
	*__cs_mutex_to_lock = __cs_thread_index+1;
	__CSEQ_message("lock acquired");
	return 0;
}

int __cs_mutex_unlock(__cs_mutex_t *__cs_mutex_to_unlock, unsigned int __cs_thread_index) {
	__CSEQ_assertext(*__cs_mutex_to_unlock!=0,"attempt to unlock an uninitialized mutex");
	__CSEQ_assertext(*__cs_mutex_to_unlock!=-2,"attempt to unlock a destroyed mutex");
	__CSEQ_assume(*__cs_mutex_to_unlock==(__cs_thread_index+1));
	*__cs_mutex_to_unlock = -1;
	__CSEQ_message("lock released");
	return 0;
}

typedef int __cs_cond_t;

int __cs_cond_init(__cs_cond_t *__cs_cond_to_init, void *__cs_attr) {
	*__cs_cond_to_init = -1;
	return 0;
}

int __cs_cond_destroy(__cs_cond_t *__cs_cond_to_destroy) {
	*__cs_cond_to_destroy = -2;
	return 0;
}

int __cs_cond_wait_1(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m, unsigned int __cs_thread_index) {
	__CSEQ_assertext(*__cs_cond_to_wait_for!=0,"attempt to use an uninitialized conditional variable");
	__CSEQ_assertext(*__cs_cond_to_wait_for!=-2,"attempt to use a destroyed conditional variable");
	__cs_mutex_unlock(__cs_m, __cs_thread_index);
	return 0;
}

int __cs_cond_wait_2(__cs_cond_t *__cs_cond_to_wait_for, __cs_mutex_t *__cs_m, unsigned int __cs_thread_index) {
	__CSEQ_assume(*__cs_cond_to_wait_for == 1);
	__cs_mutex_lock(__cs_m, __cs_thread_index);
	return 0;
}

int __cs_cond_signal(__cs_cond_t *__cs_cond_to_signal) {
	*__cs_cond_to_signal = 1;
	__CSEQ_message("conditional variable signal");
	return 0;
}

int __cs_cond_broadcast(__cs_cond_t *__cs_cond_to_broadcast) {
	*__cs_cond_to_broadcast = 1;
	__CSEQ_message("conditional variable broadcast");
	return 0;
}

typedef struct __cs_barrier_t{
	unsigned int init;
	unsigned int current;
} __cs_barrier_t;

int __cs_barrier_init(__cs_barrier_t *__cs_barrier_to_init, void * __cs_attr, unsigned int count){
	__CSEQ_assertext(count > 0, "count must be greater than 0");
	__cs_barrier_to_init->current = count;
	__cs_barrier_to_init->init = count;
	return 0;
}

int __cs_barrier_destroy(__cs_barrier_t *__cs_barrier_to_destroy) {
	__cs_barrier_to_destroy->init = -1;
	__cs_barrier_to_destroy->current = -1;
	return 0;
}


int __cs_barrier_wait_1(__cs_barrier_t *__cs_barrier_to_wait){
	__CSEQ_assertext(__cs_barrier_to_wait->init > 0, "attempt to use an uninitialized barrier variable");
	__cs_barrier_to_wait->current--;
	return 0;
}

int __cs_barrier_wait_2(__cs_barrier_t *__cs_barrier_to_wait){
	__CSEQ_assertext(__cs_barrier_to_wait->init > 0, "attempt to use an uninitialized barrier variable");
	__CSEQ_assume(__cs_barrier_to_wait->current == 0);
	__cs_barrier_to_wait->current = __cs_barrier_to_wait->init;
	return 0;
}

typedef int __cs_attr_t;
struct sched_param {
   int sched_priority;
};
int   __cs_attr_init(__cs_attr_t * t) { return 0;}
int   __cs_attr_destroy(__cs_attr_t * t) { return 0;}
int   __cs_attr_getdetachstate(const __cs_attr_t * t, int * s) { return 0;}
int   __cs_attr_getguardsize(const __cs_attr_t * t, unsigned int * s) { return 0;}
int   __cs_attr_getinheritsched(const __cs_attr_t * t, int * s) { return 0;}
int   __cs_attr_getschedparam(const __cs_attr_t * t, struct sched_param * s) { return 0;}
int   __cs_attr_getschedpolicy(const __cs_attr_t * t, int * s) { return 0;}
int   __cs_attr_getscope(const __cs_attr_t * t, int * s) { return 0;}
int   __cs_attr_getstackaddr(const __cs_attr_t * t, void ** s) { return 0;}
int   __cs_attr_getstacksize(const __cs_attr_t * t, unsigned int *s) { return 0;}
int   __cs_attr_setdetachstate(__cs_attr_t * t, int s) { return 0;}
int   __cs_attr_setguardsize(__cs_attr_t * t, unsigned int s) { return 0;}
int   __cs_attr_setinheritsched(__cs_attr_t * t, int s) { return 0;}
int   __cs_attr_setschedparam(__cs_attr_t * t, const struct sched_param * s) { return 0;}
int   __cs_attr_setschedpolicy(__cs_attr_t * t, int s) { return 0;}
int   __cs_attr_setscope(__cs_attr_t * t, int s) { return 0;}
int   __cs_attr_setstackaddr(__cs_attr_t * t, void * s) { return 0;}
int   __cs_attr_setstacksize(__cs_attr_t * t, unsigned int s) { return 0;}
typedef int _____STARTSTRIPPINGFROMHERE_____;
typedef int __cs_barrier_t;
typedef int __cs_barrierattr_t;
typedef int __cs_attr_t;
typedef int __cs_cond_t;
typedef int __cs_condattr_t;
typedef int __cs_key_t;
typedef int __cs_mutex_t;
typedef int __cs_mutexattr_t;
typedef int __cs_once_t;
typedef int __cs_rwlock_t;
typedef int __cs_rwlockattr_t;
typedef int __cs_t;
typedef int size_t;
typedef int __builtin_va_list;
typedef int __gnuc_va_list;
typedef int __int8_t;
typedef int __uint8_t;
typedef int __int16_t;
typedef int __uint16_t;
typedef int __int_least16_t;
typedef int __uint_least16_t;
typedef int __int32_t;
typedef int __uint32_t;
typedef int __int64_t;
typedef int __uint64_t;
typedef int __int_least32_t;
typedef int __uint_least32_t;
typedef int __s8;
typedef int __u8;
typedef int __s16;
typedef int __u16;
typedef int __s32;
typedef int __u32;
typedef int __s64;
typedef int __u64;
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
typedef int _off_t;
typedef int __dev_t;
typedef int __uid_t;
typedef int __gid_t;
typedef int _off64_t;
typedef int _fpos_t;
typedef int _ssize_t;
typedef int wint_t;
typedef int _mbstate_t;
typedef int _flock_t;
typedef int _iconv_t;
typedef int __ULong;
typedef int __FILE;
typedef int ptrdiff_t;
typedef int wchar_t;
typedef int __off_t;
typedef int __pid_t;
typedef int __loff_t;
typedef int u_char;
typedef int u_short;
typedef int u_int;
typedef int u_long;
typedef int ushort;
typedef int uint;
typedef int clock_t;
typedef int time_t;
typedef int daddr_t;
typedef int caddr_t;
typedef int ino_t;
typedef int off_t;
typedef int dev_t;
typedef int uid_t;
typedef int gid_t;
typedef int pid_t;
typedef int key_t;
typedef int ssize_t;
typedef int mode_t;
typedef int nlink_t;
typedef int fd_mask;
typedef int _types_fd_set;
typedef int fd_set;
typedef int clockid_t;
typedef int timer_t;
typedef int useconds_t;
typedef int suseconds_t;
typedef int FILE;
typedef int fpos_t;
typedef int cookie_read_function_t;
typedef int cookie_write_function_t;
typedef int cookie_seek_function_t;
typedef int cookie_close_function_t;
typedef int cookie_io_functions_t;
typedef int div_t;
typedef int ldiv_t;
typedef int lldiv_t;
typedef int sigset_t;
typedef int __sigset_t;
typedef int _sig_func_ptr;
typedef int sig_atomic_t;
typedef int __tzrule_type;
typedef int __tzinfo_type;
typedef int mbstate_t;
typedef int sem_t;
typedef int pthread_t;
typedef int pthread_attr_t;
typedef int pthread_mutex_t;
typedef int pthread_mutexattr_t;
typedef int pthread_cond_t;
typedef int pthread_condattr_t;
typedef int pthread_key_t;
typedef int pthread_once_t;
typedef int pthread_rwlock_t;
typedef int pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
typedef int pthread_barrier_t;
typedef int pthread_barrierattr_t;
typedef int jmp_buf;
typedef int rlim_t;
typedef int sa_family_t;
typedef int sigjmp_buf;
typedef int stack_t;
typedef int siginfo_t;
typedef int z_stream;
typedef int int8_t;
typedef int uint8_t;
typedef int int16_t;
typedef int uint16_t;
typedef int int32_t;
typedef int uint32_t;
typedef int int64_t;
typedef int uint64_t;
typedef int int_least8_t;
typedef int uint_least8_t;
typedef int int_least16_t;
typedef int uint_least16_t;
typedef int int_least32_t;
typedef int uint_least32_t;
typedef int int_least64_t;
typedef int uint_least64_t;
typedef int int_fast8_t;
typedef int uint_fast8_t;
typedef int int_fast16_t;
typedef int uint_fast16_t;
typedef int int_fast32_t;
typedef int uint_fast32_t;
typedef int int_fast64_t;
typedef int uint_fast64_t;
typedef int intptr_t;
typedef int uintptr_t;
typedef int intmax_t;
typedef int uintmax_t;
typedef _Bool bool;
typedef void BZFILE;
typedef int va_list;
typedef int loff_t;
typedef int _____STOPSTRIPPINGFROMHERE_____;
struct lstack_node
{
int value;
struct lstack_node *next;
};
struct lstack_head
{
unsigned int aba;
struct lstack_node *node;
};
typedef struct anonstruct_0
{
struct lstack_node *node_buffer;
struct lstack_head head;
struct lstack_head free;
int size;
} lstack_t;
lstack_t results;
int __CSEQ_atomic_fetch_add(int *__cs_param___CSEQ_atomic_fetch_add_obj, int __cs_param___CSEQ_atomic_fetch_add_v)
{
static int __cs_local___CSEQ_atomic_fetch_add_old;
__cs_local___CSEQ_atomic_fetch_add_old = *__cs_param___CSEQ_atomic_fetch_add_obj;
*__cs_param___CSEQ_atomic_fetch_add_obj = (*__cs_param___CSEQ_atomic_fetch_add_obj) + __cs_param___CSEQ_atomic_fetch_add_v;
return __cs_local___CSEQ_atomic_fetch_add_old;;
}
int __CSEQ_atomic_fetch_sub(int *__cs_param___CSEQ_atomic_fetch_sub_obj, int __cs_param___CSEQ_atomic_fetch_sub_v)
{
static int __cs_local___CSEQ_atomic_fetch_sub_old;
__cs_local___CSEQ_atomic_fetch_sub_old = *__cs_param___CSEQ_atomic_fetch_sub_obj;
*__cs_param___CSEQ_atomic_fetch_sub_obj = (*__cs_param___CSEQ_atomic_fetch_sub_obj) - __cs_param___CSEQ_atomic_fetch_sub_v;
return __cs_local___CSEQ_atomic_fetch_sub_old;;
}
void *worker_0(void *__cs_param_worker_arg)
{
static int __cs_local_worker_thread;
__CSEQ_rawline("IF(1,0,tworker_0_1)");
__cs_local_worker_thread = (int) __cs_param_worker_arg;
static int __cs_local_worker_valore[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
static int *__cs_local_worker_valore_restituito;
__CSEQ_rawline("tworker_0_1: IF(1,1,tworker_0_2)");
__cs_local_worker_valore_restituito = (int *) __cs_safe_malloc((sizeof(int)) * 10);
static int __cs_retval__lstack_push_1;
    {
static int __cs_param_lstack_push_value;
__cs_param_lstack_push_value = __cs_local_worker_valore[0] + ((__cs_local_worker_thread - 1) * 10);
static struct lstack_node *__cs_local_lstack_push_node;
static struct lstack_node *__cs_retval__pop_1;
        {
static struct lstack_head *__cs_param_pop_head;
__CSEQ_rawline("tworker_0_2: IF(1,2,tworker_0_3)");
__cs_param_pop_head = &results.free;
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_1;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_0_3: IF(1,3,tworker_0_4)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
__CSEQ_rawline("tworker_0_4: IF(1,4,tworker_0_5)");
__cs_retval____VERIFIER_load_Struct_1 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_1;;
                __exit____VERIFIER_load_Struct_1: __CSEQ_assume( __cs_pc_cs[1] >= 5 );
;;
            }
;
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_1;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__CSEQ_rawline("tworker_0_5: IF(1,5,tworker_0_6)");
__cs_retval__pop_1 = 0;
goto __exit__pop_1;;
            }
            __CSEQ_assume( __cs_pc_cs[1] >= 6 );;
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_1;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_0_6: IF(1,6,tworker_0_7)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_0_7: IF(1,7,tworker_0_8)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_0_8: IF(1,8,tworker_0_9)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_0_9: IF(1,9,tworker_0_10)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_1 = 1;
goto __exit____VERIFIER_compare_and_exchange_1;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[1] >= 10 );
__CSEQ_rawline("tworker_0_10: IF(1,10,tworker_0_11)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_1 = 0;
goto __exit____VERIFIER_compare_and_exchange_1;;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 11 );;
                __exit____VERIFIER_compare_and_exchange_1: __CSEQ_assume( __cs_pc_cs[1] >= 11 );
;;
            }
;
__CSEQ_rawline("tworker_0_11: IF(1,11,tworker_0_12)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_1);
__CSEQ_rawline("tworker_0_12: IF(1,12,tworker_0_13)");
__cs_retval__pop_1 = __cs_local_pop_orig.node;
goto __exit__pop_1;;
            __exit__pop_1: __CSEQ_assume( __cs_pc_cs[1] >= 13 );
;;
        }
;
__CSEQ_rawline("tworker_0_13: IF(1,13,tworker_0_14)");
__cs_local_lstack_push_node = __cs_retval__pop_1;
;;
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
__CSEQ_rawline("tworker_0_14: IF(1,14,tworker_0_15)");
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
if (__cs_local_lstack_push___cs_tmp_if_cond_3)
        {
__cs_retval__lstack_push_1 = ENOMEM;
goto __exit__lstack_push_1;;
        }
        ;
__CSEQ_rawline("tworker_0_15: IF(1,15,tworker_0_16)");
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;
        {
static struct lstack_head *__cs_param_push_head;
__CSEQ_rawline("tworker_0_16: IF(1,16,tworker_0_17)");
__cs_param_push_head = &results.head;
static struct lstack_node *__cs_param_push_node;
__CSEQ_rawline("tworker_0_17: IF(1,17,tworker_0_18)");
__cs_param_push_node = __cs_local_lstack_push_node;
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_2;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_0_18: IF(1,18,tworker_0_19)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
__CSEQ_rawline("tworker_0_19: IF(1,19,tworker_0_20)");
__cs_retval____VERIFIER_load_Struct_2 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_2;;
                __exit____VERIFIER_load_Struct_2: __CSEQ_assume( __cs_pc_cs[1] >= 20 );
;;
            }
;
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_2;
__CSEQ_rawline("tworker_0_20: IF(1,20,tworker_0_21)");
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__CSEQ_rawline("tworker_0_21: IF(1,21,tworker_0_22)");
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_2;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_0_22: IF(1,22,tworker_0_23)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_0_23: IF(1,23,tworker_0_24)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_0_24: IF(1,24,tworker_0_25)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_0_25: IF(1,25,tworker_0_26)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_2 = 1;
goto __exit____VERIFIER_compare_and_exchange_2;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[1] >= 26 );
__CSEQ_rawline("tworker_0_26: IF(1,26,tworker_0_27)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_2 = 0;
goto __exit____VERIFIER_compare_and_exchange_2;;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 27 );;
                __exit____VERIFIER_compare_and_exchange_2: __CSEQ_assume( __cs_pc_cs[1] >= 27 );
;;
            }
;
__CSEQ_rawline("tworker_0_27: IF(1,27,tworker_0_28)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_2);
            __exit__push_1: __CSEQ_assume( __cs_pc_cs[1] >= 28 );
;;
        }
;
__CSEQ_rawline("tworker_0_28: IF(1,28,tworker_0_29)");
__CSEQ_atomic_fetch_add(&results.size, 1);
__cs_retval__lstack_push_1 = 0;
goto __exit__lstack_push_1;;
        __exit__lstack_push_1: __CSEQ_assume( __cs_pc_cs[1] >= 29 );
;;
    }
;
__cs_retval__lstack_push_1;
static int __cs_retval__lstack_pop_1;
    {
static struct lstack_node *__cs_local_lstack_pop_node;
static struct lstack_node *__cs_retval__pop_2;
        {
static struct lstack_head *__cs_param_pop_head;
__CSEQ_rawline("tworker_0_29: IF(1,29,tworker_0_30)");
__cs_param_pop_head = &results.head;
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_3;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_0_30: IF(1,30,tworker_0_31)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
__CSEQ_rawline("tworker_0_31: IF(1,31,tworker_0_32)");
__cs_retval____VERIFIER_load_Struct_3 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_3;;
                __exit____VERIFIER_load_Struct_3: __CSEQ_assume( __cs_pc_cs[1] >= 32 );
;;
            }
;
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_3;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__CSEQ_rawline("tworker_0_32: IF(1,32,tworker_0_33)");
__cs_retval__pop_2 = 0;
goto __exit__pop_2;;
            }
            __CSEQ_assume( __cs_pc_cs[1] >= 33 );;
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_3;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_0_33: IF(1,33,tworker_0_34)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_0_34: IF(1,34,tworker_0_35)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_0_35: IF(1,35,tworker_0_36)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_0_36: IF(1,36,tworker_0_37)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_3 = 1;
goto __exit____VERIFIER_compare_and_exchange_3;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[1] >= 37 );
__CSEQ_rawline("tworker_0_37: IF(1,37,tworker_0_38)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_3 = 0;
goto __exit____VERIFIER_compare_and_exchange_3;;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 38 );;
                __exit____VERIFIER_compare_and_exchange_3: __CSEQ_assume( __cs_pc_cs[1] >= 38 );
;;
            }
;
__CSEQ_rawline("tworker_0_38: IF(1,38,tworker_0_39)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_3);
__CSEQ_rawline("tworker_0_39: IF(1,39,tworker_0_40)");
__cs_retval__pop_2 = __cs_local_pop_orig.node;
goto __exit__pop_2;;
            __exit__pop_2: __CSEQ_assume( __cs_pc_cs[1] >= 40 );
;;
        }
;
__CSEQ_rawline("tworker_0_40: IF(1,40,tworker_0_41)");
__cs_local_lstack_pop_node = __cs_retval__pop_2;
;;
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
__CSEQ_rawline("tworker_0_41: IF(1,41,tworker_0_42)");
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
__cs_retval__lstack_pop_1 = 0;
goto __exit__lstack_pop_1;;
        }
        ;
__CSEQ_rawline("tworker_0_42: IF(1,42,tworker_0_43)");
__CSEQ_atomic_fetch_sub(&results.size, 1);
static int __cs_local_lstack_pop_value;
__CSEQ_rawline("tworker_0_43: IF(1,43,tworker_0_44)");
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
static struct lstack_head *__cs_param_push_head;
__CSEQ_rawline("tworker_0_44: IF(1,44,tworker_0_45)");
__cs_param_push_head = &results.free;
static struct lstack_node *__cs_param_push_node;
__CSEQ_rawline("tworker_0_45: IF(1,45,tworker_0_46)");
__cs_param_push_node = __cs_local_lstack_pop_node;
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_4;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_0_46: IF(1,46,tworker_0_47)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
__CSEQ_rawline("tworker_0_47: IF(1,47,tworker_0_48)");
__cs_retval____VERIFIER_load_Struct_4 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_4;;
                __exit____VERIFIER_load_Struct_4: __CSEQ_assume( __cs_pc_cs[1] >= 48 );
;;
            }
;
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_4;
__CSEQ_rawline("tworker_0_48: IF(1,48,tworker_0_49)");
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__CSEQ_rawline("tworker_0_49: IF(1,49,tworker_0_50)");
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_4;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_0_50: IF(1,50,tworker_0_51)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_0_51: IF(1,51,tworker_0_52)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_0_52: IF(1,52,tworker_0_53)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_0_53: IF(1,53,tworker_0_54)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_4 = 1;
goto __exit____VERIFIER_compare_and_exchange_4;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[1] >= 54 );
__CSEQ_rawline("tworker_0_54: IF(1,54,tworker_0_55)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_4 = 0;
goto __exit____VERIFIER_compare_and_exchange_4;;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 55 );;
                __exit____VERIFIER_compare_and_exchange_4: __CSEQ_assume( __cs_pc_cs[1] >= 55 );
;;
            }
;
__CSEQ_rawline("tworker_0_55: IF(1,55,tworker_0_56)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_4);
            __exit__push_2: __CSEQ_assume( __cs_pc_cs[1] >= 56 );
;;
        }
;
__cs_retval__lstack_pop_1 = __cs_local_lstack_pop_value;
goto __exit__lstack_pop_1;;
        __exit__lstack_pop_1: __CSEQ_assume( __cs_pc_cs[1] >= 56 );
;;
    }
;
__CSEQ_rawline("tworker_0_56: IF(1,56,tworker_0_57)");
__cs_local_worker_valore_restituito[0] = __cs_retval__lstack_pop_1;
static int __cs_retval__lstack_push_2;
    {
static int __cs_param_lstack_push_value;
__cs_param_lstack_push_value = __cs_local_worker_valore[1] + ((__cs_local_worker_thread - 1) * 10);
static struct lstack_node *__cs_local_lstack_push_node;
static struct lstack_node *__cs_retval__pop_3;
        {
static struct lstack_head *__cs_param_pop_head;
__CSEQ_rawline("tworker_0_57: IF(1,57,tworker_0_58)");
__cs_param_pop_head = &results.free;
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_5;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_0_58: IF(1,58,tworker_0_59)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
__CSEQ_rawline("tworker_0_59: IF(1,59,tworker_0_60)");
__cs_retval____VERIFIER_load_Struct_5 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_5;;
                __exit____VERIFIER_load_Struct_5: __CSEQ_assume( __cs_pc_cs[1] >= 60 );
;;
            }
;
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_5;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__CSEQ_rawline("tworker_0_60: IF(1,60,tworker_0_61)");
__cs_retval__pop_3 = 0;
goto __exit__pop_3;;
            }
            __CSEQ_assume( __cs_pc_cs[1] >= 61 );;
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_5;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_0_61: IF(1,61,tworker_0_62)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_0_62: IF(1,62,tworker_0_63)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_0_63: IF(1,63,tworker_0_64)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_0_64: IF(1,64,tworker_0_65)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_5 = 1;
goto __exit____VERIFIER_compare_and_exchange_5;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[1] >= 65 );
__CSEQ_rawline("tworker_0_65: IF(1,65,tworker_0_66)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_5 = 0;
goto __exit____VERIFIER_compare_and_exchange_5;;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 66 );;
                __exit____VERIFIER_compare_and_exchange_5: __CSEQ_assume( __cs_pc_cs[1] >= 66 );
;;
            }
;
__CSEQ_rawline("tworker_0_66: IF(1,66,tworker_0_67)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_5);
__CSEQ_rawline("tworker_0_67: IF(1,67,tworker_0_68)");
__cs_retval__pop_3 = __cs_local_pop_orig.node;
goto __exit__pop_3;;
            __exit__pop_3: __CSEQ_assume( __cs_pc_cs[1] >= 68 );
;;
        }
;
__CSEQ_rawline("tworker_0_68: IF(1,68,tworker_0_69)");
__cs_local_lstack_push_node = __cs_retval__pop_3;
;;
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
__CSEQ_rawline("tworker_0_69: IF(1,69,tworker_0_70)");
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
if (__cs_local_lstack_push___cs_tmp_if_cond_3)
        {
__cs_retval__lstack_push_2 = ENOMEM;
goto __exit__lstack_push_2;;
        }
        ;
__CSEQ_rawline("tworker_0_70: IF(1,70,tworker_0_71)");
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;
        {
static struct lstack_head *__cs_param_push_head;
__CSEQ_rawline("tworker_0_71: IF(1,71,tworker_0_72)");
__cs_param_push_head = &results.head;
static struct lstack_node *__cs_param_push_node;
__CSEQ_rawline("tworker_0_72: IF(1,72,tworker_0_73)");
__cs_param_push_node = __cs_local_lstack_push_node;
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_6;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_0_73: IF(1,73,tworker_0_74)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
__CSEQ_rawline("tworker_0_74: IF(1,74,tworker_0_75)");
__cs_retval____VERIFIER_load_Struct_6 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_6;;
                __exit____VERIFIER_load_Struct_6: __CSEQ_assume( __cs_pc_cs[1] >= 75 );
;;
            }
;
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_6;
__CSEQ_rawline("tworker_0_75: IF(1,75,tworker_0_76)");
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__CSEQ_rawline("tworker_0_76: IF(1,76,tworker_0_77)");
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_6;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_0_77: IF(1,77,tworker_0_78)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_0_78: IF(1,78,tworker_0_79)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_0_79: IF(1,79,tworker_0_80)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_0_80: IF(1,80,tworker_0_81)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_6 = 1;
goto __exit____VERIFIER_compare_and_exchange_6;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[1] >= 81 );
__CSEQ_rawline("tworker_0_81: IF(1,81,tworker_0_82)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_6 = 0;
goto __exit____VERIFIER_compare_and_exchange_6;;
                }
                __CSEQ_assume( __cs_pc_cs[1] >= 82 );;
                __exit____VERIFIER_compare_and_exchange_6: __CSEQ_assume( __cs_pc_cs[1] >= 82 );
;;
            }
;
__CSEQ_rawline("tworker_0_82: IF(1,82,tworker_0_83)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_6);
            __exit__push_3: __CSEQ_assume( __cs_pc_cs[1] >= 83 );
;;
        }
;
__CSEQ_rawline("tworker_0_83: IF(1,83,tworker_0_84)");
__CSEQ_atomic_fetch_add(&results.size, 1);
__cs_retval__lstack_push_2 = 0;
goto __exit__lstack_push_2;;
        __exit__lstack_push_2: __CSEQ_assume( __cs_pc_cs[1] >= 84 );
;;
    }
;
__cs_retval__lstack_push_2;
goto __exit_worker;;
    __exit_worker: __CSEQ_assume( __cs_pc_cs[1] >= 84 );
;;
__CSEQ_rawline("tworker_0_84: ");
__cs_exit(0, 1);
}
void *worker_1(void *__cs_param_worker_arg)
{
static int __cs_local_worker_thread;
__CSEQ_rawline("IF(2,0,tworker_1_1)");
__cs_local_worker_thread = (int) __cs_param_worker_arg;
static int __cs_local_worker_valore[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
static int *__cs_local_worker_valore_restituito;
__CSEQ_rawline("tworker_1_1: IF(2,1,tworker_1_2)");
__cs_local_worker_valore_restituito = (int *) __cs_safe_malloc((sizeof(int)) * 10);
static int __cs_retval__lstack_push_1;
    {
static int __cs_param_lstack_push_value;
__cs_param_lstack_push_value = __cs_local_worker_valore[0] + ((__cs_local_worker_thread - 1) * 10);
static struct lstack_node *__cs_local_lstack_push_node;
static struct lstack_node *__cs_retval__pop_1;
        {
static struct lstack_head *__cs_param_pop_head;
__CSEQ_rawline("tworker_1_2: IF(2,2,tworker_1_3)");
__cs_param_pop_head = &results.free;
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_1;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_1_3: IF(2,3,tworker_1_4)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
__CSEQ_rawline("tworker_1_4: IF(2,4,tworker_1_5)");
__cs_retval____VERIFIER_load_Struct_1 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_1;;
                __exit____VERIFIER_load_Struct_1: __CSEQ_assume( __cs_pc_cs[2] >= 5 );
;;
            }
;
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_1;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__CSEQ_rawline("tworker_1_5: IF(2,5,tworker_1_6)");
__cs_retval__pop_1 = 0;
goto __exit__pop_1;;
            }
            __CSEQ_assume( __cs_pc_cs[2] >= 6 );;
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_1;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_1_6: IF(2,6,tworker_1_7)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_1_7: IF(2,7,tworker_1_8)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_1_8: IF(2,8,tworker_1_9)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_1_9: IF(2,9,tworker_1_10)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_1 = 1;
goto __exit____VERIFIER_compare_and_exchange_1;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[2] >= 10 );
__CSEQ_rawline("tworker_1_10: IF(2,10,tworker_1_11)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_1 = 0;
goto __exit____VERIFIER_compare_and_exchange_1;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 11 );;
                __exit____VERIFIER_compare_and_exchange_1: __CSEQ_assume( __cs_pc_cs[2] >= 11 );
;;
            }
;
__CSEQ_rawline("tworker_1_11: IF(2,11,tworker_1_12)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_1);
__CSEQ_rawline("tworker_1_12: IF(2,12,tworker_1_13)");
__cs_retval__pop_1 = __cs_local_pop_orig.node;
goto __exit__pop_1;;
            __exit__pop_1: __CSEQ_assume( __cs_pc_cs[2] >= 13 );
;;
        }
;
__CSEQ_rawline("tworker_1_13: IF(2,13,tworker_1_14)");
__cs_local_lstack_push_node = __cs_retval__pop_1;
;;
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
__CSEQ_rawline("tworker_1_14: IF(2,14,tworker_1_15)");
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
if (__cs_local_lstack_push___cs_tmp_if_cond_3)
        {
__cs_retval__lstack_push_1 = ENOMEM;
goto __exit__lstack_push_1;;
        }
        ;
__CSEQ_rawline("tworker_1_15: IF(2,15,tworker_1_16)");
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;
        {
static struct lstack_head *__cs_param_push_head;
__CSEQ_rawline("tworker_1_16: IF(2,16,tworker_1_17)");
__cs_param_push_head = &results.head;
static struct lstack_node *__cs_param_push_node;
__CSEQ_rawline("tworker_1_17: IF(2,17,tworker_1_18)");
__cs_param_push_node = __cs_local_lstack_push_node;
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_2;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_1_18: IF(2,18,tworker_1_19)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
__CSEQ_rawline("tworker_1_19: IF(2,19,tworker_1_20)");
__cs_retval____VERIFIER_load_Struct_2 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_2;;
                __exit____VERIFIER_load_Struct_2: __CSEQ_assume( __cs_pc_cs[2] >= 20 );
;;
            }
;
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_2;
__CSEQ_rawline("tworker_1_20: IF(2,20,tworker_1_21)");
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__CSEQ_rawline("tworker_1_21: IF(2,21,tworker_1_22)");
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_2;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_1_22: IF(2,22,tworker_1_23)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_1_23: IF(2,23,tworker_1_24)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_1_24: IF(2,24,tworker_1_25)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_1_25: IF(2,25,tworker_1_26)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_2 = 1;
goto __exit____VERIFIER_compare_and_exchange_2;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[2] >= 26 );
__CSEQ_rawline("tworker_1_26: IF(2,26,tworker_1_27)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_2 = 0;
goto __exit____VERIFIER_compare_and_exchange_2;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 27 );;
                __exit____VERIFIER_compare_and_exchange_2: __CSEQ_assume( __cs_pc_cs[2] >= 27 );
;;
            }
;
__CSEQ_rawline("tworker_1_27: IF(2,27,tworker_1_28)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_2);
            __exit__push_1: __CSEQ_assume( __cs_pc_cs[2] >= 28 );
;;
        }
;
__CSEQ_rawline("tworker_1_28: IF(2,28,tworker_1_29)");
__CSEQ_atomic_fetch_add(&results.size, 1);
__cs_retval__lstack_push_1 = 0;
goto __exit__lstack_push_1;;
        __exit__lstack_push_1: __CSEQ_assume( __cs_pc_cs[2] >= 29 );
;;
    }
;
__cs_retval__lstack_push_1;
static int __cs_retval__lstack_pop_1;
    {
static struct lstack_node *__cs_local_lstack_pop_node;
static struct lstack_node *__cs_retval__pop_2;
        {
static struct lstack_head *__cs_param_pop_head;
__CSEQ_rawline("tworker_1_29: IF(2,29,tworker_1_30)");
__cs_param_pop_head = &results.head;
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_3;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_1_30: IF(2,30,tworker_1_31)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
__CSEQ_rawline("tworker_1_31: IF(2,31,tworker_1_32)");
__cs_retval____VERIFIER_load_Struct_3 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_3;;
                __exit____VERIFIER_load_Struct_3: __CSEQ_assume( __cs_pc_cs[2] >= 32 );
;;
            }
;
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_3;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__CSEQ_rawline("tworker_1_32: IF(2,32,tworker_1_33)");
__cs_retval__pop_2 = 0;
goto __exit__pop_2;;
            }
            __CSEQ_assume( __cs_pc_cs[2] >= 33 );;
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_3;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_1_33: IF(2,33,tworker_1_34)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_1_34: IF(2,34,tworker_1_35)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_1_35: IF(2,35,tworker_1_36)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_1_36: IF(2,36,tworker_1_37)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_3 = 1;
goto __exit____VERIFIER_compare_and_exchange_3;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[2] >= 37 );
__CSEQ_rawline("tworker_1_37: IF(2,37,tworker_1_38)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_3 = 0;
goto __exit____VERIFIER_compare_and_exchange_3;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 38 );;
                __exit____VERIFIER_compare_and_exchange_3: __CSEQ_assume( __cs_pc_cs[2] >= 38 );
;;
            }
;
__CSEQ_rawline("tworker_1_38: IF(2,38,tworker_1_39)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_3);
__CSEQ_rawline("tworker_1_39: IF(2,39,tworker_1_40)");
__cs_retval__pop_2 = __cs_local_pop_orig.node;
goto __exit__pop_2;;
            __exit__pop_2: __CSEQ_assume( __cs_pc_cs[2] >= 40 );
;;
        }
;
__CSEQ_rawline("tworker_1_40: IF(2,40,tworker_1_41)");
__cs_local_lstack_pop_node = __cs_retval__pop_2;
;;
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
__CSEQ_rawline("tworker_1_41: IF(2,41,tworker_1_42)");
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
__cs_retval__lstack_pop_1 = 0;
goto __exit__lstack_pop_1;;
        }
        ;
__CSEQ_rawline("tworker_1_42: IF(2,42,tworker_1_43)");
__CSEQ_atomic_fetch_sub(&results.size, 1);
static int __cs_local_lstack_pop_value;
__CSEQ_rawline("tworker_1_43: IF(2,43,tworker_1_44)");
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
static struct lstack_head *__cs_param_push_head;
__CSEQ_rawline("tworker_1_44: IF(2,44,tworker_1_45)");
__cs_param_push_head = &results.free;
static struct lstack_node *__cs_param_push_node;
__CSEQ_rawline("tworker_1_45: IF(2,45,tworker_1_46)");
__cs_param_push_node = __cs_local_lstack_pop_node;
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_4;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_1_46: IF(2,46,tworker_1_47)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
__CSEQ_rawline("tworker_1_47: IF(2,47,tworker_1_48)");
__cs_retval____VERIFIER_load_Struct_4 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_4;;
                __exit____VERIFIER_load_Struct_4: __CSEQ_assume( __cs_pc_cs[2] >= 48 );
;;
            }
;
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_4;
__CSEQ_rawline("tworker_1_48: IF(2,48,tworker_1_49)");
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__CSEQ_rawline("tworker_1_49: IF(2,49,tworker_1_50)");
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_4;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_1_50: IF(2,50,tworker_1_51)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_1_51: IF(2,51,tworker_1_52)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_1_52: IF(2,52,tworker_1_53)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_1_53: IF(2,53,tworker_1_54)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_4 = 1;
goto __exit____VERIFIER_compare_and_exchange_4;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[2] >= 54 );
__CSEQ_rawline("tworker_1_54: IF(2,54,tworker_1_55)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_4 = 0;
goto __exit____VERIFIER_compare_and_exchange_4;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 55 );;
                __exit____VERIFIER_compare_and_exchange_4: __CSEQ_assume( __cs_pc_cs[2] >= 55 );
;;
            }
;
__CSEQ_rawline("tworker_1_55: IF(2,55,tworker_1_56)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_4);
            __exit__push_2: __CSEQ_assume( __cs_pc_cs[2] >= 56 );
;;
        }
;
__cs_retval__lstack_pop_1 = __cs_local_lstack_pop_value;
goto __exit__lstack_pop_1;;
        __exit__lstack_pop_1: __CSEQ_assume( __cs_pc_cs[2] >= 56 );
;;
    }
;
__CSEQ_rawline("tworker_1_56: IF(2,56,tworker_1_57)");
__cs_local_worker_valore_restituito[0] = __cs_retval__lstack_pop_1;
static int __cs_retval__lstack_push_2;
    {
static int __cs_param_lstack_push_value;
__cs_param_lstack_push_value = __cs_local_worker_valore[1] + ((__cs_local_worker_thread - 1) * 10);
static struct lstack_node *__cs_local_lstack_push_node;
static struct lstack_node *__cs_retval__pop_3;
        {
static struct lstack_head *__cs_param_pop_head;
__CSEQ_rawline("tworker_1_57: IF(2,57,tworker_1_58)");
__cs_param_pop_head = &results.free;
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_5;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_1_58: IF(2,58,tworker_1_59)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
__CSEQ_rawline("tworker_1_59: IF(2,59,tworker_1_60)");
__cs_retval____VERIFIER_load_Struct_5 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_5;;
                __exit____VERIFIER_load_Struct_5: __CSEQ_assume( __cs_pc_cs[2] >= 60 );
;;
            }
;
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_5;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__CSEQ_rawline("tworker_1_60: IF(2,60,tworker_1_61)");
__cs_retval__pop_3 = 0;
goto __exit__pop_3;;
            }
            __CSEQ_assume( __cs_pc_cs[2] >= 61 );;
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_5;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_1_61: IF(2,61,tworker_1_62)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_1_62: IF(2,62,tworker_1_63)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_1_63: IF(2,63,tworker_1_64)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_1_64: IF(2,64,tworker_1_65)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_5 = 1;
goto __exit____VERIFIER_compare_and_exchange_5;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[2] >= 65 );
__CSEQ_rawline("tworker_1_65: IF(2,65,tworker_1_66)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_5 = 0;
goto __exit____VERIFIER_compare_and_exchange_5;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 66 );;
                __exit____VERIFIER_compare_and_exchange_5: __CSEQ_assume( __cs_pc_cs[2] >= 66 );
;;
            }
;
__CSEQ_rawline("tworker_1_66: IF(2,66,tworker_1_67)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_5);
__CSEQ_rawline("tworker_1_67: IF(2,67,tworker_1_68)");
__cs_retval__pop_3 = __cs_local_pop_orig.node;
goto __exit__pop_3;;
            __exit__pop_3: __CSEQ_assume( __cs_pc_cs[2] >= 68 );
;;
        }
;
__CSEQ_rawline("tworker_1_68: IF(2,68,tworker_1_69)");
__cs_local_lstack_push_node = __cs_retval__pop_3;
;;
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
__CSEQ_rawline("tworker_1_69: IF(2,69,tworker_1_70)");
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
if (__cs_local_lstack_push___cs_tmp_if_cond_3)
        {
__cs_retval__lstack_push_2 = ENOMEM;
goto __exit__lstack_push_2;;
        }
        ;
__CSEQ_rawline("tworker_1_70: IF(2,70,tworker_1_71)");
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;
        {
static struct lstack_head *__cs_param_push_head;
__CSEQ_rawline("tworker_1_71: IF(2,71,tworker_1_72)");
__cs_param_push_head = &results.head;
static struct lstack_node *__cs_param_push_node;
__CSEQ_rawline("tworker_1_72: IF(2,72,tworker_1_73)");
__cs_param_push_node = __cs_local_lstack_push_node;
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_6;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tworker_1_73: IF(2,73,tworker_1_74)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
__CSEQ_rawline("tworker_1_74: IF(2,74,tworker_1_75)");
__cs_retval____VERIFIER_load_Struct_6 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_6;;
                __exit____VERIFIER_load_Struct_6: __CSEQ_assume( __cs_pc_cs[2] >= 75 );
;;
            }
;
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_6;
__CSEQ_rawline("tworker_1_75: IF(2,75,tworker_1_76)");
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__CSEQ_rawline("tworker_1_76: IF(2,76,tworker_1_77)");
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_6;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tworker_1_77: IF(2,77,tworker_1_78)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tworker_1_78: IF(2,78,tworker_1_79)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tworker_1_79: IF(2,79,tworker_1_80)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tworker_1_80: IF(2,80,tworker_1_81)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_6 = 1;
goto __exit____VERIFIER_compare_and_exchange_6;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[2] >= 81 );
__CSEQ_rawline("tworker_1_81: IF(2,81,tworker_1_82)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_6 = 0;
goto __exit____VERIFIER_compare_and_exchange_6;;
                }
                __CSEQ_assume( __cs_pc_cs[2] >= 82 );;
                __exit____VERIFIER_compare_and_exchange_6: __CSEQ_assume( __cs_pc_cs[2] >= 82 );
;;
            }
;
__CSEQ_rawline("tworker_1_82: IF(2,82,tworker_1_83)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_6);
            __exit__push_3: __CSEQ_assume( __cs_pc_cs[2] >= 83 );
;;
        }
;
__CSEQ_rawline("tworker_1_83: IF(2,83,tworker_1_84)");
__CSEQ_atomic_fetch_add(&results.size, 1);
__cs_retval__lstack_push_2 = 0;
goto __exit__lstack_push_2;;
        __exit__lstack_push_2: __CSEQ_assume( __cs_pc_cs[2] >= 84 );
;;
    }
;
__cs_retval__lstack_push_2;
goto __exit_worker;;
    __exit_worker: __CSEQ_assume( __cs_pc_cs[2] >= 84 );
;;
__CSEQ_rawline("tworker_1_84: ");
__cs_exit(0, 2);
}
int main_thread(void)
{
__CSEQ_rawline("IF(0,0,tmain_1)");
static int __cs_local_main__agg_t1[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
static int __cs_local_main__agg_t2[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
static __cs_t __cs_local_main_threads0;
;;
static __cs_t __cs_local_main_threads1;
;;
static int __cs_retval__lstack_init_1;
    {
results.head.aba = 0;
results.head.node = 0;
results.size = 0;
results.node_buffer = __cs_safe_malloc(6 * (sizeof(struct lstack_node)));
;;
static _Bool __cs_local_lstack_init___cs_tmp_if_cond_1;
__cs_local_lstack_init___cs_tmp_if_cond_1 = results.node_buffer == 0;
if (__cs_local_lstack_init___cs_tmp_if_cond_1)
        {
__cs_retval__lstack_init_1 = ENOMEM;
goto __exit__lstack_init_1;;
        }
        ;
results.node_buffer[0].next = results.node_buffer + 1;
results.node_buffer[1].next = results.node_buffer + 2;
results.node_buffer[2].next = results.node_buffer + 3;
results.node_buffer[3].next = results.node_buffer + 4;
results.node_buffer[4].next = results.node_buffer + 5;
results.node_buffer[5].next = results.node_buffer + 6;
results.node_buffer[5].next = 0;
results.free.aba = 0;
results.free.node = results.node_buffer;
__cs_retval__lstack_init_1 = 0;
goto __exit__lstack_init_1;;
        __exit__lstack_init_1: __CSEQ_assume( __cs_pc_cs[0] >= 1 );
;;
    }
;
__cs_retval__lstack_init_1;
__cs_create(&__cs_local_main_threads0, 0, worker_0, 1, 1);
__CSEQ_rawline("tmain_1: IF(0,1,tmain_2)");
__cs_create(&__cs_local_main_threads1, 0, worker_1, 2, 2);
__CSEQ_rawline("tmain_2: IF(0,2,tmain_3)");
__cs_join(__cs_local_main_threads0, 0);
__CSEQ_rawline("tmain_3: IF(0,3,tmain_4)");
__cs_join(__cs_local_main_threads1, 0);
static int __cs_local_main__agg_e1;
static int __cs_retval__lstack_pop_2;
    {
static struct lstack_node *__cs_local_lstack_pop_node;
static struct lstack_node *__cs_retval__pop_4;
        {
static struct lstack_head *__cs_param_pop_head;
__CSEQ_rawline("tmain_4: IF(0,4,tmain_5)");
__cs_param_pop_head = &results.head;
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_7;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tmain_5: IF(0,5,tmain_6)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
__CSEQ_rawline("tmain_6: IF(0,6,tmain_7)");
__cs_retval____VERIFIER_load_Struct_7 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_7;;
                __exit____VERIFIER_load_Struct_7: __CSEQ_assume( __cs_pc_cs[0] >= 7 );
;;
            }
;
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_7;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__CSEQ_rawline("tmain_7: IF(0,7,tmain_8)");
__cs_retval__pop_4 = 0;
goto __exit__pop_4;;
            }
            __CSEQ_assume( __cs_pc_cs[0] >= 8 );;
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_7;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tmain_8: IF(0,8,tmain_9)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tmain_9: IF(0,9,tmain_10)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tmain_10: IF(0,10,tmain_11)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tmain_11: IF(0,11,tmain_12)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_7 = 1;
goto __exit____VERIFIER_compare_and_exchange_7;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[0] >= 12 );
__CSEQ_rawline("tmain_12: IF(0,12,tmain_13)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_7 = 0;
goto __exit____VERIFIER_compare_and_exchange_7;;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 13 );;
                __exit____VERIFIER_compare_and_exchange_7: __CSEQ_assume( __cs_pc_cs[0] >= 13 );
;;
            }
;
__CSEQ_rawline("tmain_13: IF(0,13,tmain_14)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_7);
__CSEQ_rawline("tmain_14: IF(0,14,tmain_15)");
__cs_retval__pop_4 = __cs_local_pop_orig.node;
goto __exit__pop_4;;
            __exit__pop_4: __CSEQ_assume( __cs_pc_cs[0] >= 15 );
;;
        }
;
__CSEQ_rawline("tmain_15: IF(0,15,tmain_16)");
__cs_local_lstack_pop_node = __cs_retval__pop_4;
;;
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
__CSEQ_rawline("tmain_16: IF(0,16,tmain_17)");
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
__cs_retval__lstack_pop_2 = 0;
goto __exit__lstack_pop_2;;
        }
        ;
__CSEQ_rawline("tmain_17: IF(0,17,tmain_18)");
__CSEQ_atomic_fetch_sub(&results.size, 1);
static int __cs_local_lstack_pop_value;
__CSEQ_rawline("tmain_18: IF(0,18,tmain_19)");
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
static struct lstack_head *__cs_param_push_head;
__CSEQ_rawline("tmain_19: IF(0,19,tmain_20)");
__cs_param_push_head = &results.free;
static struct lstack_node *__cs_param_push_node;
__CSEQ_rawline("tmain_20: IF(0,20,tmain_21)");
__cs_param_push_node = __cs_local_lstack_pop_node;
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_8;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tmain_21: IF(0,21,tmain_22)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
__CSEQ_rawline("tmain_22: IF(0,22,tmain_23)");
__cs_retval____VERIFIER_load_Struct_8 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_8;;
                __exit____VERIFIER_load_Struct_8: __CSEQ_assume( __cs_pc_cs[0] >= 23 );
;;
            }
;
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_8;
__CSEQ_rawline("tmain_23: IF(0,23,tmain_24)");
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__CSEQ_rawline("tmain_24: IF(0,24,tmain_25)");
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_8;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tmain_25: IF(0,25,tmain_26)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tmain_26: IF(0,26,tmain_27)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tmain_27: IF(0,27,tmain_28)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tmain_28: IF(0,28,tmain_29)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_8 = 1;
goto __exit____VERIFIER_compare_and_exchange_8;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[0] >= 29 );
__CSEQ_rawline("tmain_29: IF(0,29,tmain_30)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_8 = 0;
goto __exit____VERIFIER_compare_and_exchange_8;;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 30 );;
                __exit____VERIFIER_compare_and_exchange_8: __CSEQ_assume( __cs_pc_cs[0] >= 30 );
;;
            }
;
__CSEQ_rawline("tmain_30: IF(0,30,tmain_31)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_8);
            __exit__push_4: __CSEQ_assume( __cs_pc_cs[0] >= 31 );
;;
        }
;
__cs_retval__lstack_pop_2 = __cs_local_lstack_pop_value;
goto __exit__lstack_pop_2;;
        __exit__lstack_pop_2: __CSEQ_assume( __cs_pc_cs[0] >= 31 );
;;
    }
;
__cs_local_main__agg_e1 = __cs_retval__lstack_pop_2;
static int __cs_local_main__agg_e2;
static int __cs_retval__lstack_pop_3;
    {
static struct lstack_node *__cs_local_lstack_pop_node;
static struct lstack_node *__cs_retval__pop_5;
        {
static struct lstack_head *__cs_param_pop_head;
__CSEQ_rawline("tmain_31: IF(0,31,tmain_32)");
__cs_param_pop_head = &results.head;
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_9;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tmain_32: IF(0,32,tmain_33)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
__CSEQ_rawline("tmain_33: IF(0,33,tmain_34)");
__cs_retval____VERIFIER_load_Struct_9 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_9;;
                __exit____VERIFIER_load_Struct_9: __CSEQ_assume( __cs_pc_cs[0] >= 34 );
;;
            }
;
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_9;
;;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__CSEQ_rawline("tmain_34: IF(0,34,tmain_35)");
__cs_retval__pop_5 = 0;
goto __exit__pop_5;;
            }
            __CSEQ_assume( __cs_pc_cs[0] >= 35 );;
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_9;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tmain_35: IF(0,35,tmain_36)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tmain_36: IF(0,36,tmain_37)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tmain_37: IF(0,37,tmain_38)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tmain_38: IF(0,38,tmain_39)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_9 = 1;
goto __exit____VERIFIER_compare_and_exchange_9;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[0] >= 39 );
__CSEQ_rawline("tmain_39: IF(0,39,tmain_40)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_9 = 0;
goto __exit____VERIFIER_compare_and_exchange_9;;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 40 );;
                __exit____VERIFIER_compare_and_exchange_9: __CSEQ_assume( __cs_pc_cs[0] >= 40 );
;;
            }
;
__CSEQ_rawline("tmain_40: IF(0,40,tmain_41)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_9);
__CSEQ_rawline("tmain_41: IF(0,41,tmain_42)");
__cs_retval__pop_5 = __cs_local_pop_orig.node;
goto __exit__pop_5;;
            __exit__pop_5: __CSEQ_assume( __cs_pc_cs[0] >= 42 );
;;
        }
;
__CSEQ_rawline("tmain_42: IF(0,42,tmain_43)");
__cs_local_lstack_pop_node = __cs_retval__pop_5;
;;
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
__CSEQ_rawline("tmain_43: IF(0,43,tmain_44)");
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
__cs_retval__lstack_pop_3 = 0;
goto __exit__lstack_pop_3;;
        }
        ;
__CSEQ_rawline("tmain_44: IF(0,44,tmain_45)");
__CSEQ_atomic_fetch_sub(&results.size, 1);
static int __cs_local_lstack_pop_value;
__CSEQ_rawline("tmain_45: IF(0,45,tmain_46)");
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
static struct lstack_head *__cs_param_push_head;
__CSEQ_rawline("tmain_46: IF(0,46,tmain_47)");
__cs_param_push_head = &results.free;
static struct lstack_node *__cs_param_push_node;
__CSEQ_rawline("tmain_47: IF(0,47,tmain_48)");
__cs_param_push_node = __cs_local_lstack_pop_node;
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_10;
            {
static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
__CSEQ_rawline("tmain_48: IF(0,48,tmain_49)");
__cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
__CSEQ_rawline("tmain_49: IF(0,49,tmain_50)");
__cs_retval____VERIFIER_load_Struct_10 = *__cs_param___VERIFIER_load_Struct_head;
goto __exit____VERIFIER_load_Struct_10;;
                __exit____VERIFIER_load_Struct_10: __CSEQ_assume( __cs_pc_cs[0] >= 50 );
;;
            }
;
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_10;
__CSEQ_rawline("tmain_50: IF(0,50,tmain_51)");
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__CSEQ_rawline("tmain_51: IF(0,51,tmain_52)");
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_10;
            {
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
__CSEQ_rawline("tmain_52: IF(0,52,tmain_53)");
__cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
__CSEQ_rawline("tmain_53: IF(0,53,tmain_54)");
__cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
__cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
;;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__CSEQ_rawline("tmain_54: IF(0,54,tmain_55)");
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
__CSEQ_rawline("tmain_55: IF(0,55,tmain_56)");
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_10 = 1;
goto __exit____VERIFIER_compare_and_exchange_10;;
                }
                else
                { __CSEQ_assume( __cs_pc_cs[0] >= 56 );
__CSEQ_rawline("tmain_56: IF(0,56,tmain_57)");
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_10 = 0;
goto __exit____VERIFIER_compare_and_exchange_10;;
                }
                __CSEQ_assume( __cs_pc_cs[0] >= 57 );;
                __exit____VERIFIER_compare_and_exchange_10: __CSEQ_assume( __cs_pc_cs[0] >= 57 );
;;
            }
;
__CSEQ_rawline("tmain_57: IF(0,57,tmain_58)");
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_10);
            __exit__push_5: __CSEQ_assume( __cs_pc_cs[0] >= 58 );
;;
        }
;
__cs_retval__lstack_pop_3 = __cs_local_lstack_pop_value;
goto __exit__lstack_pop_3;;
        __exit__lstack_pop_3: __CSEQ_assume( __cs_pc_cs[0] >= 58 );
;;
    }
;
__cs_local_main__agg_e2 = __cs_retval__lstack_pop_3;
static int __cs_local_main_i1;
__cs_local_main_i1 = 0;
static int __cs_local_main_i2;
__cs_local_main_i2 = 0;
;;
static _Bool __cs_local_main___cs_tmp_if_cond_5;
__cs_local_main___cs_tmp_if_cond_5 = (__cs_local_main__agg_e1 >= 1) && (__cs_local_main__agg_e1 <= 10);
if (__cs_local_main___cs_tmp_if_cond_5)
    {
__cs_local_main__agg_t1[__cs_local_main_i1] = __cs_local_main__agg_e1;
__cs_local_main_i1++;
    }
    ;
;;
static _Bool __cs_local_main___cs_tmp_if_cond_6;
__cs_local_main___cs_tmp_if_cond_6 = (__cs_local_main__agg_e1 >= 11) && (__cs_local_main__agg_e1 <= 20);
if (__cs_local_main___cs_tmp_if_cond_6)
    {
__cs_local_main__agg_t2[__cs_local_main_i2] = __cs_local_main__agg_e1;
__cs_local_main_i2++;
    }
    ;
;;
static _Bool __cs_local_main___cs_tmp_if_cond_7;
__cs_local_main___cs_tmp_if_cond_7 = (__cs_local_main__agg_e2 >= 1) && (__cs_local_main__agg_e2 <= 10);
if (__cs_local_main___cs_tmp_if_cond_7)
    {
__cs_local_main__agg_t1[__cs_local_main_i1] = __cs_local_main__agg_e2;
__cs_local_main_i1++;
    }
    ;
;;
static _Bool __cs_local_main___cs_tmp_if_cond_8;
__cs_local_main___cs_tmp_if_cond_8 = (__cs_local_main__agg_e2 >= 11) && (__cs_local_main__agg_e2 <= 20);
if (__cs_local_main___cs_tmp_if_cond_8)
    {
__cs_local_main__agg_t2[__cs_local_main_i2] = __cs_local_main__agg_e2;
__cs_local_main_i2++;
    }
    ;
__CSEQ_assert(0);
goto __exit_main;;
    __exit_main: __CSEQ_assume( __cs_pc_cs[0] >= 58 );
;;
__CSEQ_rawline("tmain_58: ");
__cs_exit(0, 0);
}
int main(void) {
__CSEQ_rawline("/* round  0 */");
__CSEQ_rawline("    /* main */");
          unsigned int __cs_tmp_t0_r0 ;
          __cs_pc_cs[0] = __cs_tmp_t0_r0;
          __CSEQ_assume(__cs_pc_cs[0] > 0);
          __CSEQ_assume(__cs_pc_cs[0] <= 58);
          main_thread();
          __cs_pc[0] = __cs_pc_cs[0];

__CSEQ_rawline("    /* worker_0 */");
         unsigned int __cs_tmp_t1_r0 ;
         if (__cs_active_thread[1]) {
             __cs_pc_cs[1] = __cs_tmp_t1_r0;
             __CSEQ_assume(__cs_pc_cs[1] <= 84);
             worker_0(__cs_threadargs[1]);
             __cs_pc[1] = __cs_pc_cs[1];
         }

__CSEQ_rawline("    /* worker_1 */");
         unsigned int __cs_tmp_t2_r0 ;
         if (__cs_active_thread[2]) {
             __cs_pc_cs[2] = __cs_tmp_t2_r0;
             __CSEQ_assume(__cs_pc_cs[2] <= 84);
             worker_1(__cs_threadargs[2]);
             __cs_pc[2] = __cs_pc_cs[2];
         }

__CSEQ_rawline("/* round  1 */");
__CSEQ_rawline("    /* main */");
          unsigned int __cs_tmp_t0_r1 ;
          if (__cs_active_thread[0]) {
             __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r1;
             __CSEQ_assume(__cs_pc_cs[0] >= __cs_pc[0]);
             __CSEQ_assume(__cs_pc_cs[0] <= 58);
             main_thread();
             __cs_pc[0] = __cs_pc_cs[0];
          }


__CSEQ_rawline("    /* worker_0 */");
         unsigned int __cs_tmp_t1_r1 ;
         if (__cs_active_thread[1]) {
             __cs_pc_cs[1] = __cs_pc[1] + __cs_tmp_t1_r1;
             __CSEQ_assume(__cs_pc_cs[1] >= __cs_pc[1]);
             __CSEQ_assume(__cs_pc_cs[1] <= 84);
             worker_0(__cs_threadargs[1]);
             __cs_pc[1] = __cs_pc_cs[1];
         }

__CSEQ_rawline("    /* worker_1 */");
         unsigned int __cs_tmp_t2_r1 ;
         if (__cs_active_thread[2]) {
             __cs_pc_cs[2] = __cs_pc[2] + __cs_tmp_t2_r1;
             __CSEQ_assume(__cs_pc_cs[2] >= __cs_pc[2]);
             __CSEQ_assume(__cs_pc_cs[2] <= 84);
             worker_1(__cs_threadargs[2]);
             __cs_pc[2] = __cs_pc_cs[2];
         }

          unsigned int __cs_tmp_t0_r2 ;
           if (__cs_active_thread[0] == 1) {
             __cs_pc_cs[0] = __cs_pc[0] + __cs_tmp_t0_r2;
             __CSEQ_assume(__cs_pc_cs[0] >= __cs_pc[0]);
             __CSEQ_assume(__cs_pc_cs[0] <= 58);
             main_thread();
           }
    return 0;
}

