list of functions:
   __VERIFIER_load_Size(param: size)  call count 1
   __VERIFIER_load_Struct(param: head)  call count 2
   __VERIFIER_compare_and_exchange(param: head, orig, next)  call count 2
   __VERIFIER_atomic_fetch_add(param: obj, v)  call count 1
   __VERIFIER_atomic_fetch_sub(param: obj, v)  call count 1
   lstack_size(param: lstack)  call count 0
   lstack_free(param: lstack)  call count 0
   lstack_init(param: lstack)  call count 1
   pop(param: head)  call count 2
   push(param: head, node)  call count 2
   lstack_push(param: lstack, value)  call count 2
   lstack_pop(param: lstack)  call count 3
   worker(param: arg)  call count 0
   main(param: )  call count 0

list of thread functions:
   worker  call count 2

parameters for main():
   (no params)

Variables:
   (global)
      id8  'results'  
         type 'struct'  kind 'g'  arity '0'  
         size '[]'  
         ref '[317, 318, 319, 333, 342, 343]'  
         deref '[]'  
         occurs '[317, 318, 319, 333, 342, 343]'  
   __VERIFIER_load_Size
      id9  'size'  
         type 'int *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[196]'  
         occurs '[196]'  
   __VERIFIER_load_Struct
      id10  'head'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[201]'  
         occurs '[201]'  
   __VERIFIER_compare_and_exchange
      id11  'head'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[207, 212]'  
         occurs '[205, 207, 212]'  
      id12  'orig'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[212]'  
         occurs '[205, 212]'  
      id13  'next'  
         type 'struct lstack_head'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[207]'  
   __VERIFIER_atomic_fetch_add
      id14  'obj'  
         type 'int *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[219, 220, 220]'  
         occurs '[219, 220, 220]'  
      id15  'v'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[220]'  
      id16  'old'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[221]'  
   __VERIFIER_atomic_fetch_sub
      id17  'obj'  
         type 'int *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[226, 227, 227]'  
         occurs '[226, 227, 227]'  
      id18  'v'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[227]'  
      id19  'old'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[228]'  
   lstack_size
      id20  'lstack'  
         type 'struct *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[235]'  
   lstack_free
      id21  'lstack'  
         type 'struct *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[240]'  
   lstack_init
      id22  'lstack'  
         type 'struct *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[246, 247, 248, 249, 250, 253, 253, 254, 254, 255, 255, 256, 256, 257, 257, 258, 258, 260, 262, 263, 263]'  
   pop
      id23  'head'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[269, 274]'  
      id24  'next'  
         type 'struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[272, 273, 274]'  
      id25  'orig'  
         type 'struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[274]'  
         deref '[]'  
         occurs '[270, 272, 273, 274, 275]'  
   push
      id26  'head'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[280, 284]'  
      id27  'node'  
         type 'struct lstack_node *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[281, 283]'  
      id28  'next'  
         type 'struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[282, 283, 284]'  
      id29  'orig'  
         type 'struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[284]'  
         deref '[]'  
         occurs '[281, 282, 284]'  
   lstack_push
      id30  'lstack'  
         type 'struct *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[290, 294, 295]'  
      id31  'value'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[293]'  
      id32  'node'  
         type 'struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[291, 293, 294]'  
   lstack_pop
      id33  'lstack'  
         type 'struct *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[301, 304, 306]'  
      id34  'node'  
         type 'struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[302, 305, 306]'  
      id35  'value'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[307]'  
   worker
      id36  'arg'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[312]'  
      id37  'thread'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[317, 319]'  
      id38  'valore'  
         type 'int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[317, 319]'  
      id39  'valore_restituito'  
         type 'int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[318]'  
   main
      id40  '_agg_t1'  
         type 'int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[349, 357]'  
      id41  '_agg_t2'  
         type 'int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[353, 361]'  
      id42  'threads0'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[336]'  
         deref '[]'  
         occurs '[336, 339]'  
      id43  'threads1'  
         type 'pthread_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[337]'  
         deref '[]'  
         occurs '[337, 340]'  
      id44  '_agg_e1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[348, 348, 349, 352, 352, 353]'  
      id45  '_agg_e2'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[356, 356, 357, 360, 360, 361]'  
      id46  'i1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[349, 350, 357, 358]'  
      id47  'i2'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[353, 354, 361, 362]'  

Fields:
   lstack_node
      id0  'value'  type 'int'  kind 'f'  arity '0'  size '[]'  
      id1  'next'  type 'struct lstack_node *'  kind 'f'  arity '0'  size '[]'  
   lstack_head
      id2  'aba'  type 'unsigned int'  kind 'f'  arity '0'  size '[]'  
      id3  'node'  type 'struct lstack_node *'  kind 'f'  arity '0'  size '[]'  
   None
      id4  'node_buffer'  type 'struct lstack_node *'  kind 'f'  arity '0'  size '[]'  
      id5  'head'  type 'struct lstack_head'  kind 'f'  arity '0'  size '[]'  
      id6  'free'  type 'struct lstack_head'  kind 'f'  arity '0'  size '[]'  
      id7  'size'  type 'int'  kind 'f'  arity '0'  size '[]'  

Typedefs:
lstack_t -> struct

Pointer variables:
   (global)
   __VERIFIER_load_Size
       var 'size'   type 'int *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_load_Struct
       var 'head'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_compare_and_exchange
       var 'head'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
       var 'orig'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_atomic_fetch_add
       var 'obj'   type 'int *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_atomic_fetch_sub
       var 'obj'   type 'int *'   kind 'p'   arity '0'   size '[]'   
   lstack_size
       var 'lstack'   type 'struct *'   kind 'p'   arity '0'   size '[]'   
   lstack_free
       var 'lstack'   type 'struct *'   kind 'p'   arity '0'   size '[]'   
   lstack_init
       var 'lstack'   type 'struct *'   kind 'p'   arity '0'   size '[]'   
   pop
       var 'head'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
   push
       var 'head'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
       var 'node'   type 'struct lstack_node *'   kind 'p'   arity '0'   size '[]'   
   lstack_push
       var 'lstack'   type 'struct *'   kind 'p'   arity '0'   size '[]'   
       var 'node'   type 'struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
   lstack_pop
       var 'lstack'   type 'struct *'   kind 'p'   arity '0'   size '[]'   
       var 'node'   type 'struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
   worker
       var 'arg'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   main

Function blocks:
function '__VERIFIER_load_Size' ----------------------------------:
int __VERIFIER_load_Size(int *size)
{
    return *size;
}


int *size
int
function '__VERIFIER_load_Struct' ----------------------------------:
struct lstack_head __VERIFIER_load_Struct(struct lstack_head *head)
{
    return *head;
}


struct lstack_head *head
struct lstack_head
function '__VERIFIER_compare_and_exchange' ----------------------------------:
_Bool __VERIFIER_compare_and_exchange(struct lstack_head *head, struct lstack_head *orig, struct lstack_head next)
{
    if (head->aba == orig->aba)
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


struct lstack_head *head, struct lstack_head *orig, struct lstack_head next
_Bool
function '__VERIFIER_atomic_fetch_add' ----------------------------------:
int __VERIFIER_atomic_fetch_add(int *obj, int v)
{
    int old = *obj;
    *obj = (*obj) + v;
    return old;
}


int *obj, int v
int
function '__VERIFIER_atomic_fetch_sub' ----------------------------------:
int __VERIFIER_atomic_fetch_sub(int *obj, int v)
{
    int old = *obj;
    *obj = (*obj) - v;
    return old;
}


int *obj, int v
int
function 'lstack_size' ----------------------------------:
static int lstack_size(lstack_t *lstack)
{
    return __VERIFIER_load_Size(&lstack->size);
}


lstack_t *lstack
static int
function 'lstack_free' ----------------------------------:
inline static void lstack_free(lstack_t *lstack)
{
    free(lstack->node_buffer);
}


lstack_t *lstack
inline static void
function 'lstack_init' ----------------------------------:
int lstack_init(lstack_t *lstack)
{
    lstack->head.aba = 0;
    lstack->head.node = 0;
    lstack->size = 0;
    lstack->node_buffer = malloc(6 * (sizeof(struct lstack_node)));
    if (lstack->node_buffer == 0)
            return ENOMEM;

    lstack->node_buffer[0].next = lstack->node_buffer + 1;
    lstack->node_buffer[1].next = lstack->node_buffer + 2;
    lstack->node_buffer[2].next = lstack->node_buffer + 3;
    lstack->node_buffer[3].next = lstack->node_buffer + 4;
    lstack->node_buffer[4].next = lstack->node_buffer + 5;
    lstack->node_buffer[5].next = lstack->node_buffer + 6;
    lstack->node_buffer[6 - 1].next = 0;
    lstack->free.aba = 0;
    lstack->free.node = lstack->node_buffer;
    return 0;
}


lstack_t *lstack
int
function 'pop' ----------------------------------:
static struct lstack_node *pop(struct lstack_head *head)
{
    struct lstack_head next;
    struct lstack_head orig = __VERIFIER_load_Struct(head);
    if (orig.node == 0)
            return 0;

    next.aba = orig.aba + 1;
    next.node = orig.node->next;
    __CPROVER_assume(__VERIFIER_compare_and_exchange(head, &orig, next));
    return orig.node;
}


struct lstack_head *head
static struct lstack_node *
function 'push' ----------------------------------:
static void push(struct lstack_head *head, struct lstack_node *node)
{
    struct lstack_head next;
    struct lstack_head orig = __VERIFIER_load_Struct(head);
    node->next = orig.node;
    next.aba = orig.aba + 1;
    next.node = node;
    __CPROVER_assume(__VERIFIER_compare_and_exchange(head, &orig, next));
}


struct lstack_head *head, struct lstack_node *node
static void
function 'lstack_push' ----------------------------------:
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


lstack_t *lstack, int value
int
function 'lstack_pop' ----------------------------------:
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


lstack_t *lstack
int
function 'worker' ----------------------------------:
void *worker(void *arg)
{
    int thread = (int) arg;
    int valore[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valore_restituito[10];
    lstack_push(&results, valore[0] + ((thread - 1) * 10));
    valore_restituito[0] = lstack_pop(&results);
    lstack_push(&results, valore[1] + ((thread - 1) * 10));
    return 0;
}


void *arg
void *
function 'main' ----------------------------------:
int main()
{
    int _agg_t1[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int _agg_t2[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    pthread_t threads0;
    pthread_t threads1;
    lstack_init(&results);
    pthread_create(&threads0, 0, worker, 1);
    pthread_create(&threads1, 0, worker, 2);
    pthread_join(threads0, 0);
    pthread_join(threads1, 0);
    int _agg_e1 = lstack_pop(&results);
    int _agg_e2 = lstack_pop(&results);
    int i1 = 0;
    int i2 = 0;
    if ((_agg_e1 >= 1) && (_agg_e1 <= 10))
    {
        _agg_t1[i1] = _agg_e1;
        i1++;
    }

    if ((_agg_e1 >= 11) && (_agg_e1 <= 20))
    {
        _agg_t2[i2] = _agg_e1;
        i2++;
    }

    if ((_agg_e2 >= 1) && (_agg_e2 <= 10))
    {
        _agg_t1[i1] = _agg_e2;
        i1++;
    }

    if ((_agg_e2 >= 11) && (_agg_e2 <= 20))
    {
        _agg_t2[i2] = _agg_e2;
        i2++;
    }

    assert(0);
    return 0;
}



int
Last statement, by function:
function: __VERIFIER_load_Size   stmt:     return *size;

function: __VERIFIER_load_Struct   stmt:     return *head;

function: __VERIFIER_compare_and_exchange   stmt:     if (head->aba == orig->aba)
    {
        *head = next;
        return 1;
    }
    else
    {
        *orig = *head;
        return 0;
    }


function: __VERIFIER_atomic_fetch_add   stmt:     return old;

function: __VERIFIER_atomic_fetch_sub   stmt:     return old;

function: lstack_size   stmt:     return __VERIFIER_load_Size(&lstack->size);

function: lstack_free   stmt:     free(lstack->node_buffer);

function: lstack_init   stmt:     return 0;

function: pop   stmt:     return orig.node;

function: push   stmt:     __CPROVER_assume(__VERIFIER_compare_and_exchange(head, &orig, next));

function: lstack_push   stmt:     return 0;

function: lstack_pop   stmt:     return value;

function: worker   stmt:     return 0;

function: main   stmt:     return 0;


All symbols (new symbol table - work in progress):
   (0, 'value')  
   (1, 'next')  
   (2, 'aba')  
   (3, 'node')  
   (4, 'node_buffer')  
   (5, 'head')  
   (6, 'free')  
   (7, 'size')  
   (8, 'results')  
   (9, '__VERIFIER_load_Size')  
   (10, 'size')  
   (11, '__VERIFIER_load_Struct')  
   (12, 'head')  
   (13, '__VERIFIER_compare_and_exchange')  
   (14, 'head')  
   (15, 'orig')  
   (16, 'next')  
   (17, '__VERIFIER_atomic_fetch_add')  
   (18, 'obj')  
   (19, 'v')  
   (20, 'old')  
   (21, '__VERIFIER_atomic_fetch_sub')  
   (22, 'obj')  
   (23, 'v')  
   (24, 'old')  
   (25, 'lstack_size')  
   (26, 'lstack')  
   (27, 'lstack_free')  
   (28, 'lstack')  
   (29, 'lstack_init')  
   (30, 'lstack')  
   (31, 'pop')  
   (32, 'head')  
   (33, 'next')  
   (34, 'orig')  
   (35, 'push')  
   (36, 'head')  
   (37, 'node')  
   (38, 'next')  
   (39, 'orig')  
   (40, 'lstack_push')  
   (41, 'lstack')  
   (42, 'value')  
   (43, 'node')  
   (44, 'lstack_pop')  
   (45, 'lstack')  
   (46, 'node')  
   (47, 'value')  
   (48, 'worker')  
   (49, 'arg')  
   (50, 'thread')  
   (51, 'valore')  
   (52, 'valore_restituito')  
   (53, 'main')  
   (54, '_agg_t1')  
   (55, '_agg_t2')  
   (56, 'threads0')  
   (57, 'threads1')  
   (58, '_agg_e1')  
   (59, '_agg_e2')  
   (60, 'i1')  
   (61, 'i2')  
