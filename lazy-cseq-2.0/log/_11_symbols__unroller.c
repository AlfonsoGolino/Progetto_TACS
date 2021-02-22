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
         occurs '[199, 250, 284, 294, 343, 347, 391, 442, 476, 492, 493, 494, 495, 498, 503, 503, 504, 504, 505, 505, 506, 506, 507, 507, 508, 508, 509, 510, 511, 511, 526, 575, 579, 623, 672, 676]'  
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
         occurs '[190, 195, 387]'  
      id17  '__cs_local_worker_valore'  
         type 'static int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[195, 387]'  
      id18  '__cs_local_worker_valore_restituito'  
         type 'static int *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[192, 384]'  
      id19  '__cs_retval__lstack_push_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[246, 285, 288]'  
      id20  '__cs_param_lstack_push_value'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[195, 248, 387, 440]'  
      id21  '__cs_local_lstack_push_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[248, 440]'  
         occurs '[240, 243, 248, 250, 432, 435, 440, 442]'  
      id22  '__cs_retval__pop_1'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[214, 237, 240]'  
      id23  '__cs_param_pop_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[199, 204, 220, 294, 299, 315, 391, 396, 412]'  
      id24  '__cs_local_pop_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[216, 217, 220, 311, 312, 315, 408, 409, 412]'  
      id25  '__cs_local_pop_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[220, 315, 412]'  
         deref '[]'  
         occurs '[208, 211, 216, 217, 220, 237, 303, 306, 311, 312, 315, 332, 400, 403, 408, 409, 412, 429]'  
      id26  '__cs_retval____VERIFIER_load_Struct_1'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[205, 208]'  
      id27  '__cs_param___VERIFIER_load_Struct_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[205, 256, 300, 353, 397, 448]'  
         occurs '[204, 205, 255, 256, 299, 300, 352, 353, 396, 397, 447, 448]'  
      id28  '__cs_local_pop___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[211, 212, 306, 307, 403, 404]'  
      id29  '__cs_retval____VERIFIER_compare_and_exchange_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[227, 232, 236]'  
      id30  '__cs_param___VERIFIER_compare_and_exchange_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[223, 226, 231, 268, 271, 276, 318, 321, 326, 365, 368, 373, 415, 418, 423, 460, 463, 468]'  
         occurs '[220, 223, 226, 231, 265, 268, 271, 276, 315, 318, 321, 326, 362, 365, 368, 373, 412, 415, 418, 423, 457, 460, 463, 468]'  
      id31  '__cs_param___VERIFIER_compare_and_exchange_orig'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[223, 231, 268, 276, 318, 326, 365, 373, 415, 423, 460, 468]'  
         occurs '[220, 223, 231, 265, 268, 276, 315, 318, 326, 362, 365, 373, 412, 415, 423, 457, 460, 468]'  
      id32  '__cs_param___VERIFIER_compare_and_exchange_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[220, 226, 265, 271, 315, 321, 362, 368, 412, 418, 457, 463]'  
      id33  '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[223, 224, 268, 269, 318, 319, 365, 366, 415, 416, 460, 461]'  
      id34  '__cs_local_lstack_push___cs_tmp_if_cond_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[243, 244, 435, 436]'  
      id35  '__cs_param_push_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[250, 255, 265, 347, 352, 362, 442, 447, 457]'  
      id36  '__cs_param_push_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[260, 357, 452]'  
         occurs '[250, 260, 262, 347, 357, 359, 442, 452, 454]'  
      id37  '__cs_local_push_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[261, 262, 265, 358, 359, 362, 453, 454, 457]'  
      id38  '__cs_local_push_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[265, 362, 457]'  
         deref '[]'  
         occurs '[259, 260, 261, 265, 356, 357, 358, 362, 451, 452, 453, 457]'  
      id39  '__cs_retval____VERIFIER_load_Struct_2'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[256, 259]'  
      id40  '__cs_retval____VERIFIER_compare_and_exchange_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[272, 277, 281]'  
      id41  '__cs_retval__lstack_pop_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[341, 381, 384]'  
      id42  '__cs_local_lstack_pop_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[345]'  
         occurs '[335, 338, 345, 347]'  
      id43  '__cs_retval__pop_2'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[309, 332, 335]'  
      id44  '__cs_retval____VERIFIER_load_Struct_3'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[300, 303]'  
      id45  '__cs_retval____VERIFIER_compare_and_exchange_3'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[322, 327, 331]'  
      id46  '__cs_local_lstack_pop___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[338, 339]'  
      id47  '__cs_local_lstack_pop_value'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[345, 381]'  
      id48  '__cs_retval____VERIFIER_load_Struct_4'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[353, 356]'  
      id49  '__cs_retval____VERIFIER_compare_and_exchange_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[369, 374, 378]'  
      id50  '__cs_retval__lstack_push_2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[438, 477, 480]'  
      id51  '__cs_retval__pop_3'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[406, 429, 432]'  
      id52  '__cs_retval____VERIFIER_load_Struct_5'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[397, 400]'  
      id53  '__cs_retval____VERIFIER_compare_and_exchange_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[419, 424, 428]'  
      id54  '__cs_retval____VERIFIER_load_Struct_6'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[448, 451]'  
      id55  '__cs_retval____VERIFIER_compare_and_exchange_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[464, 469, 473]'  
   main
      id56  '__cs_local_main__agg_t1'  
         type 'static int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[723, 739]'  
      id57  '__cs_local_main__agg_t2'  
         type 'static int'  kind 'l'  arity '1'  
         size '[10]'  
         ref '[]'  
         deref '[]'  
         occurs '[731, 747]'  
      id58  '__cs_local_main_threads0'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[516]'  
         deref '[]'  
         occurs '[516, 518]'  
      id59  '__cs_local_main_threads1'  
         type 'static __cs_t'  kind 'l'  arity '0'  
         size '[]'  
         ref '[517]'  
         deref '[]'  
         occurs '[517, 519]'  
      id60  '__cs_retval__lstack_init_1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[501, 512, 515]'  
      id61  '__cs_local_lstack_init___cs_tmp_if_cond_1'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[498, 499]'  
      id62  '__cs_local_main__agg_e1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[616, 720, 720, 723, 728, 728, 731]'  
      id63  '__cs_retval__lstack_pop_2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[573, 613, 616]'  
      id64  '__cs_local_lstack_pop_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[577, 674]'  
         occurs '[567, 570, 577, 579, 664, 667, 674, 676]'  
      id65  '__cs_retval__pop_4'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[541, 564, 567]'  
      id66  '__cs_param_pop_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[526, 531, 547, 623, 628, 644]'  
      id67  '__cs_local_pop_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[543, 544, 547, 640, 641, 644]'  
      id68  '__cs_local_pop_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[547, 644]'  
         deref '[]'  
         occurs '[535, 538, 543, 544, 547, 564, 632, 635, 640, 641, 644, 661]'  
      id69  '__cs_retval____VERIFIER_load_Struct_7'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[532, 535]'  
      id70  '__cs_param___VERIFIER_load_Struct_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[532, 585, 629, 682]'  
         occurs '[531, 532, 584, 585, 628, 629, 681, 682]'  
      id71  '__cs_local_pop___cs_tmp_if_cond_2'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[538, 539, 635, 636]'  
      id72  '__cs_retval____VERIFIER_compare_and_exchange_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[554, 559, 563]'  
      id73  '__cs_param___VERIFIER_compare_and_exchange_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[550, 553, 558, 597, 600, 605, 647, 650, 655, 694, 697, 702]'  
         occurs '[547, 550, 553, 558, 594, 597, 600, 605, 644, 647, 650, 655, 691, 694, 697, 702]'  
      id74  '__cs_param___VERIFIER_compare_and_exchange_orig'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[550, 558, 597, 605, 647, 655, 694, 702]'  
         occurs '[547, 550, 558, 594, 597, 605, 644, 647, 655, 691, 694, 702]'  
      id75  '__cs_param___VERIFIER_compare_and_exchange_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[547, 553, 594, 600, 644, 650, 691, 697]'  
      id76  '__cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[550, 551, 597, 598, 647, 648, 694, 695]'  
      id77  '__cs_local_lstack_pop___cs_tmp_if_cond_4'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[570, 571, 667, 668]'  
      id78  '__cs_local_lstack_pop_value'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[577, 613, 674, 710]'  
      id79  '__cs_param_push_head'  
         type 'static struct lstack_head *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[579, 584, 594, 676, 681, 691]'  
      id80  '__cs_param_push_node'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[589, 686]'  
         occurs '[579, 589, 591, 676, 686, 688]'  
      id81  '__cs_local_push_next'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[590, 591, 594, 687, 688, 691]'  
      id82  '__cs_local_push_orig'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[594, 691]'  
         deref '[]'  
         occurs '[588, 589, 590, 594, 685, 686, 687, 691]'  
      id83  '__cs_retval____VERIFIER_load_Struct_8'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[585, 588]'  
      id84  '__cs_retval____VERIFIER_compare_and_exchange_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[601, 606, 610]'  
      id85  '__cs_local_main__agg_e2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[713, 736, 736, 739, 744, 744, 747]'  
      id86  '__cs_retval__lstack_pop_3'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[670, 710, 713]'  
      id87  '__cs_retval__pop_5'  
         type 'static struct lstack_node *'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[638, 661, 664]'  
      id88  '__cs_retval____VERIFIER_load_Struct_9'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[629, 632]'  
      id89  '__cs_retval____VERIFIER_compare_and_exchange_9'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[651, 656, 660]'  
      id90  '__cs_retval____VERIFIER_load_Struct_10'  
         type 'static struct lstack_head'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[682, 685]'  
      id91  '__cs_retval____VERIFIER_compare_and_exchange_10'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[698, 703, 707]'  
      id92  '__cs_local_main_i1'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[715, 723, 724, 739, 740]'  
      id93  '__cs_local_main_i2'  
         type 'static int'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[717, 731, 732, 747, 748]'  
      id94  '__cs_local_main___cs_tmp_if_cond_5'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[720, 721]'  
      id95  '__cs_local_main___cs_tmp_if_cond_6'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[728, 729]'  
      id96  '__cs_local_main___cs_tmp_if_cond_7'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[736, 737]'  
      id97  '__cs_local_main___cs_tmp_if_cond_8'  
         type 'static _Bool'  kind 'l'  arity '0'  
         size '[]'  
         ref '[]'  
         deref '[]'  
         occurs '[744, 745]'  

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
