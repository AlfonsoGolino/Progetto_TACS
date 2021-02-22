#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <errno.h>

#define max_size 10

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

	lstack->node_buffer[i].next = lstack->node_buffer + i + 1;
	
	lstack->node_buffer[max_size - 1].next = NULL;
	
    lstack->free.aba = 0;
	lstack->free.node = lstack->node_buffer;
    return 0;
}

static struct lstack_node *pop( struct lstack_head *head)
{
    struct lstack_head next, orig = *head;
    if (orig.node == NULL)
            return NULL;
        next.aba = orig.aba + 1;
        next.node = orig.node->next;
    return orig.node;
}

static void push( struct lstack_head *head, struct lstack_node *node)
{
    struct lstack_head next, orig = *head;
	node->next = orig.node;
    next.aba = orig.aba + 1;
    next.node = node;	
}


int lstack_push(lstack_t *lstack, int value)
{
    struct lstack_node *node = pop(&lstack->free);
    if (node == NULL)
        return ENOMEM;
    node->value = value;	
    push(&lstack->head, node);
    return 0;
}

int lstack_pop(lstack_t *lstack)
{
    struct lstack_node *node = pop(&lstack->head);
    if (node == NULL)
        return NULL;
    int value = node->value;
    push(&lstack->free, node);
    return value;
}

void *worker(void *arg)
{
    int thread = (int )arg;
 int valore[10]={1,2,3,4,5,6,7,8,9,10};
 int valore_restituito[10];

  lstack_push(results, valore[0] + ((thread - 1) * 10));
  
 
 return NULL;
}

int main() {
	int _agg_t1[10];
    
	pthread_t threads0;
	
	lstack_init(&results);

	pthread_create(&threads0, NULL, worker, 1);

	pthread_join(threads0, NULL);
	
	int _agg_e1 = lstack_pop(&results);
	
	int i = 0;

	if((_agg_e1 >= 1 && _agg_e1 <= 10)){


	
	assert(false);
	return 0; 
}
