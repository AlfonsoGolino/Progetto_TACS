

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



struct lstack_node {
    int value;
    struct lstack_node *next;
};
struct lstack_head {
    unsigned int aba;
    struct lstack_node *node;
};
typedef struct {
    struct lstack_node *node_buffer;
    struct lstack_head head, free;
    int size;
} lstack_t;

lstack_t results;


int __VERIFIER_load_Size(int *size) {
    return *size;
}

struct lstack_head __VERIFIER_load_Struct( struct lstack_head *head)
{
    return *head;
}
_Bool __VERIFIER_compare_and_exchange(struct lstack_head *head, struct lstack_head *orig, struct lstack_head next)
{
    if(head->aba == orig->aba)
    {
        *head = next;
        return 1;
    }
    else
    {
        *orig = *head;
        return 0;
    }
}

int __VERIFIER_atomic_fetch_add(int * obj, int v)
{
    int old = *obj;
    *obj = *obj + v;
    return old;
}

int __VERIFIER_atomic_fetch_sub(int * obj, int v)
{
    int old = *obj;
    *obj = *obj - v;
    return old;
}



static int lstack_size(lstack_t *lstack)
{
 return __VERIFIER_load_Size(&lstack->size);
}

static inline void lstack_free(lstack_t *lstack)
{
    free(lstack->node_buffer);
}


int lstack_init(lstack_t *lstack)
{
    lstack->head.aba = 0;
 lstack->head.node = 0;
    lstack->size = 0;
    lstack->node_buffer = malloc(6 * sizeof(struct lstack_node));
    if (lstack->node_buffer == 0)
        return ENOMEM;

lstack->node_buffer[0].next = lstack->node_buffer +1;
lstack->node_buffer[1].next = lstack->node_buffer +2;
lstack->node_buffer[2].next = lstack->node_buffer +3;
lstack->node_buffer[3].next = lstack->node_buffer +4;
lstack->node_buffer[4].next = lstack->node_buffer +5;
lstack->node_buffer[5].next = lstack->node_buffer +6;

 lstack->node_buffer[6 - 1].next = 0;

    lstack->free.aba = 0;
 lstack->free.node = lstack->node_buffer;
    return 0;
}

static struct lstack_node *pop( struct lstack_head *head)
{
    struct lstack_head next, orig = __VERIFIER_load_Struct(head);
    if (orig.node == 0)
            return 0;
        next.aba = orig.aba + 1;
        next.node = orig.node->next;
 __CPROVER_assume(__VERIFIER_compare_and_exchange(head, &orig, next));
    return orig.node;
}

static void push( struct lstack_head *head, struct lstack_node *node)
{
    struct lstack_head next, orig = __VERIFIER_load_Struct(head);
 node->next = orig.node;
    next.aba = orig.aba + 1;
    next.node = node;
    __CPROVER_assume(__VERIFIER_compare_and_exchange(head, &orig, next));
}


int lstack_push(lstack_t *lstack, int value)
{
    struct lstack_node *node = pop(&lstack->free);
    if (node == 0)
        return ENOMEM;
    node->value = value;
    push(&lstack->head, node);
    __VERIFIER_atomic_fetch_add(&lstack->size, 1);
    return 0;
}

int lstack_pop(lstack_t *lstack)
{
    struct lstack_node *node = pop(&lstack->head);
    if (node == 0)
        return 0;
    __VERIFIER_atomic_fetch_sub(&lstack->size, 1);
    int value = node->value;
    push(&lstack->free, node);
    return value;
}

void *worker(void *arg)
{
    int thread = (int )arg;
 int valore[10]={1,2,3,4,5,6,7,8,9,10};
 int valore_restituito[10];


 lstack_push(&results, valore[0] + ((thread - 1) * 10));
valore_restituito[0] = lstack_pop(&results);
 lstack_push(&results, valore[1] + ((thread - 1) * 10));


 return 0;
}

int main() {
int _agg_t1[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int _agg_t2[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};


 pthread_t threads0;
 pthread_t threads1;

 lstack_init(&results);


    pthread_create(&threads0, 0, worker,1);
    pthread_create(&threads1, 0, worker,2);

 pthread_join(threads0, 0);
 pthread_join(threads1, 0);

int _agg_e1 = lstack_pop(&results);
int _agg_e2 = lstack_pop(&results);

int i1 = 0;
int i2 = 0;

if((_agg_e1 >= 1 && _agg_e1 <= 10)){
_agg_t1[i1] = _agg_e1;
i1++;
}
if((_agg_e1 >= 11 && _agg_e1 <= 20)){
_agg_t2[i2] = _agg_e1;
i2++;
}
if((_agg_e2 >= 1 && _agg_e2 <= 10)){
_agg_t1[i1] = _agg_e2;
i1++;
}
if((_agg_e2 >= 11 && _agg_e2 <= 20)){
_agg_t2[i2] = _agg_e2;
i2++;
}



 assert(0);
 return 0;
}
