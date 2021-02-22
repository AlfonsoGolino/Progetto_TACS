list of functions:
   __VERIFIER_load_Size(param: __cs_param___VERIFIER_load_Size_size)  call count 1
   __VERIFIER_load_Struct(param: __cs_param___VERIFIER_load_Struct_head)  call count 2
   __VERIFIER_compare_and_exchange(param: __cs_param___VERIFIER_compare_and_exchange_head, __cs_param___VERIFIER_compare_and_exchange_orig, __cs_param___VERIFIER_compare_and_exchange_next)  call count 2
   __CSEQ_atomic_fetch_add(param: __cs_param___CSEQ_atomic_fetch_add_obj, __cs_param___CSEQ_atomic_fetch_add_v)  call count 1
   __CSEQ_atomic_fetch_sub(param: __cs_param___CSEQ_atomic_fetch_sub_obj, __cs_param___CSEQ_atomic_fetch_sub_v)  call count 1
   lstack_size(param: __cs_param_lstack_size_lstack)  call count 0
   lstack_free(param: __cs_param_lstack_free_lstack)  call count 0
   lstack_init(param: __cs_param_lstack_init_lstack)  call count 1
   pop(param: __cs_param_pop_head)  call count 2
   push(param: __cs_param_push_head, __cs_param_push_node)  call count 2
   lstack_push(param: __cs_param_lstack_push_lstack, __cs_param_lstack_push_value)  call count 2
   lstack_pop(param: __cs_param_lstack_pop_lstack)  call count 3
   worker(param: __cs_param_worker_arg)  call count 0
   main(param: )  call count 0

list of thread functions:
   worker  call count 2

parameters for main():
   (no params)

Variables:
   (global)
      id8  'results'  
         type 'struct anonstruct_0'  kind 'g'  arity '0'  
         size '[]'  
         ref '[309, 310, 311, 320, 326, 328]'  
         deref '[]'  
         occurs '[309, 310, 311, 320, 326, 328]'  
   __VERIFIER_load_Size
      id9  '__cs_param___VERIFIER_load_Size_size'  
         type 'int *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[175]'  
         occurs '[175]'  
   __VERIFIER_load_Struct
      id10  '__cs_param___VERIFIER_load_Struct_head'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[179]'  
         occurs '[179]'  
   __VERIFIER_compare_and_exchange
      id11  '__cs_param___VERIFIER_compare_and_exchange_head'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[185, 188, 193]'  
         occurs '[185, 188, 193]'  
      id12  '__cs_param___VERIFIER_compare_and_exchange_orig'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[185, 193]'  
         occurs '[185, 193]'  
      id13  '__cs_param___VERIFIER_compare_and_exchange_next'  
         type 'struct lstack_head'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[188]'  
      id14  '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[185, 186]'  
   __CSEQ_atomic_fetch_add
      id15  '__cs_param___CSEQ_atomic_fetch_add_obj'  
         type 'int *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[200, 201, 201]'  
         occurs '[200, 201, 201]'  
      id16  '__cs_param___CSEQ_atomic_fetch_add_v'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[201]'  
      id17  '__cs_local___CSEQ_atomic_fetch_add_old'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[200, 202]'  
   __CSEQ_atomic_fetch_sub
      id18  '__cs_param___CSEQ_atomic_fetch_sub_obj'  
         type 'int *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[207, 208, 208]'  
         occurs '[207, 208, 208]'  
      id19  '__cs_param___CSEQ_atomic_fetch_sub_v'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[208]'  
      id20  '__cs_local___CSEQ_atomic_fetch_sub_old'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[207, 209]'  
   lstack_size
      id21  '__cs_param_lstack_size_lstack'  
         type 'struct anonstruct_0 *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[213]'  
         occurs '[213]'  
   lstack_free
      id22  '__cs_param_lstack_free_lstack'  
         type 'struct anonstruct_0 *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[217]'  
         occurs '[217]'  
   lstack_init
      id23  '__cs_param_lstack_init_lstack'  
         type 'struct anonstruct_0 *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[221, 222, 223, 224, 227, 232, 232, 233, 233, 234, 234, 235, 235, 236, 236, 237, 237, 238, 239, 240, 240]'  
         occurs '[221, 222, 223, 224, 227, 232, 232, 233, 233, 234, 234, 235, 235, 236, 236, 237, 237, 238, 239, 240, 240]'  
      id24  '__cs_local_lstack_init___cs_tmp_if_cond_1'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[227, 228]'  
   pop
      id25  '__cs_param_pop_head'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[247, 257]'  
      id26  '__cs_local_pop_next'  
         type 'struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[255, 256, 257]'  
      id27  '__cs_local_pop_orig'  
         type 'struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[257]'  
         deref '[]'  
         occurs '[247, 250, 255, 256, 257, 258]'  
      id28  '__cs_local_pop___cs_tmp_if_cond_2'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[250, 251]'  
   push
      id29  '__cs_param_push_head'  
         type 'struct lstack_head *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[264, 268]'  
      id30  '__cs_param_push_node'  
         type 'struct lstack_node *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[265]'  
         occurs '[265, 267]'  
      id31  '__cs_local_push_next'  
         type 'struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[266, 267, 268]'  
      id32  '__cs_local_push_orig'  
         type 'struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[268]'  
         deref '[]'  
         occurs '[264, 265, 266, 268]'  
   lstack_push
      id33  '__cs_param_lstack_push_lstack'  
         type 'struct anonstruct_0 *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[273, 282, 283]'  
         occurs '[273, 282, 283]'  
      id34  '__cs_param_lstack_push_value'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[281]'  
      id35  '__cs_local_lstack_push_node'  
         type 'struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[281]'  
         occurs '[273, 276, 281, 282]'  
      id36  '__cs_local_lstack_push___cs_tmp_if_cond_3'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[276, 277]'  
   lstack_pop
      id37  '__cs_param_lstack_pop_lstack'  
         type 'struct anonstruct_0 *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[289, 297, 300]'  
         occurs '[289, 297, 300]'  
      id38  '__cs_local_lstack_pop_node'  
         type 'struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[299]'  
         occurs '[289, 292, 299, 300]'  
      id39  '__cs_local_lstack_pop___cs_tmp_if_cond_4'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[292, 293]'  
      id40  '__cs_local_lstack_pop_value'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[299, 301]'  
   worker
      id41  '__cs_param_worker_arg'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[306]'  
      id42  '__cs_local_worker_thread'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[306, 309, 311]'  
      id43  '__cs_local_worker_valore'  
         type 'int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[309, 311]'  
      id44  '__cs_local_worker_valore_restituito'  
         type 'int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[310]'  
   main
      id45  '__cs_local_main__agg_t1'  
         type 'int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[338, 354]'  
      id46  '__cs_local_main__agg_t2'  
         type 'int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[346, 362]'  
      id47  '__cs_local_main_threads0'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[321]'  
         deref '[]'  
         occurs '[321, 323]'  
      id48  '__cs_local_main_threads1'  
         type '__cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[322]'  
         deref '[]'  
         occurs '[322, 324]'  
      id49  '__cs_local_main__agg_e1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[326, 335, 335, 338, 343, 343, 346]'  
      id50  '__cs_local_main__agg_e2'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[328, 351, 351, 354, 359, 359, 362]'  
      id51  '__cs_local_main_i1'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[330, 338, 339, 354, 355]'  
      id52  '__cs_local_main_i2'  
         type 'int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[332, 346, 347, 362, 363]'  
      id53  '__cs_local_main___cs_tmp_if_cond_5'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[335, 336]'  
      id54  '__cs_local_main___cs_tmp_if_cond_6'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[343, 344]'  
      id55  '__cs_local_main___cs_tmp_if_cond_7'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[351, 352]'  
      id56  '__cs_local_main___cs_tmp_if_cond_8'  
         type '_Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[359, 360]'  

Fields:
   lstack_node
      id0  'value'  type 'int'  kind 'f'  arity '0'  size '[]'  
      id1  'next'  type 'struct lstack_node *'  kind 'f'  arity '0'  size '[]'  
   lstack_head
      id2  'aba'  type 'unsigned int'  kind 'f'  arity '0'  size '[]'  
      id3  'node'  type 'struct lstack_node *'  kind 'f'  arity '0'  size '[]'  
   anonstruct_0
      id4  'node_buffer'  type 'struct lstack_node *'  kind 'f'  arity '0'  size '[]'  
      id5  'head'  type 'struct lstack_head'  kind 'f'  arity '0'  size '[]'  
      id6  'free'  type 'struct lstack_head'  kind 'f'  arity '0'  size '[]'  
      id7  'size'  type 'int'  kind 'f'  arity '0'  size '[]'  

Typedefs:
lstack_t -> struct anonstruct_0

Pointer variables:
   (global)
   __VERIFIER_load_Size
       var '__cs_param___VERIFIER_load_Size_size'   type 'int *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_load_Struct
       var '__cs_param___VERIFIER_load_Struct_head'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
   __VERIFIER_compare_and_exchange
       var '__cs_param___VERIFIER_compare_and_exchange_head'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param___VERIFIER_compare_and_exchange_orig'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
   __CSEQ_atomic_fetch_add
       var '__cs_param___CSEQ_atomic_fetch_add_obj'   type 'int *'   kind 'p'   arity '0'   size '[]'   
   __CSEQ_atomic_fetch_sub
       var '__cs_param___CSEQ_atomic_fetch_sub_obj'   type 'int *'   kind 'p'   arity '0'   size '[]'   
   lstack_size
       var '__cs_param_lstack_size_lstack'   type 'struct anonstruct_0 *'   kind 'p'   arity '0'   size '[]'   
   lstack_free
       var '__cs_param_lstack_free_lstack'   type 'struct anonstruct_0 *'   kind 'p'   arity '0'   size '[]'   
   lstack_init
       var '__cs_param_lstack_init_lstack'   type 'struct anonstruct_0 *'   kind 'p'   arity '0'   size '[]'   
   pop
       var '__cs_param_pop_head'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
   push
       var '__cs_param_push_head'   type 'struct lstack_head *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_param_push_node'   type 'struct lstack_node *'   kind 'p'   arity '0'   size '[]'   
   lstack_push
       var '__cs_param_lstack_push_lstack'   type 'struct anonstruct_0 *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_lstack_push_node'   type 'struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
   lstack_pop
       var '__cs_param_lstack_pop_lstack'   type 'struct anonstruct_0 *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_lstack_pop_node'   type 'struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
   worker
       var '__cs_param_worker_arg'   type 'void *'   kind 'p'   arity '0'   size '[]'   
   main

Function blocks:
function '__VERIFIER_load_Size' ----------------------------------:
int __VERIFIER_load_Size(int *__cs_param___VERIFIER_load_Size_size)
{
    return *__cs_param___VERIFIER_load_Size_size;
}


int *__cs_param___VERIFIER_load_Size_size
int
function '__VERIFIER_load_Struct' ----------------------------------:
struct lstack_head __VERIFIER_load_Struct(struct lstack_head *__cs_param___VERIFIER_load_Struct_head)
{
    return *__cs_param___VERIFIER_load_Struct_head;
}


struct lstack_head *__cs_param___VERIFIER_load_Struct_head
struct lstack_head
function '__VERIFIER_compare_and_exchange' ----------------------------------:
_Bool __VERIFIER_compare_and_exchange(struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head, struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig, struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next)
{
    ;
    _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
    __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
    if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
    {
        *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
        return 1;
    }
    else
    {
        *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
        return 0;
    }

}


struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head, struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig, struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next
_Bool
function '__CSEQ_atomic_fetch_add' ----------------------------------:
int __CSEQ_atomic_fetch_add(int *__cs_param___CSEQ_atomic_fetch_add_obj, int __cs_param___CSEQ_atomic_fetch_add_v)
{
    int __cs_local___CSEQ_atomic_fetch_add_old;
    __cs_local___CSEQ_atomic_fetch_add_old = *__cs_param___CSEQ_atomic_fetch_add_obj;
    *__cs_param___CSEQ_atomic_fetch_add_obj = (*__cs_param___CSEQ_atomic_fetch_add_obj) + __cs_param___CSEQ_atomic_fetch_add_v;
    return __cs_local___CSEQ_atomic_fetch_add_old;
}


int *__cs_param___CSEQ_atomic_fetch_add_obj, int __cs_param___CSEQ_atomic_fetch_add_v
int
function '__CSEQ_atomic_fetch_sub' ----------------------------------:
int __CSEQ_atomic_fetch_sub(int *__cs_param___CSEQ_atomic_fetch_sub_obj, int __cs_param___CSEQ_atomic_fetch_sub_v)
{
    int __cs_local___CSEQ_atomic_fetch_sub_old;
    __cs_local___CSEQ_atomic_fetch_sub_old = *__cs_param___CSEQ_atomic_fetch_sub_obj;
    *__cs_param___CSEQ_atomic_fetch_sub_obj = (*__cs_param___CSEQ_atomic_fetch_sub_obj) - __cs_param___CSEQ_atomic_fetch_sub_v;
    return __cs_local___CSEQ_atomic_fetch_sub_old;
}


int *__cs_param___CSEQ_atomic_fetch_sub_obj, int __cs_param___CSEQ_atomic_fetch_sub_v
int
function 'lstack_size' ----------------------------------:
int lstack_size(lstack_t *__cs_param_lstack_size_lstack)
{
    return __VERIFIER_load_Size(&(*__cs_param_lstack_size_lstack).size);
}


lstack_t *__cs_param_lstack_size_lstack
int
function 'lstack_free' ----------------------------------:
void lstack_free(lstack_t *__cs_param_lstack_free_lstack)
{
    free((*__cs_param_lstack_free_lstack).node_buffer);
}


lstack_t *__cs_param_lstack_free_lstack
void
function 'lstack_init' ----------------------------------:
int lstack_init(lstack_t *__cs_param_lstack_init_lstack)
{
    (*__cs_param_lstack_init_lstack).head.aba = 0;
    (*__cs_param_lstack_init_lstack).head.node = 0;
    (*__cs_param_lstack_init_lstack).size = 0;
    (*__cs_param_lstack_init_lstack).node_buffer = __cs_safe_malloc(6 * (sizeof(struct lstack_node)));
    ;
    _Bool __cs_local_lstack_init___cs_tmp_if_cond_1;
    __cs_local_lstack_init___cs_tmp_if_cond_1 = (*__cs_param_lstack_init_lstack).node_buffer == 0;
    if (__cs_local_lstack_init___cs_tmp_if_cond_1)
    {
        return ENOMEM;
    }

    (*__cs_param_lstack_init_lstack).node_buffer[0].next = (*__cs_param_lstack_init_lstack).node_buffer + 1;
    (*__cs_param_lstack_init_lstack).node_buffer[1].next = (*__cs_param_lstack_init_lstack).node_buffer + 2;
    (*__cs_param_lstack_init_lstack).node_buffer[2].next = (*__cs_param_lstack_init_lstack).node_buffer + 3;
    (*__cs_param_lstack_init_lstack).node_buffer[3].next = (*__cs_param_lstack_init_lstack).node_buffer + 4;
    (*__cs_param_lstack_init_lstack).node_buffer[4].next = (*__cs_param_lstack_init_lstack).node_buffer + 5;
    (*__cs_param_lstack_init_lstack).node_buffer[5].next = (*__cs_param_lstack_init_lstack).node_buffer + 6;
    (*__cs_param_lstack_init_lstack).node_buffer[5].next = 0;
    (*__cs_param_lstack_init_lstack).free.aba = 0;
    (*__cs_param_lstack_init_lstack).free.node = (*__cs_param_lstack_init_lstack).node_buffer;
    return 0;
}


lstack_t *__cs_param_lstack_init_lstack
int
function 'pop' ----------------------------------:
struct lstack_node *pop(struct lstack_head *__cs_param_pop_head)
{
    struct lstack_head __cs_local_pop_next;
    struct lstack_head __cs_local_pop_orig;
    __cs_local_pop_orig = __VERIFIER_load_Struct(__cs_param_pop_head);
    ;
    _Bool __cs_local_pop___cs_tmp_if_cond_2;
    __cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
    if (__cs_local_pop___cs_tmp_if_cond_2)
    {
        return 0;
    }

    __cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
    __cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
    __CSEQ_assume(__VERIFIER_compare_and_exchange(__cs_param_pop_head, &__cs_local_pop_orig, __cs_local_pop_next));
    return __cs_local_pop_orig.node;
}


struct lstack_head *__cs_param_pop_head
struct lstack_node *
function 'push' ----------------------------------:
void push(struct lstack_head *__cs_param_push_head, struct lstack_node *__cs_param_push_node)
{
    struct lstack_head __cs_local_push_next;
    struct lstack_head __cs_local_push_orig;
    __cs_local_push_orig = __VERIFIER_load_Struct(__cs_param_push_head);
    (*__cs_param_push_node).next = __cs_local_push_orig.node;
    __cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
    __cs_local_push_next.node = __cs_param_push_node;
    __CSEQ_assume(__VERIFIER_compare_and_exchange(__cs_param_push_head, &__cs_local_push_orig, __cs_local_push_next));
}


struct lstack_head *__cs_param_push_head, struct lstack_node *__cs_param_push_node
void
function 'lstack_push' ----------------------------------:
int lstack_push(lstack_t *__cs_param_lstack_push_lstack, int __cs_param_lstack_push_value)
{
    struct lstack_node *__cs_local_lstack_push_node;
    __cs_local_lstack_push_node = pop(&(*__cs_param_lstack_push_lstack).free);
    ;
    _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
    __cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
    if (__cs_local_lstack_push___cs_tmp_if_cond_3)
    {
        return ENOMEM;
    }

    (*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;
    push(&(*__cs_param_lstack_push_lstack).head, __cs_local_lstack_push_node);
    __CSEQ_atomic_fetch_add(&(*__cs_param_lstack_push_lstack).size, 1);
    return 0;
}


lstack_t *__cs_param_lstack_push_lstack, int __cs_param_lstack_push_value
int
function 'lstack_pop' ----------------------------------:
int lstack_pop(lstack_t *__cs_param_lstack_pop_lstack)
{
    struct lstack_node *__cs_local_lstack_pop_node;
    __cs_local_lstack_pop_node = pop(&(*__cs_param_lstack_pop_lstack).head);
    ;
    _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
    __cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
    if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
    {
        return 0;
    }

    __CSEQ_atomic_fetch_sub(&(*__cs_param_lstack_pop_lstack).size, 1);
    int __cs_local_lstack_pop_value;
    __cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
    push(&(*__cs_param_lstack_pop_lstack).free, __cs_local_lstack_pop_node);
    return __cs_local_lstack_pop_value;
}


lstack_t *__cs_param_lstack_pop_lstack
int
function 'worker' ----------------------------------:
void *worker(void *__cs_param_worker_arg)
{
    int __cs_local_worker_thread;
    __cs_local_worker_thread = (int) __cs_param_worker_arg;
    int __cs_local_worker_valore[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int __cs_local_worker_valore_restituito[10];
    lstack_push(&results, __cs_local_worker_valore[0] + ((__cs_local_worker_thread - 1) * 10));
    __cs_local_worker_valore_restituito[0] = lstack_pop(&results);
    lstack_push(&results, __cs_local_worker_valore[1] + ((__cs_local_worker_thread - 1) * 10));
    return 0;
}


void *__cs_param_worker_arg
void *
function 'main' ----------------------------------:
int main()
{
    int __cs_local_main__agg_t1[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int __cs_local_main__agg_t2[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    __cs_t __cs_local_main_threads0;
    __cs_t __cs_local_main_threads1;
    lstack_init(&results);
    __cs_create(&__cs_local_main_threads0, 0, worker, 1);
    __cs_create(&__cs_local_main_threads1, 0, worker, 2);
    __cs_join(__cs_local_main_threads0, 0);
    __cs_join(__cs_local_main_threads1, 0);
    int __cs_local_main__agg_e1;
    __cs_local_main__agg_e1 = lstack_pop(&results);
    int __cs_local_main__agg_e2;
    __cs_local_main__agg_e2 = lstack_pop(&results);
    int __cs_local_main_i1;
    __cs_local_main_i1 = 0;
    int __cs_local_main_i2;
    __cs_local_main_i2 = 0;
    ;
    _Bool __cs_local_main___cs_tmp_if_cond_5;
    __cs_local_main___cs_tmp_if_cond_5 = (__cs_local_main__agg_e1 >= 1) && (__cs_local_main__agg_e1 <= 10);
    if (__cs_local_main___cs_tmp_if_cond_5)
    {
        __cs_local_main__agg_t1[__cs_local_main_i1] = __cs_local_main__agg_e1;
        __cs_local_main_i1++;
    }

    ;
    _Bool __cs_local_main___cs_tmp_if_cond_6;
    __cs_local_main___cs_tmp_if_cond_6 = (__cs_local_main__agg_e1 >= 11) && (__cs_local_main__agg_e1 <= 20);
    if (__cs_local_main___cs_tmp_if_cond_6)
    {
        __cs_local_main__agg_t2[__cs_local_main_i2] = __cs_local_main__agg_e1;
        __cs_local_main_i2++;
    }

    ;
    _Bool __cs_local_main___cs_tmp_if_cond_7;
    __cs_local_main___cs_tmp_if_cond_7 = (__cs_local_main__agg_e2 >= 1) && (__cs_local_main__agg_e2 <= 10);
    if (__cs_local_main___cs_tmp_if_cond_7)
    {
        __cs_local_main__agg_t1[__cs_local_main_i1] = __cs_local_main__agg_e2;
        __cs_local_main_i1++;
    }

    ;
    _Bool __cs_local_main___cs_tmp_if_cond_8;
    __cs_local_main___cs_tmp_if_cond_8 = (__cs_local_main__agg_e2 >= 11) && (__cs_local_main__agg_e2 <= 20);
    if (__cs_local_main___cs_tmp_if_cond_8)
    {
        __cs_local_main__agg_t2[__cs_local_main_i2] = __cs_local_main__agg_e2;
        __cs_local_main_i2++;
    }

    __CSEQ_assert(0);
    return 0;
}



int
Last statement, by function:
function: __VERIFIER_load_Size   stmt:     return *__cs_param___VERIFIER_load_Size_size;

function: __VERIFIER_load_Struct   stmt:     return *__cs_param___VERIFIER_load_Struct_head;

function: __VERIFIER_compare_and_exchange   stmt:     if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
    {
        *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
        return 1;
    }
    else
    {
        *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
        return 0;
    }


function: __CSEQ_atomic_fetch_add   stmt:     return __cs_local___CSEQ_atomic_fetch_add_old;

function: __CSEQ_atomic_fetch_sub   stmt:     return __cs_local___CSEQ_atomic_fetch_sub_old;

function: lstack_size   stmt:     return __VERIFIER_load_Size(&(*__cs_param_lstack_size_lstack).size);

function: lstack_free   stmt:     free((*__cs_param_lstack_free_lstack).node_buffer);

function: lstack_init   stmt:     return 0;

function: pop   stmt:     return __cs_local_pop_orig.node;

function: push   stmt:     __CSEQ_assume(__VERIFIER_compare_and_exchange(__cs_param_push_head, &__cs_local_push_orig, __cs_local_push_next));

function: lstack_push   stmt:     return 0;

function: lstack_pop   stmt:     return __cs_local_lstack_pop_value;

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
   (10, '__cs_param___VERIFIER_load_Size_size')  
   (11, '__VERIFIER_load_Struct')  
   (12, '__cs_param___VERIFIER_load_Struct_head')  
   (13, '__VERIFIER_compare_and_exchange')  
   (14, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (15, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (16, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (17, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (18, '__CSEQ_atomic_fetch_add')  
   (19, '__cs_param___CSEQ_atomic_fetch_add_obj')  
   (20, '__cs_param___CSEQ_atomic_fetch_add_v')  
   (21, '__cs_local___CSEQ_atomic_fetch_add_old')  
   (22, '__CSEQ_atomic_fetch_sub')  
   (23, '__cs_param___CSEQ_atomic_fetch_sub_obj')  
   (24, '__cs_param___CSEQ_atomic_fetch_sub_v')  
   (25, '__cs_local___CSEQ_atomic_fetch_sub_old')  
   (26, 'lstack_size')  
   (27, '__cs_param_lstack_size_lstack')  
   (28, 'lstack_free')  
   (29, '__cs_param_lstack_free_lstack')  
   (30, 'lstack_init')  
   (31, '__cs_param_lstack_init_lstack')  
   (32, '__cs_local_lstack_init___cs_tmp_if_cond_1')  
   (33, 'pop')  
   (34, '__cs_param_pop_head')  
   (35, '__cs_local_pop_next')  
   (36, '__cs_local_pop_orig')  
   (37, '__cs_local_pop___cs_tmp_if_cond_2')  
   (38, 'push')  
   (39, '__cs_param_push_head')  
   (40, '__cs_param_push_node')  
   (41, '__cs_local_push_next')  
   (42, '__cs_local_push_orig')  
   (43, 'lstack_push')  
   (44, '__cs_param_lstack_push_lstack')  
   (45, '__cs_param_lstack_push_value')  
   (46, '__cs_local_lstack_push_node')  
   (47, '__cs_local_lstack_push___cs_tmp_if_cond_3')  
   (48, 'lstack_pop')  
   (49, '__cs_param_lstack_pop_lstack')  
   (50, '__cs_local_lstack_pop_node')  
   (51, '__cs_local_lstack_pop___cs_tmp_if_cond_4')  
   (52, '__cs_local_lstack_pop_value')  
   (53, 'worker')  
   (54, '__cs_param_worker_arg')  
   (55, '__cs_local_worker_thread')  
   (56, '__cs_local_worker_valore')  
   (57, '__cs_local_worker_valore_restituito')  
   (58, 'main')  
   (59, '__cs_local_main__agg_t1')  
   (60, '__cs_local_main__agg_t2')  
   (61, '__cs_local_main_threads0')  
   (62, '__cs_local_main_threads1')  
   (63, '__cs_local_main__agg_e1')  
   (64, '__cs_local_main__agg_e2')  
   (65, '__cs_local_main_i1')  
   (66, '__cs_local_main_i2')  
   (67, '__cs_local_main___cs_tmp_if_cond_5')  
   (68, '__cs_local_main___cs_tmp_if_cond_6')  
   (69, '__cs_local_main___cs_tmp_if_cond_7')  
   (70, '__cs_local_main___cs_tmp_if_cond_8')  
