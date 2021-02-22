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
return __cs_local___CSEQ_atomic_fetch_add_old;
}
int __CSEQ_atomic_fetch_sub(int *__cs_param___CSEQ_atomic_fetch_sub_obj, int __cs_param___CSEQ_atomic_fetch_sub_v)
{
static int __cs_local___CSEQ_atomic_fetch_sub_old;
__cs_local___CSEQ_atomic_fetch_sub_old = *__cs_param___CSEQ_atomic_fetch_sub_obj;
*__cs_param___CSEQ_atomic_fetch_sub_obj = (*__cs_param___CSEQ_atomic_fetch_sub_obj) - __cs_param___CSEQ_atomic_fetch_sub_v;
return __cs_local___CSEQ_atomic_fetch_sub_old;
}
void *worker(void *__cs_param_worker_arg)
{
static int __cs_local_worker_thread;
__cs_local_worker_thread = (int) __cs_param_worker_arg;
static int __cs_local_worker_valore[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
static int * __cs_local_worker_valore_restituito; __cs_local_worker_valore_restituito = (int *) __cs_safe_malloc(sizeof(int)*10);
static int __cs_retval__lstack_push_1;
    {
        static int __cs_param_lstack_push_value; __cs_param_lstack_push_value = __cs_local_worker_valore[0] + ((__cs_local_worker_thread - 1) * 10); 
static struct lstack_node *__cs_local_lstack_push_node;
static struct lstack_node * __cs_retval__pop_1;
        {
            static struct lstack_head * __cs_param_pop_head; __cs_param_pop_head = &(results).free; 
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_1;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head; 
__cs_retval____VERIFIER_load_Struct_1 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_1;
                             __exit____VERIFIER_load_Struct_1: ;  
            }
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_1;
;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__cs_retval__pop_1 = 0; goto __exit__pop_1;
            }
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_1;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_1 = 1; goto __exit____VERIFIER_compare_and_exchange_1;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_1 = 0; goto __exit____VERIFIER_compare_and_exchange_1;
                }
                             __exit____VERIFIER_compare_and_exchange_1: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_1);
__cs_retval__pop_1 = __cs_local_pop_orig.node; goto __exit__pop_1;
                     __exit__pop_1: ;  
        }
__cs_local_lstack_push_node = __cs_retval__pop_1;
;
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
if (__cs_local_lstack_push___cs_tmp_if_cond_3)
        {
__cs_retval__lstack_push_1 = ENOMEM; goto __exit__lstack_push_1;
        }
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;
        {
            static struct lstack_head * __cs_param_push_head; __cs_param_push_head = &(results).head; static struct lstack_node * __cs_param_push_node; __cs_param_push_node = __cs_local_lstack_push_node; 
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_2;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head; 
__cs_retval____VERIFIER_load_Struct_2 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_2;
                             __exit____VERIFIER_load_Struct_2: ;  
            }
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_2;
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_2;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_2 = 1; goto __exit____VERIFIER_compare_and_exchange_2;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_2 = 0; goto __exit____VERIFIER_compare_and_exchange_2;
                }
                             __exit____VERIFIER_compare_and_exchange_2: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_2);
                     __exit__push_1: ;  
        }
__CSEQ_atomic_fetch_add(&(results).size, 1);
__cs_retval__lstack_push_1 = 0; goto __exit__lstack_push_1;
             __exit__lstack_push_1: ;  
    }
__cs_retval__lstack_push_1;
static int __cs_retval__lstack_pop_1;
    {
static struct lstack_node *__cs_local_lstack_pop_node;
static struct lstack_node * __cs_retval__pop_2;
        {
            static struct lstack_head * __cs_param_pop_head; __cs_param_pop_head = &(results).head; 
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_3;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head; 
__cs_retval____VERIFIER_load_Struct_3 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_3;
                             __exit____VERIFIER_load_Struct_3: ;  
            }
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_3;
;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__cs_retval__pop_2 = 0; goto __exit__pop_2;
            }
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_3;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_3 = 1; goto __exit____VERIFIER_compare_and_exchange_3;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_3 = 0; goto __exit____VERIFIER_compare_and_exchange_3;
                }
                             __exit____VERIFIER_compare_and_exchange_3: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_3);
__cs_retval__pop_2 = __cs_local_pop_orig.node; goto __exit__pop_2;
                     __exit__pop_2: ;  
        }
__cs_local_lstack_pop_node = __cs_retval__pop_2;
;
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
__cs_retval__lstack_pop_1 = 0; goto __exit__lstack_pop_1;
        }
__CSEQ_atomic_fetch_sub(&(results).size, 1);
static int __cs_local_lstack_pop_value;
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
            static struct lstack_head * __cs_param_push_head; __cs_param_push_head = &(results).free; static struct lstack_node * __cs_param_push_node; __cs_param_push_node = __cs_local_lstack_pop_node; 
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_4;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head; 
__cs_retval____VERIFIER_load_Struct_4 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_4;
                             __exit____VERIFIER_load_Struct_4: ;  
            }
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_4;
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_4;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_4 = 1; goto __exit____VERIFIER_compare_and_exchange_4;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_4 = 0; goto __exit____VERIFIER_compare_and_exchange_4;
                }
                             __exit____VERIFIER_compare_and_exchange_4: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_4);
                     __exit__push_2: ;  
        }
__cs_retval__lstack_pop_1 = __cs_local_lstack_pop_value; goto __exit__lstack_pop_1;
             __exit__lstack_pop_1: ;  
    }
__cs_local_worker_valore_restituito[0] = __cs_retval__lstack_pop_1;
static int __cs_retval__lstack_push_2;
    {
        static int __cs_param_lstack_push_value; __cs_param_lstack_push_value = __cs_local_worker_valore[1] + ((__cs_local_worker_thread - 1) * 10); 
static struct lstack_node *__cs_local_lstack_push_node;
static struct lstack_node * __cs_retval__pop_3;
        {
            static struct lstack_head * __cs_param_pop_head; __cs_param_pop_head = &(results).free; 
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_5;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head; 
__cs_retval____VERIFIER_load_Struct_5 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_5;
                             __exit____VERIFIER_load_Struct_5: ;  
            }
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_5;
;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__cs_retval__pop_3 = 0; goto __exit__pop_3;
            }
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_5;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_5 = 1; goto __exit____VERIFIER_compare_and_exchange_5;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_5 = 0; goto __exit____VERIFIER_compare_and_exchange_5;
                }
                             __exit____VERIFIER_compare_and_exchange_5: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_5);
__cs_retval__pop_3 = __cs_local_pop_orig.node; goto __exit__pop_3;
                     __exit__pop_3: ;  
        }
__cs_local_lstack_push_node = __cs_retval__pop_3;
;
static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
__cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
if (__cs_local_lstack_push___cs_tmp_if_cond_3)
        {
__cs_retval__lstack_push_2 = ENOMEM; goto __exit__lstack_push_2;
        }
(*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;
        {
            static struct lstack_head * __cs_param_push_head; __cs_param_push_head = &(results).head; static struct lstack_node * __cs_param_push_node; __cs_param_push_node = __cs_local_lstack_push_node; 
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_6;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head; 
__cs_retval____VERIFIER_load_Struct_6 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_6;
                             __exit____VERIFIER_load_Struct_6: ;  
            }
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_6;
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_6;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_6 = 1; goto __exit____VERIFIER_compare_and_exchange_6;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_6 = 0; goto __exit____VERIFIER_compare_and_exchange_6;
                }
                             __exit____VERIFIER_compare_and_exchange_6: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_6);
                     __exit__push_3: ;  
        }
__CSEQ_atomic_fetch_add(&(results).size, 1);
__cs_retval__lstack_push_2 = 0; goto __exit__lstack_push_2;
             __exit__lstack_push_2: ;  
    }
__cs_retval__lstack_push_2;
goto __exit_worker; 
    __exit_worker: ; __cs_exit(0);
}
int main()
{
static int __cs_local_main__agg_t1[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
static int __cs_local_main__agg_t2[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
static __cs_t __cs_local_main_threads0; ;
static __cs_t __cs_local_main_threads1; ;
static int __cs_retval__lstack_init_1;
    {
(results).head.aba = 0;
(results).head.node = 0;
(results).size = 0;
(results).node_buffer = __cs_safe_malloc(6 * (sizeof(struct lstack_node)));
;
static _Bool __cs_local_lstack_init___cs_tmp_if_cond_1;
__cs_local_lstack_init___cs_tmp_if_cond_1 = (results).node_buffer == 0;
if (__cs_local_lstack_init___cs_tmp_if_cond_1)
        {
__cs_retval__lstack_init_1 = ENOMEM; goto __exit__lstack_init_1;
        }
(results).node_buffer[0].next = (results).node_buffer + 1;
(results).node_buffer[1].next = (results).node_buffer + 2;
(results).node_buffer[2].next = (results).node_buffer + 3;
(results).node_buffer[3].next = (results).node_buffer + 4;
(results).node_buffer[4].next = (results).node_buffer + 5;
(results).node_buffer[5].next = (results).node_buffer + 6;
(results).node_buffer[5].next = 0;
(results).free.aba = 0;
(results).free.node = (results).node_buffer;
__cs_retval__lstack_init_1 = 0; goto __exit__lstack_init_1;
             __exit__lstack_init_1: ;  
    }
__cs_retval__lstack_init_1;
__cs_create(&__cs_local_main_threads0, 0, worker, 1);
__cs_create(&__cs_local_main_threads1, 0, worker, 2);
__cs_join(__cs_local_main_threads0, 0);
__cs_join(__cs_local_main_threads1, 0);
static int __cs_local_main__agg_e1;
static int __cs_retval__lstack_pop_2;
    {
static struct lstack_node *__cs_local_lstack_pop_node;
static struct lstack_node * __cs_retval__pop_4;
        {
            static struct lstack_head * __cs_param_pop_head; __cs_param_pop_head = &(results).head; 
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_7;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head; 
__cs_retval____VERIFIER_load_Struct_7 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_7;
                             __exit____VERIFIER_load_Struct_7: ;  
            }
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_7;
;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__cs_retval__pop_4 = 0; goto __exit__pop_4;
            }
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_7;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_7 = 1; goto __exit____VERIFIER_compare_and_exchange_7;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_7 = 0; goto __exit____VERIFIER_compare_and_exchange_7;
                }
                             __exit____VERIFIER_compare_and_exchange_7: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_7);
__cs_retval__pop_4 = __cs_local_pop_orig.node; goto __exit__pop_4;
                     __exit__pop_4: ;  
        }
__cs_local_lstack_pop_node = __cs_retval__pop_4;
;
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
__cs_retval__lstack_pop_2 = 0; goto __exit__lstack_pop_2;
        }
__CSEQ_atomic_fetch_sub(&(results).size, 1);
static int __cs_local_lstack_pop_value;
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
            static struct lstack_head * __cs_param_push_head; __cs_param_push_head = &(results).free; static struct lstack_node * __cs_param_push_node; __cs_param_push_node = __cs_local_lstack_pop_node; 
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_8;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head; 
__cs_retval____VERIFIER_load_Struct_8 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_8;
                             __exit____VERIFIER_load_Struct_8: ;  
            }
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_8;
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_8;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_8 = 1; goto __exit____VERIFIER_compare_and_exchange_8;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_8 = 0; goto __exit____VERIFIER_compare_and_exchange_8;
                }
                             __exit____VERIFIER_compare_and_exchange_8: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_8);
                     __exit__push_4: ;  
        }
__cs_retval__lstack_pop_2 = __cs_local_lstack_pop_value; goto __exit__lstack_pop_2;
             __exit__lstack_pop_2: ;  
    }
__cs_local_main__agg_e1 = __cs_retval__lstack_pop_2;
static int __cs_local_main__agg_e2;
static int __cs_retval__lstack_pop_3;
    {
static struct lstack_node *__cs_local_lstack_pop_node;
static struct lstack_node * __cs_retval__pop_5;
        {
            static struct lstack_head * __cs_param_pop_head; __cs_param_pop_head = &(results).head; 
static struct lstack_head __cs_local_pop_next;
static struct lstack_head __cs_local_pop_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_9;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head; 
__cs_retval____VERIFIER_load_Struct_9 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_9;
                             __exit____VERIFIER_load_Struct_9: ;  
            }
__cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_9;
;
static _Bool __cs_local_pop___cs_tmp_if_cond_2;
__cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
if (__cs_local_pop___cs_tmp_if_cond_2)
            {
__cs_retval__pop_5 = 0; goto __exit__pop_5;
            }
__cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
__cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_9;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_9 = 1; goto __exit____VERIFIER_compare_and_exchange_9;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_9 = 0; goto __exit____VERIFIER_compare_and_exchange_9;
                }
                             __exit____VERIFIER_compare_and_exchange_9: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_9);
__cs_retval__pop_5 = __cs_local_pop_orig.node; goto __exit__pop_5;
                     __exit__pop_5: ;  
        }
__cs_local_lstack_pop_node = __cs_retval__pop_5;
;
static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
__cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
__cs_retval__lstack_pop_3 = 0; goto __exit__lstack_pop_3;
        }
__CSEQ_atomic_fetch_sub(&(results).size, 1);
static int __cs_local_lstack_pop_value;
__cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
            static struct lstack_head * __cs_param_push_head; __cs_param_push_head = &(results).free; static struct lstack_node * __cs_param_push_node; __cs_param_push_node = __cs_local_lstack_pop_node; 
static struct lstack_head __cs_local_push_next;
static struct lstack_head __cs_local_push_orig;
static struct lstack_head __cs_retval____VERIFIER_load_Struct_10;
            {
                static struct lstack_head * __cs_param___VERIFIER_load_Struct_head; __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head; 
__cs_retval____VERIFIER_load_Struct_10 = *__cs_param___VERIFIER_load_Struct_head; goto __exit____VERIFIER_load_Struct_10;
                             __exit____VERIFIER_load_Struct_10: ;  
            }
__cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_10;
(*__cs_param_push_node).next = __cs_local_push_orig.node;
__cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
__cs_local_push_next.node = __cs_param_push_node;
static _Bool __cs_retval____VERIFIER_compare_and_exchange_10;
            {
                static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_head; __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head; static struct lstack_head * __cs_param___VERIFIER_compare_and_exchange_orig; __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig; static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next; __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next; 
;
static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
*__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
__cs_retval____VERIFIER_compare_and_exchange_10 = 1; goto __exit____VERIFIER_compare_and_exchange_10;
                }
                else
                {
*__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
__cs_retval____VERIFIER_compare_and_exchange_10 = 0; goto __exit____VERIFIER_compare_and_exchange_10;
                }
                             __exit____VERIFIER_compare_and_exchange_10: ;  
            }
__CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_10);
                     __exit__push_5: ;  
        }
__cs_retval__lstack_pop_3 = __cs_local_lstack_pop_value; goto __exit__lstack_pop_3;
             __exit__lstack_pop_3: ;  
    }
__cs_local_main__agg_e2 = __cs_retval__lstack_pop_3;
static int __cs_local_main_i1;
__cs_local_main_i1 = 0;
static int __cs_local_main_i2;
__cs_local_main_i2 = 0;
;
static _Bool __cs_local_main___cs_tmp_if_cond_5;
__cs_local_main___cs_tmp_if_cond_5 = (__cs_local_main__agg_e1 >= 1) && (__cs_local_main__agg_e1 <= 10);
if (__cs_local_main___cs_tmp_if_cond_5)
    {
__cs_local_main__agg_t1[__cs_local_main_i1] = __cs_local_main__agg_e1;
__cs_local_main_i1++;
    }
;
static _Bool __cs_local_main___cs_tmp_if_cond_6;
__cs_local_main___cs_tmp_if_cond_6 = (__cs_local_main__agg_e1 >= 11) && (__cs_local_main__agg_e1 <= 20);
if (__cs_local_main___cs_tmp_if_cond_6)
    {
__cs_local_main__agg_t2[__cs_local_main_i2] = __cs_local_main__agg_e1;
__cs_local_main_i2++;
    }
;
static _Bool __cs_local_main___cs_tmp_if_cond_7;
__cs_local_main___cs_tmp_if_cond_7 = (__cs_local_main__agg_e2 >= 1) && (__cs_local_main__agg_e2 <= 10);
if (__cs_local_main___cs_tmp_if_cond_7)
    {
__cs_local_main__agg_t1[__cs_local_main_i1] = __cs_local_main__agg_e2;
__cs_local_main_i1++;
    }
;
static _Bool __cs_local_main___cs_tmp_if_cond_8;
__cs_local_main___cs_tmp_if_cond_8 = (__cs_local_main__agg_e2 >= 11) && (__cs_local_main__agg_e2 <= 20);
if (__cs_local_main___cs_tmp_if_cond_8)
    {
__cs_local_main__agg_t2[__cs_local_main_i2] = __cs_local_main__agg_e2;
__cs_local_main_i2++;
    }
__CSEQ_assert(0);
goto __exit_main; 
    __exit_main: ; __cs_exit(0);
}
