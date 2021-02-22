#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <errno.h>

#define max_size 6

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

//FUNZIONI ATOMICHE 
int __VERIFIER_load_Size(int *size) {
    return *size;
}

struct lstack_head  __VERIFIER_load_Struct( struct lstack_head *head)
{
    return *head;
}
_Bool __VERIFIER_compare_and_exchange(struct lstack_head *head, struct lstack_head *orig,  struct lstack_head next)
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
//FINE FUNZIONI ATOMICHE 

//INIZIO FUNZIONI STRUTTURA
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
	lstack->head.node = NULL;
    lstack->size = 0;
    lstack->node_buffer = malloc(max_size * sizeof(struct lstack_node));
    if (lstack->node_buffer == NULL)
        return ENOMEM;

lstack->node_buffer[0].next = lstack->node_buffer +1;
lstack->node_buffer[1].next = lstack->node_buffer +2;
lstack->node_buffer[2].next = lstack->node_buffer +3;
lstack->node_buffer[3].next = lstack->node_buffer +4;
lstack->node_buffer[4].next = lstack->node_buffer +5;
lstack->node_buffer[5].next = lstack->node_buffer +6;
	
	lstack->node_buffer[max_size - 1].next = NULL;
	
    lstack->free.aba = 0;
	lstack->free.node = lstack->node_buffer;
    return 0;
}

static struct lstack_node *pop( struct lstack_head *head)
{
    struct lstack_head next, orig = __VERIFIER_load_Struct(head);
    if (orig.node == NULL)
            return NULL;
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
    if (node == NULL)
        return ENOMEM;
    node->value = value;	
    push(&lstack->head, node);
    __VERIFIER_atomic_fetch_add(&lstack->size, 1);
    return 0;
}

int lstack_pop(lstack_t *lstack)
{
    struct lstack_node *node = pop(&lstack->head);
    if (node == NULL)
        return NULL;
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
  
 
 return NULL;
}

int main() {
int _agg_t1[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int _agg_t2[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

    
	pthread_t threads0;
	pthread_t threads1;
	
	lstack_init(&results);


    pthread_create(&threads0, NULL, worker,1);
    pthread_create(&threads1, NULL, worker,2);

	pthread_join(threads0, NULL);
	pthread_join(threads1, NULL);
	
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


	
	assert(false);
	return 0; 
}
