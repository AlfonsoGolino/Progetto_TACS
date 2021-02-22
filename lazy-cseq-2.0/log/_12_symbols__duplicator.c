list of functions:
   __CSEQ_atomic_fetch_add(param: __cs_param___CSEQ_atomic_fetch_add_obj, __cs_param___CSEQ_atomic_fetch_add_v)  call count 2
   __CSEQ_atomic_fetch_sub(param: __cs_param___CSEQ_atomic_fetch_sub_obj, __cs_param___CSEQ_atomic_fetch_sub_v)  call count 3
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
         ref '[]'  
         deref '[]'  
         occurs '[202, 269, 317, 330, 394, 399, 461, 528, 576, 598, 599, 600, 601, 604, 610, 610, 611, 611, 612, 612, 613, 613, 614, 614, 615, 615, 616, 617, 618, 618, 636, 700, 705, 766, 830, 835]'  
   __CSEQ_atomic_fetch_add
      id9  '__cs_param___CSEQ_atomic_fetch_add_obj'  
         type 'int *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[176, 177, 177]'  
         occurs '[176, 177, 177]'  
      id10  '__cs_param___CSEQ_atomic_fetch_add_v'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[177]'  
      id11  '__cs_local___CSEQ_atomic_fetch_add_old'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[176, 178]'  
   __CSEQ_atomic_fetch_sub
      id12  '__cs_param___CSEQ_atomic_fetch_sub_obj'  
         type 'int *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[183, 184, 184]'  
         occurs '[183, 184, 184]'  
      id13  '__cs_param___CSEQ_atomic_fetch_sub_v'  
         type 'int'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[184]'  
      id14  '__cs_local___CSEQ_atomic_fetch_sub_old'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[183, 185]'  
   worker
      id15  '__cs_param_worker_arg'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[190]'  
      id16  '__cs_local_worker_thread'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[190, 197, 456]'  
      id17  '__cs_local_worker_valore'  
         type 'static int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[197, 456]'  
      id18  '__cs_local_worker_valore_restituito'  
         type 'static int *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[193, 452]'  
      id19  '__cs_retval__lstack_push_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[263, 318, 323]'  
      id20  '__cs_param_lstack_push_value'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[197, 266, 456, 525]'  
      id21  '__cs_local_lstack_push_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[266, 525]'  
         occurs '[257, 260, 266, 271, 516, 519, 525, 530]'  
      id22  '__cs_retval__pop_1'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[220, 252, 257]'  
      id23  '__cs_param_pop_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[202, 208, 228, 330, 336, 356, 461, 467, 487]'  
      id24  '__cs_local_pop_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[223, 224, 232, 351, 352, 360, 482, 483, 491]'  
      id25  '__cs_local_pop_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[230, 358, 489]'  
         deref '[]'  
         occurs '[214, 217, 223, 224, 230, 252, 342, 345, 351, 352, 358, 380, 473, 476, 482, 483, 489, 511]'  
      id26  '__cs_retval____VERIFIER_load_Struct_1'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[209, 214]'  
      id27  '__cs_param___VERIFIER_load_Struct_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[209, 278, 337, 408, 468, 537]'  
         occurs '[208, 209, 277, 278, 336, 337, 407, 408, 467, 468, 536, 537]'  
      id28  '__cs_local_pop___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[217, 218, 345, 346, 476, 477]'  
      id29  '__cs_retval____VERIFIER_compare_and_exchange_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[239, 245, 251]'  
      id30  '__cs_param___VERIFIER_compare_and_exchange_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[235, 238, 244, 297, 300, 306, 363, 366, 372, 427, 430, 436, 494, 497, 503, 556, 559, 565]'  
         occurs '[228, 235, 238, 244, 290, 297, 300, 306, 356, 363, 366, 372, 420, 427, 430, 436, 487, 494, 497, 503, 549, 556, 559, 565]'  
      id31  '__cs_param___VERIFIER_compare_and_exchange_orig'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[235, 244, 297, 306, 363, 372, 427, 436, 494, 503, 556, 565]'  
         occurs '[230, 235, 244, 292, 297, 306, 358, 363, 372, 422, 427, 436, 489, 494, 503, 551, 556, 565]'  
      id32  '__cs_param___VERIFIER_compare_and_exchange_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[232, 238, 294, 300, 360, 366, 424, 430, 491, 497, 553, 559]'  
      id33  '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[235, 236, 297, 298, 363, 364, 427, 428, 494, 495, 556, 557]'  
      id34  '__cs_local_lstack_push___cs_tmp_if_cond_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[260, 261, 519, 520]'  
      id35  '__cs_param_push_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[269, 277, 290, 399, 407, 420, 528, 536, 549]'  
      id36  '__cs_param_push_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[284, 414, 543]'  
         occurs '[271, 284, 286, 401, 414, 416, 530, 543, 545]'  
      id37  '__cs_local_push_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[285, 286, 294, 415, 416, 424, 544, 545, 553]'  
      id38  '__cs_local_push_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[292, 422, 551]'  
         deref '[]'  
         occurs '[283, 284, 285, 292, 413, 414, 415, 422, 542, 543, 544, 551]'  
      id39  '__cs_retval____VERIFIER_load_Struct_2'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[278, 283]'  
      id40  '__cs_retval____VERIFIER_compare_and_exchange_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[301, 307, 313]'  
      id41  '__cs_retval__lstack_pop_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[391, 447, 452]'  
      id42  '__cs_local_lstack_pop_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[396]'  
         occurs '[385, 388, 396, 401]'  
      id43  '__cs_retval__pop_2'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[348, 380, 385]'  
      id44  '__cs_retval____VERIFIER_load_Struct_3'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[337, 342]'  
      id45  '__cs_retval____VERIFIER_compare_and_exchange_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[367, 373, 379]'  
      id46  '__cs_local_lstack_pop___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[388, 389]'  
      id47  '__cs_local_lstack_pop_value'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[396, 447]'  
      id48  '__cs_retval____VERIFIER_load_Struct_4'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[408, 413]'  
      id49  '__cs_retval____VERIFIER_compare_and_exchange_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[431, 437, 443]'  
      id50  '__cs_retval__lstack_push_2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[522, 577, 582]'  
      id51  '__cs_retval__pop_3'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[479, 511, 516]'  
      id52  '__cs_retval____VERIFIER_load_Struct_5'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[468, 473]'  
      id53  '__cs_retval____VERIFIER_compare_and_exchange_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[498, 504, 510]'  
      id54  '__cs_retval____VERIFIER_load_Struct_6'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[537, 542]'  
      id55  '__cs_retval____VERIFIER_compare_and_exchange_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[560, 566, 572]'  
   main
      id56  '__cs_local_main__agg_t1'  
         type 'static int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[898, 914]'  
      id57  '__cs_local_main__agg_t2'  
         type 'static int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[906, 922]'  
      id58  '__cs_local_main_threads0'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[625]'  
         deref '[]'  
         occurs '[625, 627]'  
      id59  '__cs_local_main_threads1'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[626]'  
         deref '[]'  
         occurs '[626, 628]'  
      id60  '__cs_retval__lstack_init_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[607, 619, 624]'  
      id61  '__cs_local_lstack_init___cs_tmp_if_cond_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[604, 605]'  
      id62  '__cs_local_main__agg_e1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[758, 895, 895, 898, 903, 903, 906]'  
      id63  '__cs_retval__lstack_pop_2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[697, 753, 758]'  
      id64  '__cs_local_lstack_pop_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[702, 832]'  
         occurs '[691, 694, 702, 707, 821, 824, 832, 837]'  
      id65  '__cs_retval__pop_4'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[654, 686, 691]'  
      id66  '__cs_param_pop_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[636, 642, 662, 766, 772, 792]'  
      id67  '__cs_local_pop_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[657, 658, 666, 787, 788, 796]'  
      id68  '__cs_local_pop_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[664, 794]'  
         deref '[]'  
         occurs '[648, 651, 657, 658, 664, 686, 778, 781, 787, 788, 794, 816]'  
      id69  '__cs_retval____VERIFIER_load_Struct_7'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[643, 648]'  
      id70  '__cs_param___VERIFIER_load_Struct_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[643, 714, 773, 844]'  
         occurs '[642, 643, 713, 714, 772, 773, 843, 844]'  
      id71  '__cs_local_pop___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[651, 652, 781, 782]'  
      id72  '__cs_retval____VERIFIER_compare_and_exchange_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[673, 679, 685]'  
      id73  '__cs_param___VERIFIER_compare_and_exchange_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[669, 672, 678, 733, 736, 742, 799, 802, 808, 863, 866, 872]'  
         occurs '[662, 669, 672, 678, 726, 733, 736, 742, 792, 799, 802, 808, 856, 863, 866, 872]'  
      id74  '__cs_param___VERIFIER_compare_and_exchange_orig'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[669, 678, 733, 742, 799, 808, 863, 872]'  
         occurs '[664, 669, 678, 728, 733, 742, 794, 799, 808, 858, 863, 872]'  
      id75  '__cs_param___VERIFIER_compare_and_exchange_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[666, 672, 730, 736, 796, 802, 860, 866]'  
      id76  '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[669, 670, 733, 734, 799, 800, 863, 864]'  
      id77  '__cs_local_lstack_pop___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[694, 695, 824, 825]'  
      id78  '__cs_local_lstack_pop_value'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[702, 753, 832, 883]'  
      id79  '__cs_param_push_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[705, 713, 726, 835, 843, 856]'  
      id80  '__cs_param_push_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[720, 850]'  
         occurs '[707, 720, 722, 837, 850, 852]'  
      id81  '__cs_local_push_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[721, 722, 730, 851, 852, 860]'  
      id82  '__cs_local_push_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[728, 858]'  
         deref '[]'  
         occurs '[719, 720, 721, 728, 849, 850, 851, 858]'  
      id83  '__cs_retval____VERIFIER_load_Struct_8'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[714, 719]'  
      id84  '__cs_retval____VERIFIER_compare_and_exchange_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[737, 743, 749]'  
      id85  '__cs_local_main__agg_e2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[888, 911, 911, 914, 919, 919, 922]'  
      id86  '__cs_retval__lstack_pop_3'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[827, 883, 888]'  
      id87  '__cs_retval__pop_5'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[784, 816, 821]'  
      id88  '__cs_retval____VERIFIER_load_Struct_9'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[773, 778]'  
      id89  '__cs_retval____VERIFIER_compare_and_exchange_9'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[803, 809, 815]'  
      id90  '__cs_retval____VERIFIER_load_Struct_10'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[844, 849]'  
      id91  '__cs_retval____VERIFIER_compare_and_exchange_10'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[867, 873, 879]'  
      id92  '__cs_local_main_i1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[890, 898, 899, 914, 915]'  
      id93  '__cs_local_main_i2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[892, 906, 907, 922, 923]'  
      id94  '__cs_local_main___cs_tmp_if_cond_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[895, 896]'  
      id95  '__cs_local_main___cs_tmp_if_cond_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[903, 904]'  
      id96  '__cs_local_main___cs_tmp_if_cond_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[911, 912]'  
      id97  '__cs_local_main___cs_tmp_if_cond_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[919, 920]'  

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
   __CSEQ_atomic_fetch_add
       var '__cs_param___CSEQ_atomic_fetch_add_obj'   type 'int *'   kind 'p'   arity '0'   size '[]'   
   __CSEQ_atomic_fetch_sub
       var '__cs_param___CSEQ_atomic_fetch_sub_obj'   type 'int *'   kind 'p'   arity '0'   size '[]'   
   worker
       var '__cs_param_worker_arg'   type 'void *'   kind 'p'   arity '0'   size '[]'   
       var '__cs_local_worker_valore_restituito'   type 'static int *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lstack_push_node'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_retval__pop_1'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_pop_head'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param___VERIFIER_load_Struct_head'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param___VERIFIER_compare_and_exchange_head'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param___VERIFIER_compare_and_exchange_orig'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_push_head'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_push_node'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_local_lstack_pop_node'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_retval__pop_2'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_retval__pop_3'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
   main
       var '__cs_local_lstack_pop_node'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_retval__pop_4'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_pop_head'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param___VERIFIER_load_Struct_head'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param___VERIFIER_compare_and_exchange_head'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param___VERIFIER_compare_and_exchange_orig'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_push_head'   type 'static struct lstack_head *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_param_push_node'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   
       var '__cs_retval__pop_5'   type 'static struct lstack_node *'   kind 'l'   arity '0'   size '[]'   

Function blocks:
function '__CSEQ_atomic_fetch_add' ----------------------------------:
int __CSEQ_atomic_fetch_add(int *__cs_param___CSEQ_atomic_fetch_add_obj, int __cs_param___CSEQ_atomic_fetch_add_v)
{
    static int __cs_local___CSEQ_atomic_fetch_add_old;
    __cs_local___CSEQ_atomic_fetch_add_old = *__cs_param___CSEQ_atomic_fetch_add_obj;
    *__cs_param___CSEQ_atomic_fetch_add_obj = (*__cs_param___CSEQ_atomic_fetch_add_obj) + __cs_param___CSEQ_atomic_fetch_add_v;
    return __cs_local___CSEQ_atomic_fetch_add_old;
}


int *__cs_param___CSEQ_atomic_fetch_add_obj, int __cs_param___CSEQ_atomic_fetch_add_v
int
function '__CSEQ_atomic_fetch_sub' ----------------------------------:
int __CSEQ_atomic_fetch_sub(int *__cs_param___CSEQ_atomic_fetch_sub_obj, int __cs_param___CSEQ_atomic_fetch_sub_v)
{
    static int __cs_local___CSEQ_atomic_fetch_sub_old;
    __cs_local___CSEQ_atomic_fetch_sub_old = *__cs_param___CSEQ_atomic_fetch_sub_obj;
    *__cs_param___CSEQ_atomic_fetch_sub_obj = (*__cs_param___CSEQ_atomic_fetch_sub_obj) - __cs_param___CSEQ_atomic_fetch_sub_v;
    return __cs_local___CSEQ_atomic_fetch_sub_old;
}


int *__cs_param___CSEQ_atomic_fetch_sub_obj, int __cs_param___CSEQ_atomic_fetch_sub_v
int
function 'worker' ----------------------------------:
void *worker(void *__cs_param_worker_arg)
{
    static int __cs_local_worker_thread;
    __cs_local_worker_thread = (int) __cs_param_worker_arg;
    static int __cs_local_worker_valore[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    static int *__cs_local_worker_valore_restituito;
    __cs_local_worker_valore_restituito = (int *) __cs_safe_malloc((sizeof(int)) * 10);
    static int __cs_retval__lstack_push_1;
    {
        static int __cs_param_lstack_push_value;
        __cs_param_lstack_push_value = __cs_local_worker_valore[0] + ((__cs_local_worker_thread - 1) * 10);
        static struct lstack_node *__cs_local_lstack_push_node;
        static struct lstack_node *__cs_retval__pop_1;
        {
            static struct lstack_head *__cs_param_pop_head;
            __cs_param_pop_head = &results.free;
            static struct lstack_head __cs_local_pop_next;
            static struct lstack_head __cs_local_pop_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_1;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                __cs_retval____VERIFIER_load_Struct_1 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_1;
                __exit____VERIFIER_load_Struct_1:
                ;

            }
            __cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_1;
            ;
            static _Bool __cs_local_pop___cs_tmp_if_cond_2;
            __cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
            if (__cs_local_pop___cs_tmp_if_cond_2)
            {
                __cs_retval__pop_1 = 0;
                goto __exit__pop_1;
            }

            __cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
            __cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_1;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_1 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_1;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_1 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_1;
                }

                __exit____VERIFIER_compare_and_exchange_1:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_1);
            __cs_retval__pop_1 = __cs_local_pop_orig.node;
            goto __exit__pop_1;
            __exit__pop_1:
            ;

        }
        __cs_local_lstack_push_node = __cs_retval__pop_1;
        ;
        static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
        __cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
        if (__cs_local_lstack_push___cs_tmp_if_cond_3)
        {
            __cs_retval__lstack_push_1 = ENOMEM;
            goto __exit__lstack_push_1;
        }

        (*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;
        {
            static struct lstack_head *__cs_param_push_head;
            __cs_param_push_head = &results.head;
            static struct lstack_node *__cs_param_push_node;
            __cs_param_push_node = __cs_local_lstack_push_node;
            static struct lstack_head __cs_local_push_next;
            static struct lstack_head __cs_local_push_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_2;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                __cs_retval____VERIFIER_load_Struct_2 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_2;
                __exit____VERIFIER_load_Struct_2:
                ;

            }
            __cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_2;
            (*__cs_param_push_node).next = __cs_local_push_orig.node;
            __cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
            __cs_local_push_next.node = __cs_param_push_node;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_2;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_2 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_2;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_2 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_2;
                }

                __exit____VERIFIER_compare_and_exchange_2:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_2);
            __exit__push_1:
            ;

        }
        __CSEQ_atomic_fetch_add(&results.size, 1);
        __cs_retval__lstack_push_1 = 0;
        goto __exit__lstack_push_1;
        __exit__lstack_push_1:
        ;

    }
    __cs_retval__lstack_push_1;
    static int __cs_retval__lstack_pop_1;
    {
        static struct lstack_node *__cs_local_lstack_pop_node;
        static struct lstack_node *__cs_retval__pop_2;
        {
            static struct lstack_head *__cs_param_pop_head;
            __cs_param_pop_head = &results.head;
            static struct lstack_head __cs_local_pop_next;
            static struct lstack_head __cs_local_pop_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_3;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                __cs_retval____VERIFIER_load_Struct_3 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_3;
                __exit____VERIFIER_load_Struct_3:
                ;

            }
            __cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_3;
            ;
            static _Bool __cs_local_pop___cs_tmp_if_cond_2;
            __cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
            if (__cs_local_pop___cs_tmp_if_cond_2)
            {
                __cs_retval__pop_2 = 0;
                goto __exit__pop_2;
            }

            __cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
            __cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_3;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_3 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_3;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_3 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_3;
                }

                __exit____VERIFIER_compare_and_exchange_3:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_3);
            __cs_retval__pop_2 = __cs_local_pop_orig.node;
            goto __exit__pop_2;
            __exit__pop_2:
            ;

        }
        __cs_local_lstack_pop_node = __cs_retval__pop_2;
        ;
        static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
        __cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
        if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
            __cs_retval__lstack_pop_1 = 0;
            goto __exit__lstack_pop_1;
        }

        __CSEQ_atomic_fetch_sub(&results.size, 1);
        static int __cs_local_lstack_pop_value;
        __cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
            static struct lstack_head *__cs_param_push_head;
            __cs_param_push_head = &results.free;
            static struct lstack_node *__cs_param_push_node;
            __cs_param_push_node = __cs_local_lstack_pop_node;
            static struct lstack_head __cs_local_push_next;
            static struct lstack_head __cs_local_push_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_4;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                __cs_retval____VERIFIER_load_Struct_4 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_4;
                __exit____VERIFIER_load_Struct_4:
                ;

            }
            __cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_4;
            (*__cs_param_push_node).next = __cs_local_push_orig.node;
            __cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
            __cs_local_push_next.node = __cs_param_push_node;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_4;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_4 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_4;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_4 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_4;
                }

                __exit____VERIFIER_compare_and_exchange_4:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_4);
            __exit__push_2:
            ;

        }
        __cs_retval__lstack_pop_1 = __cs_local_lstack_pop_value;
        goto __exit__lstack_pop_1;
        __exit__lstack_pop_1:
        ;

    }
    __cs_local_worker_valore_restituito[0] = __cs_retval__lstack_pop_1;
    static int __cs_retval__lstack_push_2;
    {
        static int __cs_param_lstack_push_value;
        __cs_param_lstack_push_value = __cs_local_worker_valore[1] + ((__cs_local_worker_thread - 1) * 10);
        static struct lstack_node *__cs_local_lstack_push_node;
        static struct lstack_node *__cs_retval__pop_3;
        {
            static struct lstack_head *__cs_param_pop_head;
            __cs_param_pop_head = &results.free;
            static struct lstack_head __cs_local_pop_next;
            static struct lstack_head __cs_local_pop_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_5;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                __cs_retval____VERIFIER_load_Struct_5 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_5;
                __exit____VERIFIER_load_Struct_5:
                ;

            }
            __cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_5;
            ;
            static _Bool __cs_local_pop___cs_tmp_if_cond_2;
            __cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
            if (__cs_local_pop___cs_tmp_if_cond_2)
            {
                __cs_retval__pop_3 = 0;
                goto __exit__pop_3;
            }

            __cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
            __cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_5;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_5 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_5;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_5 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_5;
                }

                __exit____VERIFIER_compare_and_exchange_5:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_5);
            __cs_retval__pop_3 = __cs_local_pop_orig.node;
            goto __exit__pop_3;
            __exit__pop_3:
            ;

        }
        __cs_local_lstack_push_node = __cs_retval__pop_3;
        ;
        static _Bool __cs_local_lstack_push___cs_tmp_if_cond_3;
        __cs_local_lstack_push___cs_tmp_if_cond_3 = __cs_local_lstack_push_node == 0;
        if (__cs_local_lstack_push___cs_tmp_if_cond_3)
        {
            __cs_retval__lstack_push_2 = ENOMEM;
            goto __exit__lstack_push_2;
        }

        (*__cs_local_lstack_push_node).value = __cs_param_lstack_push_value;
        {
            static struct lstack_head *__cs_param_push_head;
            __cs_param_push_head = &results.head;
            static struct lstack_node *__cs_param_push_node;
            __cs_param_push_node = __cs_local_lstack_push_node;
            static struct lstack_head __cs_local_push_next;
            static struct lstack_head __cs_local_push_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_6;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                __cs_retval____VERIFIER_load_Struct_6 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_6;
                __exit____VERIFIER_load_Struct_6:
                ;

            }
            __cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_6;
            (*__cs_param_push_node).next = __cs_local_push_orig.node;
            __cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
            __cs_local_push_next.node = __cs_param_push_node;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_6;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_6 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_6;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_6 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_6;
                }

                __exit____VERIFIER_compare_and_exchange_6:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_6);
            __exit__push_3:
            ;

        }
        __CSEQ_atomic_fetch_add(&results.size, 1);
        __cs_retval__lstack_push_2 = 0;
        goto __exit__lstack_push_2;
        __exit__lstack_push_2:
        ;

    }
    __cs_retval__lstack_push_2;
    goto __exit_worker;
    __exit_worker:
    ;

    __cs_exit(0);
}


void *__cs_param_worker_arg
void *
function 'main' ----------------------------------:
int main()
{
    static int __cs_local_main__agg_t1[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    static int __cs_local_main__agg_t2[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    static __cs_t __cs_local_main_threads0;
    ;
    static __cs_t __cs_local_main_threads1;
    ;
    static int __cs_retval__lstack_init_1;
    {
        results.head.aba = 0;
        results.head.node = 0;
        results.size = 0;
        results.node_buffer = __cs_safe_malloc(6 * (sizeof(struct lstack_node)));
        ;
        static _Bool __cs_local_lstack_init___cs_tmp_if_cond_1;
        __cs_local_lstack_init___cs_tmp_if_cond_1 = results.node_buffer == 0;
        if (__cs_local_lstack_init___cs_tmp_if_cond_1)
        {
            __cs_retval__lstack_init_1 = ENOMEM;
            goto __exit__lstack_init_1;
        }

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
        goto __exit__lstack_init_1;
        __exit__lstack_init_1:
        ;

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
        static struct lstack_node *__cs_retval__pop_4;
        {
            static struct lstack_head *__cs_param_pop_head;
            __cs_param_pop_head = &results.head;
            static struct lstack_head __cs_local_pop_next;
            static struct lstack_head __cs_local_pop_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_7;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                __cs_retval____VERIFIER_load_Struct_7 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_7;
                __exit____VERIFIER_load_Struct_7:
                ;

            }
            __cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_7;
            ;
            static _Bool __cs_local_pop___cs_tmp_if_cond_2;
            __cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
            if (__cs_local_pop___cs_tmp_if_cond_2)
            {
                __cs_retval__pop_4 = 0;
                goto __exit__pop_4;
            }

            __cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
            __cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_7;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_7 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_7;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_7 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_7;
                }

                __exit____VERIFIER_compare_and_exchange_7:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_7);
            __cs_retval__pop_4 = __cs_local_pop_orig.node;
            goto __exit__pop_4;
            __exit__pop_4:
            ;

        }
        __cs_local_lstack_pop_node = __cs_retval__pop_4;
        ;
        static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
        __cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
        if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
            __cs_retval__lstack_pop_2 = 0;
            goto __exit__lstack_pop_2;
        }

        __CSEQ_atomic_fetch_sub(&results.size, 1);
        static int __cs_local_lstack_pop_value;
        __cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
            static struct lstack_head *__cs_param_push_head;
            __cs_param_push_head = &results.free;
            static struct lstack_node *__cs_param_push_node;
            __cs_param_push_node = __cs_local_lstack_pop_node;
            static struct lstack_head __cs_local_push_next;
            static struct lstack_head __cs_local_push_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_8;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                __cs_retval____VERIFIER_load_Struct_8 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_8;
                __exit____VERIFIER_load_Struct_8:
                ;

            }
            __cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_8;
            (*__cs_param_push_node).next = __cs_local_push_orig.node;
            __cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
            __cs_local_push_next.node = __cs_param_push_node;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_8;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_8 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_8;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_8 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_8;
                }

                __exit____VERIFIER_compare_and_exchange_8:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_8);
            __exit__push_4:
            ;

        }
        __cs_retval__lstack_pop_2 = __cs_local_lstack_pop_value;
        goto __exit__lstack_pop_2;
        __exit__lstack_pop_2:
        ;

    }
    __cs_local_main__agg_e1 = __cs_retval__lstack_pop_2;
    static int __cs_local_main__agg_e2;
    static int __cs_retval__lstack_pop_3;
    {
        static struct lstack_node *__cs_local_lstack_pop_node;
        static struct lstack_node *__cs_retval__pop_5;
        {
            static struct lstack_head *__cs_param_pop_head;
            __cs_param_pop_head = &results.head;
            static struct lstack_head __cs_local_pop_next;
            static struct lstack_head __cs_local_pop_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_9;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_pop_head;
                __cs_retval____VERIFIER_load_Struct_9 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_9;
                __exit____VERIFIER_load_Struct_9:
                ;

            }
            __cs_local_pop_orig = __cs_retval____VERIFIER_load_Struct_9;
            ;
            static _Bool __cs_local_pop___cs_tmp_if_cond_2;
            __cs_local_pop___cs_tmp_if_cond_2 = __cs_local_pop_orig.node == 0;
            if (__cs_local_pop___cs_tmp_if_cond_2)
            {
                __cs_retval__pop_5 = 0;
                goto __exit__pop_5;
            }

            __cs_local_pop_next.aba = __cs_local_pop_orig.aba + 1;
            __cs_local_pop_next.node = (*__cs_local_pop_orig.node).next;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_9;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_pop_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_pop_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_pop_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_9 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_9;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_9 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_9;
                }

                __exit____VERIFIER_compare_and_exchange_9:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_9);
            __cs_retval__pop_5 = __cs_local_pop_orig.node;
            goto __exit__pop_5;
            __exit__pop_5:
            ;

        }
        __cs_local_lstack_pop_node = __cs_retval__pop_5;
        ;
        static _Bool __cs_local_lstack_pop___cs_tmp_if_cond_4;
        __cs_local_lstack_pop___cs_tmp_if_cond_4 = __cs_local_lstack_pop_node == 0;
        if (__cs_local_lstack_pop___cs_tmp_if_cond_4)
        {
            __cs_retval__lstack_pop_3 = 0;
            goto __exit__lstack_pop_3;
        }

        __CSEQ_atomic_fetch_sub(&results.size, 1);
        static int __cs_local_lstack_pop_value;
        __cs_local_lstack_pop_value = (*__cs_local_lstack_pop_node).value;
        {
            static struct lstack_head *__cs_param_push_head;
            __cs_param_push_head = &results.free;
            static struct lstack_node *__cs_param_push_node;
            __cs_param_push_node = __cs_local_lstack_pop_node;
            static struct lstack_head __cs_local_push_next;
            static struct lstack_head __cs_local_push_orig;
            static struct lstack_head __cs_retval____VERIFIER_load_Struct_10;
            {
                static struct lstack_head *__cs_param___VERIFIER_load_Struct_head;
                __cs_param___VERIFIER_load_Struct_head = __cs_param_push_head;
                __cs_retval____VERIFIER_load_Struct_10 = *__cs_param___VERIFIER_load_Struct_head;
                goto __exit____VERIFIER_load_Struct_10;
                __exit____VERIFIER_load_Struct_10:
                ;

            }
            __cs_local_push_orig = __cs_retval____VERIFIER_load_Struct_10;
            (*__cs_param_push_node).next = __cs_local_push_orig.node;
            __cs_local_push_next.aba = __cs_local_push_orig.aba + 1;
            __cs_local_push_next.node = __cs_param_push_node;
            static _Bool __cs_retval____VERIFIER_compare_and_exchange_10;
            {
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_head;
                __cs_param___VERIFIER_compare_and_exchange_head = __cs_param_push_head;
                static struct lstack_head *__cs_param___VERIFIER_compare_and_exchange_orig;
                __cs_param___VERIFIER_compare_and_exchange_orig = &__cs_local_push_orig;
                static struct lstack_head __cs_param___VERIFIER_compare_and_exchange_next;
                __cs_param___VERIFIER_compare_and_exchange_next = __cs_local_push_next;
                ;
                static _Bool __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0;
                __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0 = (*__cs_param___VERIFIER_compare_and_exchange_head).aba == (*__cs_param___VERIFIER_compare_and_exchange_orig).aba;
                if (__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0)
                {
                    *__cs_param___VERIFIER_compare_and_exchange_head = __cs_param___VERIFIER_compare_and_exchange_next;
                    __cs_retval____VERIFIER_compare_and_exchange_10 = 1;
                    goto __exit____VERIFIER_compare_and_exchange_10;
                }
                else
                {
                    *__cs_param___VERIFIER_compare_and_exchange_orig = *__cs_param___VERIFIER_compare_and_exchange_head;
                    __cs_retval____VERIFIER_compare_and_exchange_10 = 0;
                    goto __exit____VERIFIER_compare_and_exchange_10;
                }

                __exit____VERIFIER_compare_and_exchange_10:
                ;

            }
            __CSEQ_assume(__cs_retval____VERIFIER_compare_and_exchange_10);
            __exit__push_5:
            ;

        }
        __cs_retval__lstack_pop_3 = __cs_local_lstack_pop_value;
        goto __exit__lstack_pop_3;
        __exit__lstack_pop_3:
        ;

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
    __exit_main:
    ;

    __cs_exit(0);
}



int
Last statement, by function:
function: __CSEQ_atomic_fetch_add   stmt:     return __cs_local___CSEQ_atomic_fetch_add_old;

function: __CSEQ_atomic_fetch_sub   stmt:     return __cs_local___CSEQ_atomic_fetch_sub_old;

function: worker   stmt:     __cs_exit(0);

function: main   stmt:     __cs_exit(0);


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
   (9, '__CSEQ_atomic_fetch_add')  
   (10, '__cs_param___CSEQ_atomic_fetch_add_obj')  
   (11, '__cs_param___CSEQ_atomic_fetch_add_v')  
   (12, '__cs_local___CSEQ_atomic_fetch_add_old')  
   (13, '__CSEQ_atomic_fetch_sub')  
   (14, '__cs_param___CSEQ_atomic_fetch_sub_obj')  
   (15, '__cs_param___CSEQ_atomic_fetch_sub_v')  
   (16, '__cs_local___CSEQ_atomic_fetch_sub_old')  
   (17, 'worker')  
   (18, '__cs_param_worker_arg')  
   (19, '__cs_local_worker_thread')  
   (20, '__cs_local_worker_valore')  
   (21, '__cs_local_worker_valore_restituito')  
   (22, '__cs_retval__lstack_push_1')  
   (23, '__cs_param_lstack_push_value')  
   (24, '__cs_local_lstack_push_node')  
   (25, '__cs_retval__pop_1')  
   (26, '__cs_param_pop_head')  
   (27, '__cs_local_pop_next')  
   (28, '__cs_local_pop_orig')  
   (29, '__cs_retval____VERIFIER_load_Struct_1')  
   (30, '__cs_param___VERIFIER_load_Struct_head')  
   (31, '__cs_local_pop___cs_tmp_if_cond_2')  
   (32, '__cs_retval____VERIFIER_compare_and_exchange_1')  
   (33, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (34, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (35, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (36, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (37, '__cs_local_lstack_push___cs_tmp_if_cond_3')  
   (38, '__cs_param_push_head')  
   (39, '__cs_param_push_node')  
   (40, '__cs_local_push_next')  
   (41, '__cs_local_push_orig')  
   (42, '__cs_retval____VERIFIER_load_Struct_2')  
   (43, '__cs_param___VERIFIER_load_Struct_head')  
   (44, '__cs_retval____VERIFIER_compare_and_exchange_2')  
   (45, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (46, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (47, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (48, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (49, '__cs_retval__lstack_pop_1')  
   (50, '__cs_local_lstack_pop_node')  
   (51, '__cs_retval__pop_2')  
   (52, '__cs_param_pop_head')  
   (53, '__cs_local_pop_next')  
   (54, '__cs_local_pop_orig')  
   (55, '__cs_retval____VERIFIER_load_Struct_3')  
   (56, '__cs_param___VERIFIER_load_Struct_head')  
   (57, '__cs_local_pop___cs_tmp_if_cond_2')  
   (58, '__cs_retval____VERIFIER_compare_and_exchange_3')  
   (59, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (60, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (61, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (62, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (63, '__cs_local_lstack_pop___cs_tmp_if_cond_4')  
   (64, '__cs_local_lstack_pop_value')  
   (65, '__cs_param_push_head')  
   (66, '__cs_param_push_node')  
   (67, '__cs_local_push_next')  
   (68, '__cs_local_push_orig')  
   (69, '__cs_retval____VERIFIER_load_Struct_4')  
   (70, '__cs_param___VERIFIER_load_Struct_head')  
   (71, '__cs_retval____VERIFIER_compare_and_exchange_4')  
   (72, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (73, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (74, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (75, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (76, '__cs_retval__lstack_push_2')  
   (77, '__cs_param_lstack_push_value')  
   (78, '__cs_local_lstack_push_node')  
   (79, '__cs_retval__pop_3')  
   (80, '__cs_param_pop_head')  
   (81, '__cs_local_pop_next')  
   (82, '__cs_local_pop_orig')  
   (83, '__cs_retval____VERIFIER_load_Struct_5')  
   (84, '__cs_param___VERIFIER_load_Struct_head')  
   (85, '__cs_local_pop___cs_tmp_if_cond_2')  
   (86, '__cs_retval____VERIFIER_compare_and_exchange_5')  
   (87, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (88, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (89, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (90, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (91, '__cs_local_lstack_push___cs_tmp_if_cond_3')  
   (92, '__cs_param_push_head')  
   (93, '__cs_param_push_node')  
   (94, '__cs_local_push_next')  
   (95, '__cs_local_push_orig')  
   (96, '__cs_retval____VERIFIER_load_Struct_6')  
   (97, '__cs_param___VERIFIER_load_Struct_head')  
   (98, '__cs_retval____VERIFIER_compare_and_exchange_6')  
   (99, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (100, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (101, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (102, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (103, 'main')  
   (104, '__cs_local_main__agg_t1')  
   (105, '__cs_local_main__agg_t2')  
   (106, '__cs_local_main_threads0')  
   (107, '__cs_local_main_threads1')  
   (108, '__cs_retval__lstack_init_1')  
   (109, '__cs_local_lstack_init___cs_tmp_if_cond_1')  
   (110, '__cs_local_main__agg_e1')  
   (111, '__cs_retval__lstack_pop_2')  
   (112, '__cs_local_lstack_pop_node')  
   (113, '__cs_retval__pop_4')  
   (114, '__cs_param_pop_head')  
   (115, '__cs_local_pop_next')  
   (116, '__cs_local_pop_orig')  
   (117, '__cs_retval____VERIFIER_load_Struct_7')  
   (118, '__cs_param___VERIFIER_load_Struct_head')  
   (119, '__cs_local_pop___cs_tmp_if_cond_2')  
   (120, '__cs_retval____VERIFIER_compare_and_exchange_7')  
   (121, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (122, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (123, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (124, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (125, '__cs_local_lstack_pop___cs_tmp_if_cond_4')  
   (126, '__cs_local_lstack_pop_value')  
   (127, '__cs_param_push_head')  
   (128, '__cs_param_push_node')  
   (129, '__cs_local_push_next')  
   (130, '__cs_local_push_orig')  
   (131, '__cs_retval____VERIFIER_load_Struct_8')  
   (132, '__cs_param___VERIFIER_load_Struct_head')  
   (133, '__cs_retval____VERIFIER_compare_and_exchange_8')  
   (134, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (135, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (136, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (137, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (138, '__cs_local_main__agg_e2')  
   (139, '__cs_retval__lstack_pop_3')  
   (140, '__cs_local_lstack_pop_node')  
   (141, '__cs_retval__pop_5')  
   (142, '__cs_param_pop_head')  
   (143, '__cs_local_pop_next')  
   (144, '__cs_local_pop_orig')  
   (145, '__cs_retval____VERIFIER_load_Struct_9')  
   (146, '__cs_param___VERIFIER_load_Struct_head')  
   (147, '__cs_local_pop___cs_tmp_if_cond_2')  
   (148, '__cs_retval____VERIFIER_compare_and_exchange_9')  
   (149, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (150, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (151, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (152, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (153, '__cs_local_lstack_pop___cs_tmp_if_cond_4')  
   (154, '__cs_local_lstack_pop_value')  
   (155, '__cs_param_push_head')  
   (156, '__cs_param_push_node')  
   (157, '__cs_local_push_next')  
   (158, '__cs_local_push_orig')  
   (159, '__cs_retval____VERIFIER_load_Struct_10')  
   (160, '__cs_param___VERIFIER_load_Struct_head')  
   (161, '__cs_retval____VERIFIER_compare_and_exchange_10')  
   (162, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (163, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (164, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (165, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (166, '__cs_local_main_i1')  
   (167, '__cs_local_main_i2')  
   (168, '__cs_local_main___cs_tmp_if_cond_5')  
   (169, '__cs_local_main___cs_tmp_if_cond_6')  
   (170, '__cs_local_main___cs_tmp_if_cond_7')  
   (171, '__cs_local_main___cs_tmp_if_cond_8')  
