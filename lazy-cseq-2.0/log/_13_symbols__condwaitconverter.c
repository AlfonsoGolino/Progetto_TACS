list of functions:
   __CSEQ_atomic_fetch_add(param: __cs_param___CSEQ_atomic_fetch_add_obj, __cs_param___CSEQ_atomic_fetch_add_v)  call count 4
   __CSEQ_atomic_fetch_sub(param: __cs_param___CSEQ_atomic_fetch_sub_obj, __cs_param___CSEQ_atomic_fetch_sub_v)  call count 4
   worker_0(param: __cs_param_worker_arg)  call count 0
   worker_1(param: __cs_param_worker_arg)  call count 0
   main(param: )  call count 0

list of thread functions:
   worker_0  call count 1
   worker_1  call count 1

parameters for main():
   (no params)

Variables:
   (global)
      id8  'results'  
         type 'struct anonstruct_0'  kind 'g'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[202, 269, 317, 330, 394, 399, 461, 528, 576, 603, 670, 718, 731, 795, 800, 862, 929, 977, 999, 1000, 1001, 1002, 1005, 1011, 1011, 1012, 1012, 1013, 1013, 1014, 1014, 1015, 1015, 1016, 1016, 1017, 1018, 1019, 1019, 1037, 1101, 1106, 1167, 1231, 1236]'  
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
   worker_0
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
   worker_1
      id56  '__cs_param_worker_arg'  
         type 'void *'  kind 'p'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[591]'  
      id57  '__cs_local_worker_thread'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[591, 598, 857]'  
      id58  '__cs_local_worker_valore'  
         type 'static int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[598, 857]'  
      id59  '__cs_local_worker_valore_restituito'  
         type 'static int *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[594, 853]'  
      id60  '__cs_retval__lstack_push_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[664, 719, 724]'  
      id61  '__cs_param_lstack_push_value'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[598, 667, 857, 926]'  
      id62  '__cs_local_lstack_push_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[667, 926]'  
         occurs '[658, 661, 667, 672, 917, 920, 926, 931]'  
      id63  '__cs_retval__pop_1'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[621, 653, 658]'  
      id64  '__cs_param_pop_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[603, 609, 629, 731, 737, 757, 862, 868, 888]'  
      id65  '__cs_local_pop_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[624, 625, 633, 752, 753, 761, 883, 884, 892]'  
      id66  '__cs_local_pop_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[631, 759, 890]'  
         deref '[]'  
         occurs '[615, 618, 624, 625, 631, 653, 743, 746, 752, 753, 759, 781, 874, 877, 883, 884, 890, 912]'  
      id67  '__cs_retval____VERIFIER_load_Struct_1'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[610, 615]'  
      id68  '__cs_param___VERIFIER_load_Struct_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[610, 679, 738, 809, 869, 938]'  
         occurs '[609, 610, 678, 679, 737, 738, 808, 809, 868, 869, 937, 938]'  
      id69  '__cs_local_pop___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[618, 619, 746, 747, 877, 878]'  
      id70  '__cs_retval____VERIFIER_compare_and_exchange_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[640, 646, 652]'  
      id71  '__cs_param___VERIFIER_compare_and_exchange_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[636, 639, 645, 698, 701, 707, 764, 767, 773, 828, 831, 837, 895, 898, 904, 957, 960, 966]'  
         occurs '[629, 636, 639, 645, 691, 698, 701, 707, 757, 764, 767, 773, 821, 828, 831, 837, 888, 895, 898, 904, 950, 957, 960, 966]'  
      id72  '__cs_param___VERIFIER_compare_and_exchange_orig'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[636, 645, 698, 707, 764, 773, 828, 837, 895, 904, 957, 966]'  
         occurs '[631, 636, 645, 693, 698, 707, 759, 764, 773, 823, 828, 837, 890, 895, 904, 952, 957, 966]'  
      id73  '__cs_param___VERIFIER_compare_and_exchange_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[633, 639, 695, 701, 761, 767, 825, 831, 892, 898, 954, 960]'  
      id74  '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[636, 637, 698, 699, 764, 765, 828, 829, 895, 896, 957, 958]'  
      id75  '__cs_local_lstack_push___cs_tmp_if_cond_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[661, 662, 920, 921]'  
      id76  '__cs_param_push_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[670, 678, 691, 800, 808, 821, 929, 937, 950]'  
      id77  '__cs_param_push_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[685, 815, 944]'  
         occurs '[672, 685, 687, 802, 815, 817, 931, 944, 946]'  
      id78  '__cs_local_push_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[686, 687, 695, 816, 817, 825, 945, 946, 954]'  
      id79  '__cs_local_push_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[693, 823, 952]'  
         deref '[]'  
         occurs '[684, 685, 686, 693, 814, 815, 816, 823, 943, 944, 945, 952]'  
      id80  '__cs_retval____VERIFIER_load_Struct_2'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[679, 684]'  
      id81  '__cs_retval____VERIFIER_compare_and_exchange_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[702, 708, 714]'  
      id82  '__cs_retval__lstack_pop_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[792, 848, 853]'  
      id83  '__cs_local_lstack_pop_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[797]'  
         occurs '[786, 789, 797, 802]'  
      id84  '__cs_retval__pop_2'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[749, 781, 786]'  
      id85  '__cs_retval____VERIFIER_load_Struct_3'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[738, 743]'  
      id86  '__cs_retval____VERIFIER_compare_and_exchange_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[768, 774, 780]'  
      id87  '__cs_local_lstack_pop___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[789, 790]'  
      id88  '__cs_local_lstack_pop_value'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[797, 848]'  
      id89  '__cs_retval____VERIFIER_load_Struct_4'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[809, 814]'  
      id90  '__cs_retval____VERIFIER_compare_and_exchange_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[832, 838, 844]'  
      id91  '__cs_retval__lstack_push_2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[923, 978, 983]'  
      id92  '__cs_retval__pop_3'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[880, 912, 917]'  
      id93  '__cs_retval____VERIFIER_load_Struct_5'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[869, 874]'  
      id94  '__cs_retval____VERIFIER_compare_and_exchange_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[899, 905, 911]'  
      id95  '__cs_retval____VERIFIER_load_Struct_6'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[938, 943]'  
      id96  '__cs_retval____VERIFIER_compare_and_exchange_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[961, 967, 973]'  
   main
      id97  '__cs_local_main__agg_t1'  
         type 'static int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[1299, 1315]'  
      id98  '__cs_local_main__agg_t2'  
         type 'static int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[1307, 1323]'  
      id99  '__cs_local_main_threads0'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1026]'  
         deref '[]'  
         occurs '[1026, 1028]'  
      id100  '__cs_local_main_threads1'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1027]'  
         deref '[]'  
         occurs '[1027, 1029]'  
      id101  '__cs_retval__lstack_init_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1008, 1020, 1025]'  
      id102  '__cs_local_lstack_init___cs_tmp_if_cond_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1005, 1006]'  
      id103  '__cs_local_main__agg_e1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1159, 1296, 1296, 1299, 1304, 1304, 1307]'  
      id104  '__cs_retval__lstack_pop_2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1098, 1154, 1159]'  
      id105  '__cs_local_lstack_pop_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1103, 1233]'  
         occurs '[1092, 1095, 1103, 1108, 1222, 1225, 1233, 1238]'  
      id106  '__cs_retval__pop_4'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1055, 1087, 1092]'  
      id107  '__cs_param_pop_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1037, 1043, 1063, 1167, 1173, 1193]'  
      id108  '__cs_local_pop_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1058, 1059, 1067, 1188, 1189, 1197]'  
      id109  '__cs_local_pop_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1065, 1195]'  
         deref '[]'  
         occurs '[1049, 1052, 1058, 1059, 1065, 1087, 1179, 1182, 1188, 1189, 1195, 1217]'  
      id110  '__cs_retval____VERIFIER_load_Struct_7'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1044, 1049]'  
      id111  '__cs_param___VERIFIER_load_Struct_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1044, 1115, 1174, 1245]'  
         occurs '[1043, 1044, 1114, 1115, 1173, 1174, 1244, 1245]'  
      id112  '__cs_local_pop___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1052, 1053, 1182, 1183]'  
      id113  '__cs_retval____VERIFIER_compare_and_exchange_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1074, 1080, 1086]'  
      id114  '__cs_param___VERIFIER_compare_and_exchange_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1070, 1073, 1079, 1134, 1137, 1143, 1200, 1203, 1209, 1264, 1267, 1273]'  
         occurs '[1063, 1070, 1073, 1079, 1127, 1134, 1137, 1143, 1193, 1200, 1203, 1209, 1257, 1264, 1267, 1273]'  
      id115  '__cs_param___VERIFIER_compare_and_exchange_orig'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1070, 1079, 1134, 1143, 1200, 1209, 1264, 1273]'  
         occurs '[1065, 1070, 1079, 1129, 1134, 1143, 1195, 1200, 1209, 1259, 1264, 1273]'  
      id116  '__cs_param___VERIFIER_compare_and_exchange_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1067, 1073, 1131, 1137, 1197, 1203, 1261, 1267]'  
      id117  '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1070, 1071, 1134, 1135, 1200, 1201, 1264, 1265]'  
      id118  '__cs_local_lstack_pop___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1095, 1096, 1225, 1226]'  
      id119  '__cs_local_lstack_pop_value'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1103, 1154, 1233, 1284]'  
      id120  '__cs_param_push_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1106, 1114, 1127, 1236, 1244, 1257]'  
      id121  '__cs_param_push_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[1121, 1251]'  
         occurs '[1108, 1121, 1123, 1238, 1251, 1253]'  
      id122  '__cs_local_push_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1122, 1123, 1131, 1252, 1253, 1261]'  
      id123  '__cs_local_push_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[1129, 1259]'  
         deref '[]'  
         occurs '[1120, 1121, 1122, 1129, 1250, 1251, 1252, 1259]'  
      id124  '__cs_retval____VERIFIER_load_Struct_8'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1115, 1120]'  
      id125  '__cs_retval____VERIFIER_compare_and_exchange_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1138, 1144, 1150]'  
      id126  '__cs_local_main__agg_e2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1289, 1312, 1312, 1315, 1320, 1320, 1323]'  
      id127  '__cs_retval__lstack_pop_3'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1228, 1284, 1289]'  
      id128  '__cs_retval__pop_5'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1185, 1217, 1222]'  
      id129  '__cs_retval____VERIFIER_load_Struct_9'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1174, 1179]'  
      id130  '__cs_retval____VERIFIER_compare_and_exchange_9'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1204, 1210, 1216]'  
      id131  '__cs_retval____VERIFIER_load_Struct_10'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1245, 1250]'  
      id132  '__cs_retval____VERIFIER_compare_and_exchange_10'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1268, 1274, 1280]'  
      id133  '__cs_local_main_i1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1291, 1299, 1300, 1315, 1316]'  
      id134  '__cs_local_main_i2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1293, 1307, 1308, 1323, 1324]'  
      id135  '__cs_local_main___cs_tmp_if_cond_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1296, 1297]'  
      id136  '__cs_local_main___cs_tmp_if_cond_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1304, 1305]'  
      id137  '__cs_local_main___cs_tmp_if_cond_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1312, 1313]'  
      id138  '__cs_local_main___cs_tmp_if_cond_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[1320, 1321]'  

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
   worker_0
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
   worker_1
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
function 'worker_0' ----------------------------------:
void *worker_0(void *__cs_param_worker_arg)
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
function 'worker_1' ----------------------------------:
void *worker_1(void *__cs_param_worker_arg)
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
    __cs_create(&__cs_local_main_threads0, 0, worker_0, 1);
    __cs_create(&__cs_local_main_threads1, 0, worker_1, 2);
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

function: worker_0   stmt:     __cs_exit(0);

function: worker_1   stmt:     __cs_exit(0);

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
   (17, 'worker_0')  
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
   (103, 'worker_1')  
   (104, '__cs_param_worker_arg')  
   (105, '__cs_local_worker_thread')  
   (106, '__cs_local_worker_valore')  
   (107, '__cs_local_worker_valore_restituito')  
   (108, '__cs_retval__lstack_push_1')  
   (109, '__cs_param_lstack_push_value')  
   (110, '__cs_local_lstack_push_node')  
   (111, '__cs_retval__pop_1')  
   (112, '__cs_param_pop_head')  
   (113, '__cs_local_pop_next')  
   (114, '__cs_local_pop_orig')  
   (115, '__cs_retval____VERIFIER_load_Struct_1')  
   (116, '__cs_param___VERIFIER_load_Struct_head')  
   (117, '__cs_local_pop___cs_tmp_if_cond_2')  
   (118, '__cs_retval____VERIFIER_compare_and_exchange_1')  
   (119, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (120, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (121, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (122, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (123, '__cs_local_lstack_push___cs_tmp_if_cond_3')  
   (124, '__cs_param_push_head')  
   (125, '__cs_param_push_node')  
   (126, '__cs_local_push_next')  
   (127, '__cs_local_push_orig')  
   (128, '__cs_retval____VERIFIER_load_Struct_2')  
   (129, '__cs_param___VERIFIER_load_Struct_head')  
   (130, '__cs_retval____VERIFIER_compare_and_exchange_2')  
   (131, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (132, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (133, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (134, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (135, '__cs_retval__lstack_pop_1')  
   (136, '__cs_local_lstack_pop_node')  
   (137, '__cs_retval__pop_2')  
   (138, '__cs_param_pop_head')  
   (139, '__cs_local_pop_next')  
   (140, '__cs_local_pop_orig')  
   (141, '__cs_retval____VERIFIER_load_Struct_3')  
   (142, '__cs_param___VERIFIER_load_Struct_head')  
   (143, '__cs_local_pop___cs_tmp_if_cond_2')  
   (144, '__cs_retval____VERIFIER_compare_and_exchange_3')  
   (145, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (146, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (147, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (148, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (149, '__cs_local_lstack_pop___cs_tmp_if_cond_4')  
   (150, '__cs_local_lstack_pop_value')  
   (151, '__cs_param_push_head')  
   (152, '__cs_param_push_node')  
   (153, '__cs_local_push_next')  
   (154, '__cs_local_push_orig')  
   (155, '__cs_retval____VERIFIER_load_Struct_4')  
   (156, '__cs_param___VERIFIER_load_Struct_head')  
   (157, '__cs_retval____VERIFIER_compare_and_exchange_4')  
   (158, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (159, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (160, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (161, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (162, '__cs_retval__lstack_push_2')  
   (163, '__cs_param_lstack_push_value')  
   (164, '__cs_local_lstack_push_node')  
   (165, '__cs_retval__pop_3')  
   (166, '__cs_param_pop_head')  
   (167, '__cs_local_pop_next')  
   (168, '__cs_local_pop_orig')  
   (169, '__cs_retval____VERIFIER_load_Struct_5')  
   (170, '__cs_param___VERIFIER_load_Struct_head')  
   (171, '__cs_local_pop___cs_tmp_if_cond_2')  
   (172, '__cs_retval____VERIFIER_compare_and_exchange_5')  
   (173, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (174, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (175, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (176, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (177, '__cs_local_lstack_push___cs_tmp_if_cond_3')  
   (178, '__cs_param_push_head')  
   (179, '__cs_param_push_node')  
   (180, '__cs_local_push_next')  
   (181, '__cs_local_push_orig')  
   (182, '__cs_retval____VERIFIER_load_Struct_6')  
   (183, '__cs_param___VERIFIER_load_Struct_head')  
   (184, '__cs_retval____VERIFIER_compare_and_exchange_6')  
   (185, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (186, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (187, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (188, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (189, 'main')  
   (190, '__cs_local_main__agg_t1')  
   (191, '__cs_local_main__agg_t2')  
   (192, '__cs_local_main_threads0')  
   (193, '__cs_local_main_threads1')  
   (194, '__cs_retval__lstack_init_1')  
   (195, '__cs_local_lstack_init___cs_tmp_if_cond_1')  
   (196, '__cs_local_main__agg_e1')  
   (197, '__cs_retval__lstack_pop_2')  
   (198, '__cs_local_lstack_pop_node')  
   (199, '__cs_retval__pop_4')  
   (200, '__cs_param_pop_head')  
   (201, '__cs_local_pop_next')  
   (202, '__cs_local_pop_orig')  
   (203, '__cs_retval____VERIFIER_load_Struct_7')  
   (204, '__cs_param___VERIFIER_load_Struct_head')  
   (205, '__cs_local_pop___cs_tmp_if_cond_2')  
   (206, '__cs_retval____VERIFIER_compare_and_exchange_7')  
   (207, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (208, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (209, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (210, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (211, '__cs_local_lstack_pop___cs_tmp_if_cond_4')  
   (212, '__cs_local_lstack_pop_value')  
   (213, '__cs_param_push_head')  
   (214, '__cs_param_push_node')  
   (215, '__cs_local_push_next')  
   (216, '__cs_local_push_orig')  
   (217, '__cs_retval____VERIFIER_load_Struct_8')  
   (218, '__cs_param___VERIFIER_load_Struct_head')  
   (219, '__cs_retval____VERIFIER_compare_and_exchange_8')  
   (220, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (221, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (222, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (223, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (224, '__cs_local_main__agg_e2')  
   (225, '__cs_retval__lstack_pop_3')  
   (226, '__cs_local_lstack_pop_node')  
   (227, '__cs_retval__pop_5')  
   (228, '__cs_param_pop_head')  
   (229, '__cs_local_pop_next')  
   (230, '__cs_local_pop_orig')  
   (231, '__cs_retval____VERIFIER_load_Struct_9')  
   (232, '__cs_param___VERIFIER_load_Struct_head')  
   (233, '__cs_local_pop___cs_tmp_if_cond_2')  
   (234, '__cs_retval____VERIFIER_compare_and_exchange_9')  
   (235, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (236, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (237, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (238, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (239, '__cs_local_lstack_pop___cs_tmp_if_cond_4')  
   (240, '__cs_local_lstack_pop_value')  
   (241, '__cs_param_push_head')  
   (242, '__cs_param_push_node')  
   (243, '__cs_local_push_next')  
   (244, '__cs_local_push_orig')  
   (245, '__cs_retval____VERIFIER_load_Struct_10')  
   (246, '__cs_param___VERIFIER_load_Struct_head')  
   (247, '__cs_retval____VERIFIER_compare_and_exchange_10')  
   (248, '__cs_param___VERIFIER_compare_and_exchange_head')  
   (249, '__cs_param___VERIFIER_compare_and_exchange_orig')  
   (250, '__cs_param___VERIFIER_compare_and_exchange_next')  
   (251, '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0')  
   (252, '__cs_local_main_i1')  
   (253, '__cs_local_main_i2')  
   (254, '__cs_local_main___cs_tmp_if_cond_5')  
   (255, '__cs_local_main___cs_tmp_if_cond_6')  
   (256, '__cs_local_main___cs_tmp_if_cond_7')  
   (257, '__cs_local_main___cs_tmp_if_cond_8')  
