CBMC version 5.10 (cbmc-5.10) 64-bit x86_64 linux
Parsing /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c
Converting
Type-checking _cs_Test_101
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
Generic Property Instrumentation
Running with 8 object bits, 24 offset bits (default)
Starting Bounded Model Checking
size of program expression: 8163 steps
simple slicing removed 147 assignments
Generated 3 VCC(s), 3 remaining after simplification
Passing problem to propositional reduction
converting SSA
Running propositional reduction
Post-processing
Solving with MiniSAT 2.2.1 with simplifier
265048 variables, 995346 clauses
SAT checker: instance is SATISFIABLE
Runtime decision procedure: 2.62723s
Building error trace
Counterexample:

State 263 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2080 function main thread 0
----------------------------------------------------
  __cs_tmp_t0_r0=2 (000010)

State 264 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2081 function main thread 0
----------------------------------------------------
  __cs_pc_cs[0]=2 (00000010)

State 270 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1579 function main_thread thread 0
----------------------------------------------------
  results.head.aba=0u (00000000 00000000 00000000 00000000)

State 271 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1580 function main_thread thread 0
----------------------------------------------------
  results.head.node=((struct lstack_node *)NULL) (00000000 00000000 00000000 00000000)

State 272 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1581 function main_thread thread 0
----------------------------------------------------
  results.size=0 (00000000 00000000 00000000 00000000)

State 276 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1582 function main_thread thread 0
----------------------------------------------------
  __cs_size=48u (00000000 00000000 00000000 00110000)

State 277 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 69 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 280 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 69 function __cs_safe_malloc thread 0
----------------------------------------------------
  malloc_size=48u (00000000 00000000 00000000 00110000)

State 297 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 69 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 301 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1582 function main_thread thread 0
----------------------------------------------------
  results.node_buffer=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 302 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1586 function main_thread thread 0
----------------------------------------------------
  __cs_local_lstack_init___cs_tmp_if_cond_1=FALSE (00000000)

State 304 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1594 function main_thread thread 0
----------------------------------------------------
  dynamic_object1[0].next=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 305 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1595 function main_thread thread 0
----------------------------------------------------
  dynamic_object1[8 / 8].next=&dynamic_object1[2].value (00001000 00000000 00000000 00010000)

State 306 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1596 function main_thread thread 0
----------------------------------------------------
  dynamic_object1[16 / 8].next=&dynamic_object1[3].value (00001000 00000000 00000000 00011000)

State 307 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1597 function main_thread thread 0
----------------------------------------------------
  dynamic_object1[24 / 8].next=&dynamic_object1[4].value (00001000 00000000 00000000 00100000)

State 308 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1598 function main_thread thread 0
----------------------------------------------------
  dynamic_object1[32 / 8].next=&dynamic_object1[5].value (00001000 00000000 00000000 00101000)

State 309 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1599 function main_thread thread 0
----------------------------------------------------
  dynamic_object1[40 / 8].next=&dynamic_object1[6].value (00001000 00000000 00000000 00110000)

State 310 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1600 function main_thread thread 0
----------------------------------------------------
  dynamic_object1[40 / 8].next=((struct lstack_node *)NULL) (00000000 00000000 00000000 00000000)

State 311 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1601 function main_thread thread 0
----------------------------------------------------
  results.free.aba=0u (00000000 00000000 00000000 00000000)

State 312 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1602 function main_thread thread 0
----------------------------------------------------
  results.free.node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 313 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1603 function main_thread thread 0
----------------------------------------------------
  __cs_retval__lstack_init_1=0 (00000000 00000000 00000000 00000000)

State 317 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1613 function main_thread thread 0
----------------------------------------------------
  __cs_new_thread_id=&__cs_local_main_threads0 (00011001 00000000 00000000 00000000)

State 318 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1613 function main_thread thread 0
----------------------------------------------------
  __cs_attr=NULL (00000000 00000000 00000000 00000000)

State 319 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1613 function main_thread thread 0
----------------------------------------------------
  __cs_thread_function=worker_0 (00011010 00000000 00000000 00000000)

State 320 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1613 function main_thread thread 0
----------------------------------------------------
  __cs_arg=NULL + 1 (00000000 00000000 00000000 00000001)

State 321 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1613 function main_thread thread 0
----------------------------------------------------
  __cs_threadID=1 (00000000 00000000 00000000 00000001)

State 323 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 92 function __cs_create thread 0
----------------------------------------------------
  __cs_local_main_threads0=1 (00000000 00000000 00000000 00000001)

State 324 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 93 function __cs_create thread 0
----------------------------------------------------
  __cs_active_thread[1]=1 (1)

State 325 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 94 function __cs_create thread 0
----------------------------------------------------
  __cs_threadargs[1]=NULL + 1 (00000000 00000000 00000000 00000001)

State 328 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 95 function __cs_create thread 0
----------------------------------------------------
  __cs_message="thread spawned" (00011011 00000000 00000000 00000000)

State 335 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1615 function main_thread thread 0
----------------------------------------------------
  __cs_new_thread_id=&__cs_local_main_threads1 (00011100 00000000 00000000 00000000)

State 336 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1615 function main_thread thread 0
----------------------------------------------------
  __cs_attr=NULL (00000000 00000000 00000000 00000000)

State 337 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1615 function main_thread thread 0
----------------------------------------------------
  __cs_thread_function=worker_1 (00011101 00000000 00000000 00000000)

State 338 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1615 function main_thread thread 0
----------------------------------------------------
  __cs_arg=NULL + 2 (00000000 00000000 00000000 00000010)

State 339 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1615 function main_thread thread 0
----------------------------------------------------
  __cs_threadID=2 (00000000 00000000 00000000 00000010)

State 341 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 92 function __cs_create thread 0
----------------------------------------------------
  __cs_local_main_threads1=2 (00000000 00000000 00000000 00000010)

State 342 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 93 function __cs_create thread 0
----------------------------------------------------
  __cs_active_thread[2]=1 (1)

State 343 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 94 function __cs_create thread 0
----------------------------------------------------
  __cs_threadargs[2]=NULL + 2 (00000000 00000000 00000000 00000010)

State 346 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 95 function __cs_create thread 0
----------------------------------------------------
  __cs_message="thread spawned" (00011011 00000000 00000000 00000000)

State 408 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2074 function main_thread thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 409 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2074 function main_thread thread 0
----------------------------------------------------
  __cs_thread_index=0u (00000000 00000000 00000000 00000000)

State 410 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 106 function __cs_exit thread 0
----------------------------------------------------
  __cs_thread_joinargs[0]=NULL (00000000 00000000 00000000 00000000)

State 415 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2085 function main thread 0
----------------------------------------------------
  __cs_pc[0]=2 (0000010)

State 416 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2087 function main thread 0
----------------------------------------------------
  __cs_tmp_t1_r0=84 (1010100)

State 418 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2090 function main thread 0
----------------------------------------------------
  __cs_pc_cs[1]=84 (01010100)

State 422 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2092 function main thread 0
----------------------------------------------------
  __cs_param_worker_arg=NULL + 1 (00000000 00000000 00000000 00000001)

State 424 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 328 function worker_0 thread 0
----------------------------------------------------
  __cs_local_worker_thread=1 (00000000 00000000 00000000 00000001)

State 429 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 332 function worker_0 thread 0
----------------------------------------------------
  __cs_size=40u (00000000 00000000 00000000 00101000)

State 430 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 69 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 433 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 69 function __cs_safe_malloc thread 0
----------------------------------------------------
  malloc_size=40u (00000000 00000000 00000000 00101000)

State 450 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 69 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=dynamic_object2 (00001100 00000000 00000000 00000000)

State 454 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 332 function worker_0 thread 0
----------------------------------------------------
  __cs_local_worker_valore_restituito=dynamic_object2 (00001100 00000000 00000000 00000000)

State 455 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 336 function worker_0 thread 0
----------------------------------------------------
  __cs_param_lstack_push_value=1 (00000000 00000000 00000000 00000001)

State 457 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 342 function worker_0 thread 0
----------------------------------------------------
  __cs_param_pop_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 459 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 349 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 461 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 351 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_1={ .aba=0u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000000, 00001000 00000000 00000000 00000000 })

State 463 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 360 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop_orig={ .aba=0u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000000, 00001000 00000000 00000000 00000000 })

State 464 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 364 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_2=FALSE (00000000)

State 467 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 374 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop_next.aba=1u (00000000 00000000 00000000 00000001)

State 468 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 375 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop_next.node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 470 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 380 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 472 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 383 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_pop_orig.aba (00000111 00000000 00000000 00000000)

State 473 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 385 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=1u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000001, 00001000 00000000 00000000 00001000 })

State 475 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 390 function worker_0 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 478 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 394 function worker_0 thread 0
----------------------------------------------------
  results.free={ .aba=1u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000001, 00001000 00000000 00000000 00001000 })

State 479 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 395 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_1=TRUE (00000001)

State 485 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 419 function worker_0 thread 0
----------------------------------------------------
  __cs_retval__pop_1=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 488 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 429 function worker_0 thread 0
----------------------------------------------------
  __cs_local_lstack_push_node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 490 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 434 function worker_0 thread 0
----------------------------------------------------
  __cs_local_lstack_push___cs_tmp_if_cond_3=FALSE (00000000)

State 493 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 443 function worker_0 thread 0
----------------------------------------------------
  dynamic_object1[0].value=1 (00000000 00000000 00000000 00000001)

State 495 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 447 function worker_0 thread 0
----------------------------------------------------
  __cs_param_push_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 497 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 450 function worker_0 thread 0
----------------------------------------------------
  __cs_param_push_node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 499 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 457 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 501 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 459 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_2={ .aba=0u, .node=((struct lstack_node *)NULL) } ({ 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 })

State 503 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 468 function worker_0 thread 0
----------------------------------------------------
  __cs_local_push_orig={ .aba=0u, .node=((struct lstack_node *)NULL) } ({ 00000000 00000000 00000000 00000000, 00000000 00000000 00000000 00000000 })

State 505 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 470 function worker_0 thread 0
----------------------------------------------------
  dynamic_object1[0].next=((struct lstack_node *)NULL) (00000000 00000000 00000000 00000000)

State 506 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 471 function worker_0 thread 0
----------------------------------------------------
  __cs_local_push_next.aba=1u (00000000 00000000 00000000 00000001)

State 508 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 473 function worker_0 thread 0
----------------------------------------------------
  __cs_local_push_next.node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 510 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 478 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 512 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 481 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_push_orig.aba (00001001 00000000 00000000 00000000)

State 513 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 483 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=1u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000001, 00001000 00000000 00000000 00000000 })

State 515 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 488 function worker_0 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 518 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 492 function worker_0 thread 0
----------------------------------------------------
  results.head={ .aba=1u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000001, 00001000 00000000 00000000 00000000 })

State 519 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 493 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_2=TRUE (00000001)

State 528 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 523 function worker_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_add_obj=&results.size (00000010 00000000 00000000 00010100)

State 529 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 523 function worker_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_add_v=1 (00000000 00000000 00000000 00000001)

State 530 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 311 function __CSEQ_atomic_fetch_add thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_fetch_add_old=0 (00000000 00000000 00000000 00000000)

State 531 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 312 function __CSEQ_atomic_fetch_add thread 0
----------------------------------------------------
  results.size=1 (00000000 00000000 00000000 00000001)

State 535 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 524 function worker_0 thread 0
----------------------------------------------------
  __cs_retval__lstack_push_1=0 (00000000 00000000 00000000 00000000)

State 538 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 541 function worker_0 thread 0
----------------------------------------------------
  __cs_param_pop_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 540 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 548 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 542 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 550 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_3={ .aba=1u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000001, 00001000 00000000 00000000 00000000 })

State 544 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 559 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop_orig={ .aba=1u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000001, 00001000 00000000 00000000 00000000 })

State 545 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 563 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_2=FALSE (00000000)

State 548 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 573 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop_next.aba=2u (00000000 00000000 00000000 00000010)

State 549 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 574 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop_next.node=((struct lstack_node *)NULL) (00000000 00000000 00000000 00000000)

State 551 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 579 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 553 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 582 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_pop_orig.aba (00001010 00000000 00000000 00000000)

State 554 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 584 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=2u, .node=((struct lstack_node *)NULL) } ({ 00000000 00000000 00000000 00000010, 00000000 00000000 00000000 00000000 })

State 556 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 589 function worker_0 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 559 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 593 function worker_0 thread 0
----------------------------------------------------
  results.head={ .aba=2u, .node=((struct lstack_node *)NULL) } ({ 00000000 00000000 00000000 00000010, 00000000 00000000 00000000 00000000 })

State 560 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 594 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_3=TRUE (00000001)

State 566 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 618 function worker_0 thread 0
----------------------------------------------------
  __cs_retval__pop_2=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 569 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 628 function worker_0 thread 0
----------------------------------------------------
  __cs_local_lstack_pop_node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 571 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 633 function worker_0 thread 0
----------------------------------------------------
  __cs_local_lstack_pop___cs_tmp_if_cond_4=FALSE (00000000)

State 576 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 642 function worker_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_sub_obj=&results.size (00000010 00000000 00000000 00010100)

State 577 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 642 function worker_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_sub_v=1 (00000000 00000000 00000000 00000001)

State 578 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 319 function __CSEQ_atomic_fetch_sub thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_fetch_sub_old=1 (00000000 00000000 00000000 00000001)

State 579 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 320 function __CSEQ_atomic_fetch_sub thread 0
----------------------------------------------------
  results.size=0 (00000000 00000000 00000000 00000000)

State 584 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 645 function worker_0 thread 0
----------------------------------------------------
  __cs_local_lstack_pop_value=1 (00000000 00000000 00000000 00000001)

State 586 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 649 function worker_0 thread 0
----------------------------------------------------
  __cs_param_push_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 588 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 652 function worker_0 thread 0
----------------------------------------------------
  __cs_param_push_node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 590 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 659 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 592 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 661 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_4={ .aba=1u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000001, 00001000 00000000 00000000 00001000 })

State 594 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 670 function worker_0 thread 0
----------------------------------------------------
  __cs_local_push_orig={ .aba=1u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000001, 00001000 00000000 00000000 00001000 })

State 596 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 672 function worker_0 thread 0
----------------------------------------------------
  dynamic_object1[0].next=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 597 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 673 function worker_0 thread 0
----------------------------------------------------
  __cs_local_push_next.aba=2u (00000000 00000000 00000000 00000010)

State 599 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 675 function worker_0 thread 0
----------------------------------------------------
  __cs_local_push_next.node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 601 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 680 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 603 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 683 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_push_orig.aba (00001011 00000000 00000000 00000000)

State 604 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 685 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=2u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000010, 00001000 00000000 00000000 00000000 })

State 606 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 690 function worker_0 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 609 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 694 function worker_0 thread 0
----------------------------------------------------
  results.free={ .aba=2u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000010, 00001000 00000000 00000000 00000000 })

State 610 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 695 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_4=TRUE (00000001)

State 616 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 724 function worker_0 thread 0
----------------------------------------------------
  __cs_retval__lstack_pop_1=1 (00000000 00000000 00000000 00000001)

State 619 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 734 function worker_0 thread 0
----------------------------------------------------
  dynamic_object2[0]=1 (00000000 00000000 00000000 00000001)

State 620 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 738 function worker_0 thread 0
----------------------------------------------------
  __cs_param_lstack_push_value=2 (00000000 00000000 00000000 00000010)

State 622 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 744 function worker_0 thread 0
----------------------------------------------------
  __cs_param_pop_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 624 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 751 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 626 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 753 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_5={ .aba=2u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000010, 00001000 00000000 00000000 00000000 })

State 628 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 762 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop_orig={ .aba=2u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000010, 00001000 00000000 00000000 00000000 })

State 629 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 766 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_2=FALSE (00000000)

State 632 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 776 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop_next.aba=3u (00000000 00000000 00000000 00000011)

State 633 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 777 function worker_0 thread 0
----------------------------------------------------
  __cs_local_pop_next.node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 635 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 782 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 637 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 785 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_pop_orig.aba (00001101 00000000 00000000 00000000)

State 638 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 787 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=3u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000011, 00001000 00000000 00000000 00001000 })

State 640 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 792 function worker_0 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 643 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 796 function worker_0 thread 0
----------------------------------------------------
  results.free={ .aba=3u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000011, 00001000 00000000 00000000 00001000 })

State 644 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 797 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_5=TRUE (00000001)

State 650 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 821 function worker_0 thread 0
----------------------------------------------------
  __cs_retval__pop_3=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 653 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 831 function worker_0 thread 0
----------------------------------------------------
  __cs_local_lstack_push_node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 655 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 836 function worker_0 thread 0
----------------------------------------------------
  __cs_local_lstack_push___cs_tmp_if_cond_3=FALSE (00000000)

State 658 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 845 function worker_0 thread 0
----------------------------------------------------
  dynamic_object1[POINTER_OFFSET(__cs_local_lstack_push_node) / 8].value=2 (00000000 00000000 00000000 00000010)

State 660 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 849 function worker_0 thread 0
----------------------------------------------------
  __cs_param_push_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 662 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 852 function worker_0 thread 0
----------------------------------------------------
  __cs_param_push_node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 664 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 859 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 666 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 861 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_6={ .aba=2u, .node=((struct lstack_node *)NULL) } ({ 00000000 00000000 00000000 00000010, 00000000 00000000 00000000 00000000 })

State 668 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 870 function worker_0 thread 0
----------------------------------------------------
  __cs_local_push_orig={ .aba=2u, .node=((struct lstack_node *)NULL) } ({ 00000000 00000000 00000000 00000010, 00000000 00000000 00000000 00000000 })

State 670 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 872 function worker_0 thread 0
----------------------------------------------------
  dynamic_object1[POINTER_OFFSET(__cs_param_push_node) / 8].next=((struct lstack_node *)NULL) (00000000 00000000 00000000 00000000)

State 671 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 873 function worker_0 thread 0
----------------------------------------------------
  __cs_local_push_next.aba=3u (00000000 00000000 00000000 00000011)

State 673 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 875 function worker_0 thread 0
----------------------------------------------------
  __cs_local_push_next.node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 675 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 880 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 677 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 883 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_push_orig.aba (00001110 00000000 00000000 00000000)

State 678 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 885 function worker_0 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=3u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000011, 00001000 00000000 00000000 00000000 })

State 680 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 890 function worker_0 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 683 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 894 function worker_0 thread 0
----------------------------------------------------
  results.head={ .aba=3u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000011, 00001000 00000000 00000000 00000000 })

State 684 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 895 function worker_0 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_6=TRUE (00000001)

State 693 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 925 function worker_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_add_obj=&results.size (00000010 00000000 00000000 00010100)

State 694 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 925 function worker_0 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_add_v=1 (00000000 00000000 00000000 00000001)

State 695 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 311 function __CSEQ_atomic_fetch_add thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_fetch_add_old=0 (00000000 00000000 00000000 00000000)

State 696 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 312 function __CSEQ_atomic_fetch_add thread 0
----------------------------------------------------
  results.size=1 (00000000 00000000 00000000 00000001)

State 700 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 926 function worker_0 thread 0
----------------------------------------------------
  __cs_retval__lstack_push_2=0 (00000000 00000000 00000000 00000000)

State 705 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 943 function worker_0 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 706 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 943 function worker_0 thread 0
----------------------------------------------------
  __cs_thread_index=1u (00000000 00000000 00000000 00000001)

State 707 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 106 function __cs_exit thread 0
----------------------------------------------------
  __cs_thread_joinargs[1]=NULL (00000000 00000000 00000000 00000000)

State 712 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2093 function main thread 0
----------------------------------------------------
  __cs_pc[1]=84 (1010100)

State 713 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2096 function main thread 0
----------------------------------------------------
  __cs_tmp_t2_r0=84 (1010100)

State 715 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2099 function main thread 0
----------------------------------------------------
  __cs_pc_cs[2]=84 (01010100)

State 719 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2101 function main thread 0
----------------------------------------------------
  __cs_param_worker_arg=NULL + 2 (00000000 00000000 00000000 00000010)

State 721 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 949 function worker_1 thread 0
----------------------------------------------------
  __cs_local_worker_thread=2 (00000000 00000000 00000000 00000010)

State 726 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 953 function worker_1 thread 0
----------------------------------------------------
  __cs_size=40u (00000000 00000000 00000000 00101000)

State 727 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 69 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=NULL (00000000 00000000 00000000 00000000)

State 730 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 69 function __cs_safe_malloc thread 0
----------------------------------------------------
  malloc_size=40u (00000000 00000000 00000000 00101000)

State 747 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 69 function __cs_safe_malloc thread 0
----------------------------------------------------
  __cs_ptr=dynamic_object3 (00010011 00000000 00000000 00000000)

State 751 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 953 function worker_1 thread 0
----------------------------------------------------
  __cs_local_worker_valore_restituito=dynamic_object3 (00010011 00000000 00000000 00000000)

State 752 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 957 function worker_1 thread 0
----------------------------------------------------
  __cs_param_lstack_push_value=11 (00000000 00000000 00000000 00001011)

State 754 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 963 function worker_1 thread 0
----------------------------------------------------
  __cs_param_pop_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 756 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 970 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 758 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 972 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_1={ .aba=3u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000011, 00001000 00000000 00000000 00001000 })

State 760 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 981 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop_orig={ .aba=3u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000011, 00001000 00000000 00000000 00001000 })

State 761 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 985 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_2=FALSE (00000000)

State 764 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 995 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop_next.aba=4u (00000000 00000000 00000000 00000100)

State 765 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 996 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop_next.node=&dynamic_object1[2].value (00001000 00000000 00000000 00010000)

State 767 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1001 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 769 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1004 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_pop_orig.aba (00001111 00000000 00000000 00000000)

State 770 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1006 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=4u, .node=&dynamic_object1[2].value } ({ 00000000 00000000 00000000 00000100, 00001000 00000000 00000000 00010000 })

State 772 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1011 function worker_1 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 775 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1015 function worker_1 thread 0
----------------------------------------------------
  results.free={ .aba=4u, .node=&dynamic_object1[2].value } ({ 00000000 00000000 00000000 00000100, 00001000 00000000 00000000 00010000 })

State 776 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1016 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_1=TRUE (00000001)

State 782 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1040 function worker_1 thread 0
----------------------------------------------------
  __cs_retval__pop_1=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 785 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1050 function worker_1 thread 0
----------------------------------------------------
  __cs_local_lstack_push_node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 787 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1055 function worker_1 thread 0
----------------------------------------------------
  __cs_local_lstack_push___cs_tmp_if_cond_3=FALSE (00000000)

State 790 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1064 function worker_1 thread 0
----------------------------------------------------
  dynamic_object1[POINTER_OFFSET(__cs_local_lstack_push_node) / 8].value=11 (00000000 00000000 00000000 00001011)

State 792 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1068 function worker_1 thread 0
----------------------------------------------------
  __cs_param_push_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 794 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1071 function worker_1 thread 0
----------------------------------------------------
  __cs_param_push_node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 796 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1078 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 798 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1080 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_2={ .aba=3u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000011, 00001000 00000000 00000000 00000000 })

State 800 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1089 function worker_1 thread 0
----------------------------------------------------
  __cs_local_push_orig={ .aba=3u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000011, 00001000 00000000 00000000 00000000 })

State 802 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1091 function worker_1 thread 0
----------------------------------------------------
  dynamic_object1[POINTER_OFFSET(__cs_param_push_node) / 8].next=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 803 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1092 function worker_1 thread 0
----------------------------------------------------
  __cs_local_push_next.aba=4u (00000000 00000000 00000000 00000100)

State 805 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1094 function worker_1 thread 0
----------------------------------------------------
  __cs_local_push_next.node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 807 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1099 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 809 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1102 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_push_orig.aba (00010000 00000000 00000000 00000000)

State 810 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1104 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=4u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000100, 00001000 00000000 00000000 00001000 })

State 812 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1109 function worker_1 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 815 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1113 function worker_1 thread 0
----------------------------------------------------
  results.head={ .aba=4u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000100, 00001000 00000000 00000000 00001000 })

State 816 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1114 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_2=TRUE (00000001)

State 825 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1144 function worker_1 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_add_obj=&results.size (00000010 00000000 00000000 00010100)

State 826 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1144 function worker_1 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_add_v=1 (00000000 00000000 00000000 00000001)

State 827 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 311 function __CSEQ_atomic_fetch_add thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_fetch_add_old=1 (00000000 00000000 00000000 00000001)

State 828 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 312 function __CSEQ_atomic_fetch_add thread 0
----------------------------------------------------
  results.size=2 (00000000 00000000 00000000 00000010)

State 832 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1145 function worker_1 thread 0
----------------------------------------------------
  __cs_retval__lstack_push_1=0 (00000000 00000000 00000000 00000000)

State 835 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1162 function worker_1 thread 0
----------------------------------------------------
  __cs_param_pop_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 837 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1169 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 839 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1171 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_3={ .aba=4u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000100, 00001000 00000000 00000000 00001000 })

State 841 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1180 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop_orig={ .aba=4u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000100, 00001000 00000000 00000000 00001000 })

State 842 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1184 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_2=FALSE (00000000)

State 845 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1194 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop_next.aba=5u (00000000 00000000 00000000 00000101)

State 846 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1195 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop_next.node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 848 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1200 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 850 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1203 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_pop_orig.aba (00010001 00000000 00000000 00000000)

State 851 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1205 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=5u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000101, 00001000 00000000 00000000 00000000 })

State 853 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1210 function worker_1 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 856 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1214 function worker_1 thread 0
----------------------------------------------------
  results.head={ .aba=5u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000101, 00001000 00000000 00000000 00000000 })

State 857 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1215 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_3=TRUE (00000001)

State 863 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1239 function worker_1 thread 0
----------------------------------------------------
  __cs_retval__pop_2=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 866 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1249 function worker_1 thread 0
----------------------------------------------------
  __cs_local_lstack_pop_node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 868 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1254 function worker_1 thread 0
----------------------------------------------------
  __cs_local_lstack_pop___cs_tmp_if_cond_4=FALSE (00000000)

State 873 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1263 function worker_1 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_sub_obj=&results.size (00000010 00000000 00000000 00010100)

State 874 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1263 function worker_1 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_sub_v=1 (00000000 00000000 00000000 00000001)

State 875 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 319 function __CSEQ_atomic_fetch_sub thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_fetch_sub_old=2 (00000000 00000000 00000000 00000010)

State 876 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 320 function __CSEQ_atomic_fetch_sub thread 0
----------------------------------------------------
  results.size=1 (00000000 00000000 00000000 00000001)

State 881 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1266 function worker_1 thread 0
----------------------------------------------------
  __cs_local_lstack_pop_value=11 (00000000 00000000 00000000 00001011)

State 883 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1270 function worker_1 thread 0
----------------------------------------------------
  __cs_param_push_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 885 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1273 function worker_1 thread 0
----------------------------------------------------
  __cs_param_push_node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 887 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1280 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 889 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1282 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_4={ .aba=4u, .node=&dynamic_object1[2].value } ({ 00000000 00000000 00000000 00000100, 00001000 00000000 00000000 00010000 })

State 891 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1291 function worker_1 thread 0
----------------------------------------------------
  __cs_local_push_orig={ .aba=4u, .node=&dynamic_object1[2].value } ({ 00000000 00000000 00000000 00000100, 00001000 00000000 00000000 00010000 })

State 893 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1293 function worker_1 thread 0
----------------------------------------------------
  dynamic_object1[POINTER_OFFSET(__cs_param_push_node) / 8].next=&dynamic_object1[2].value (00001000 00000000 00000000 00010000)

State 894 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1294 function worker_1 thread 0
----------------------------------------------------
  __cs_local_push_next.aba=5u (00000000 00000000 00000000 00000101)

State 896 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1296 function worker_1 thread 0
----------------------------------------------------
  __cs_local_push_next.node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 898 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1301 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 900 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1304 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_push_orig.aba (00010010 00000000 00000000 00000000)

State 901 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1306 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=5u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000101, 00001000 00000000 00000000 00001000 })

State 903 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1311 function worker_1 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 906 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1315 function worker_1 thread 0
----------------------------------------------------
  results.free={ .aba=5u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000101, 00001000 00000000 00000000 00001000 })

State 907 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1316 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_4=TRUE (00000001)

State 913 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1345 function worker_1 thread 0
----------------------------------------------------
  __cs_retval__lstack_pop_1=11 (00000000 00000000 00000000 00001011)

State 916 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1355 function worker_1 thread 0
----------------------------------------------------
  dynamic_object3[0]=11 (00000000 00000000 00000000 00001011)

State 917 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1359 function worker_1 thread 0
----------------------------------------------------
  __cs_param_lstack_push_value=12 (00000000 00000000 00000000 00001100)

State 919 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1365 function worker_1 thread 0
----------------------------------------------------
  __cs_param_pop_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 921 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1372 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 923 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1374 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_5={ .aba=5u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000101, 00001000 00000000 00000000 00001000 })

State 925 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1383 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop_orig={ .aba=5u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000101, 00001000 00000000 00000000 00001000 })

State 926 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1387 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_2=FALSE (00000000)

State 929 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1397 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop_next.aba=6u (00000000 00000000 00000000 00000110)

State 930 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1398 function worker_1 thread 0
----------------------------------------------------
  __cs_local_pop_next.node=&dynamic_object1[2].value (00001000 00000000 00000000 00010000)

State 932 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1403 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 934 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1406 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_pop_orig.aba (00010100 00000000 00000000 00000000)

State 935 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1408 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=6u, .node=&dynamic_object1[2].value } ({ 00000000 00000000 00000000 00000110, 00001000 00000000 00000000 00010000 })

State 937 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1413 function worker_1 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 940 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1417 function worker_1 thread 0
----------------------------------------------------
  results.free={ .aba=6u, .node=&dynamic_object1[2].value } ({ 00000000 00000000 00000000 00000110, 00001000 00000000 00000000 00010000 })

State 941 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1418 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_5=TRUE (00000001)

State 947 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1442 function worker_1 thread 0
----------------------------------------------------
  __cs_retval__pop_3=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 950 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1452 function worker_1 thread 0
----------------------------------------------------
  __cs_local_lstack_push_node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 952 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1457 function worker_1 thread 0
----------------------------------------------------
  __cs_local_lstack_push___cs_tmp_if_cond_3=FALSE (00000000)

State 955 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1466 function worker_1 thread 0
----------------------------------------------------
  dynamic_object1[POINTER_OFFSET(__cs_local_lstack_push_node) / 8].value=12 (00000000 00000000 00000000 00001100)

State 957 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1470 function worker_1 thread 0
----------------------------------------------------
  __cs_param_push_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 959 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1473 function worker_1 thread 0
----------------------------------------------------
  __cs_param_push_node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 961 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1480 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 963 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1482 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_6={ .aba=5u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000101, 00001000 00000000 00000000 00000000 })

State 965 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1491 function worker_1 thread 0
----------------------------------------------------
  __cs_local_push_orig={ .aba=5u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000101, 00001000 00000000 00000000 00000000 })

State 967 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1493 function worker_1 thread 0
----------------------------------------------------
  dynamic_object1[POINTER_OFFSET(__cs_param_push_node) / 8].next=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 968 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1494 function worker_1 thread 0
----------------------------------------------------
  __cs_local_push_next.aba=6u (00000000 00000000 00000000 00000110)

State 970 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1496 function worker_1 thread 0
----------------------------------------------------
  __cs_local_push_next.node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 972 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1501 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 974 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1504 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_push_orig.aba (00010101 00000000 00000000 00000000)

State 975 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1506 function worker_1 thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=6u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000110, 00001000 00000000 00000000 00001000 })

State 977 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1511 function worker_1 thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 980 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1515 function worker_1 thread 0
----------------------------------------------------
  results.head={ .aba=6u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000110, 00001000 00000000 00000000 00001000 })

State 981 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1516 function worker_1 thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_6=TRUE (00000001)

State 990 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1546 function worker_1 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_add_obj=&results.size (00000010 00000000 00000000 00010100)

State 991 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1546 function worker_1 thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_add_v=1 (00000000 00000000 00000000 00000001)

State 992 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 311 function __CSEQ_atomic_fetch_add thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_fetch_add_old=1 (00000000 00000000 00000000 00000001)

State 993 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 312 function __CSEQ_atomic_fetch_add thread 0
----------------------------------------------------
  results.size=2 (00000000 00000000 00000000 00000010)

State 997 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1547 function worker_1 thread 0
----------------------------------------------------
  __cs_retval__lstack_push_2=0 (00000000 00000000 00000000 00000000)

State 1002 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1564 function worker_1 thread 0
----------------------------------------------------
  __cs_value_ptr=NULL (00000000 00000000 00000000 00000000)

State 1003 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1564 function worker_1 thread 0
----------------------------------------------------
  __cs_thread_index=2u (00000000 00000000 00000000 00000010)

State 1004 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 106 function __cs_exit thread 0
----------------------------------------------------
  __cs_thread_joinargs[2]=NULL (00000000 00000000 00000000 00000000)

State 1009 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2102 function main thread 0
----------------------------------------------------
  __cs_pc[2]=84 (1010100)

State 1010 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2106 function main thread 0
----------------------------------------------------
  __cs_tmp_t0_r1=56 (111000)

State 1012 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2109 function main thread 0
----------------------------------------------------
  __cs_pc_cs[0]=58 (00111010)

State 1022 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1617 function main_thread thread 0
----------------------------------------------------
  __cs_id=1 (00000000 00000000 00000000 00000001)

State 1023 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1617 function main_thread thread 0
----------------------------------------------------
  __cs_value_ptr=((const void **)NULL) (00000000 00000000 00000000 00000000)

State 1025 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 101 function __cs_join thread 0
----------------------------------------------------
  __cs_value_ptr$object=NULL (00000000 00000000 00000000 00000000)

State 1031 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1619 function main_thread thread 0
----------------------------------------------------
  __cs_id=2 (00000000 00000000 00000000 00000010)

State 1032 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1619 function main_thread thread 0
----------------------------------------------------
  __cs_value_ptr=((const void **)NULL) (00000000 00000000 00000000 00000000)

State 1034 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 101 function __cs_join thread 0
----------------------------------------------------
  __cs_value_ptr$object=NULL (00000000 00000000 00000000 00000000)

State 1038 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1628 function main_thread thread 0
----------------------------------------------------
  __cs_param_pop_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 1040 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1635 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 1042 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1637 function main_thread thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_7={ .aba=6u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000110, 00001000 00000000 00000000 00001000 })

State 1044 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1646 function main_thread thread 0
----------------------------------------------------
  __cs_local_pop_orig={ .aba=6u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000110, 00001000 00000000 00000000 00001000 })

State 1045 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1650 function main_thread thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_2=FALSE (00000000)

State 1048 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1660 function main_thread thread 0
----------------------------------------------------
  __cs_local_pop_next.aba=7u (00000000 00000000 00000000 00000111)

State 1049 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1661 function main_thread thread 0
----------------------------------------------------
  __cs_local_pop_next.node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 1051 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1666 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 1053 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1669 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_pop_orig.aba (00000011 00000000 00000000 00000000)

State 1054 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1671 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=7u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000111, 00001000 00000000 00000000 00000000 })

State 1056 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1676 function main_thread thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 1059 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1680 function main_thread thread 0
----------------------------------------------------
  results.head={ .aba=7u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000111, 00001000 00000000 00000000 00000000 })

State 1060 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1681 function main_thread thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_7=TRUE (00000001)

State 1066 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1705 function main_thread thread 0
----------------------------------------------------
  __cs_retval__pop_4=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 1069 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1715 function main_thread thread 0
----------------------------------------------------
  __cs_local_lstack_pop_node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 1071 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1720 function main_thread thread 0
----------------------------------------------------
  __cs_local_lstack_pop___cs_tmp_if_cond_4=FALSE (00000000)

State 1076 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1729 function main_thread thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_sub_obj=&results.size (00000010 00000000 00000000 00010100)

State 1077 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1729 function main_thread thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_sub_v=1 (00000000 00000000 00000000 00000001)

State 1078 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 319 function __CSEQ_atomic_fetch_sub thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_fetch_sub_old=2 (00000000 00000000 00000000 00000010)

State 1079 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 320 function __CSEQ_atomic_fetch_sub thread 0
----------------------------------------------------
  results.size=1 (00000000 00000000 00000000 00000001)

State 1084 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1732 function main_thread thread 0
----------------------------------------------------
  __cs_local_lstack_pop_value=12 (00000000 00000000 00000000 00001100)

State 1086 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1736 function main_thread thread 0
----------------------------------------------------
  __cs_param_push_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 1088 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1739 function main_thread thread 0
----------------------------------------------------
  __cs_param_push_node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 1090 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1746 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 1092 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1748 function main_thread thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_8={ .aba=6u, .node=&dynamic_object1[2].value } ({ 00000000 00000000 00000000 00000110, 00001000 00000000 00000000 00010000 })

State 1094 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1757 function main_thread thread 0
----------------------------------------------------
  __cs_local_push_orig={ .aba=6u, .node=&dynamic_object1[2].value } ({ 00000000 00000000 00000000 00000110, 00001000 00000000 00000000 00010000 })

State 1096 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1759 function main_thread thread 0
----------------------------------------------------
  dynamic_object1[POINTER_OFFSET(__cs_param_push_node) / 8].next=&dynamic_object1[2].value (00001000 00000000 00000000 00010000)

State 1097 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1760 function main_thread thread 0
----------------------------------------------------
  __cs_local_push_next.aba=7u (00000000 00000000 00000000 00000111)

State 1099 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1762 function main_thread thread 0
----------------------------------------------------
  __cs_local_push_next.node=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 1101 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1767 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 1103 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1770 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_push_orig.aba (00000100 00000000 00000000 00000000)

State 1104 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1772 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=7u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000111, 00001000 00000000 00000000 00001000 })

State 1106 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1777 function main_thread thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 1109 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1781 function main_thread thread 0
----------------------------------------------------
  results.free={ .aba=7u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000111, 00001000 00000000 00000000 00001000 })

State 1110 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1782 function main_thread thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_8=TRUE (00000001)

State 1116 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1811 function main_thread thread 0
----------------------------------------------------
  __cs_retval__lstack_pop_2=12 (00000000 00000000 00000000 00001100)

State 1118 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1820 function main_thread thread 0
----------------------------------------------------
  __cs_local_main__agg_e1=12 (00000000 00000000 00000000 00001100)

State 1120 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1829 function main_thread thread 0
----------------------------------------------------
  __cs_param_pop_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 1122 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1836 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 1124 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1838 function main_thread thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_9={ .aba=7u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000111, 00001000 00000000 00000000 00000000 })

State 1126 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1847 function main_thread thread 0
----------------------------------------------------
  __cs_local_pop_orig={ .aba=7u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00000111, 00001000 00000000 00000000 00000000 })

State 1127 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1851 function main_thread thread 0
----------------------------------------------------
  __cs_local_pop___cs_tmp_if_cond_2=FALSE (00000000)

State 1130 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1861 function main_thread thread 0
----------------------------------------------------
  __cs_local_pop_next.aba=8u (00000000 00000000 00000000 00001000)

State 1131 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1862 function main_thread thread 0
----------------------------------------------------
  __cs_local_pop_next.node=((struct lstack_node *)NULL) (00000000 00000000 00000000 00000000)

State 1133 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1867 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.head.aba (00000010 00000000 00000000 00000100)

State 1135 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1870 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_pop_orig.aba (00000101 00000000 00000000 00000000)

State 1136 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1872 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=8u, .node=((struct lstack_node *)NULL) } ({ 00000000 00000000 00000000 00001000, 00000000 00000000 00000000 00000000 })

State 1138 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1877 function main_thread thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 1141 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1881 function main_thread thread 0
----------------------------------------------------
  results.head={ .aba=8u, .node=((struct lstack_node *)NULL) } ({ 00000000 00000000 00000000 00001000, 00000000 00000000 00000000 00000000 })

State 1142 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1882 function main_thread thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_9=TRUE (00000001)

State 1148 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1906 function main_thread thread 0
----------------------------------------------------
  __cs_retval__pop_5=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 1151 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1916 function main_thread thread 0
----------------------------------------------------
  __cs_local_lstack_pop_node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 1153 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1921 function main_thread thread 0
----------------------------------------------------
  __cs_local_lstack_pop___cs_tmp_if_cond_4=FALSE (00000000)

State 1158 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1930 function main_thread thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_sub_obj=&results.size (00000010 00000000 00000000 00010100)

State 1159 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1930 function main_thread thread 0
----------------------------------------------------
  __cs_param___CSEQ_atomic_fetch_sub_v=1 (00000000 00000000 00000000 00000001)

State 1160 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 319 function __CSEQ_atomic_fetch_sub thread 0
----------------------------------------------------
  __cs_local___CSEQ_atomic_fetch_sub_old=1 (00000000 00000000 00000000 00000001)

State 1161 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 320 function __CSEQ_atomic_fetch_sub thread 0
----------------------------------------------------
  results.size=0 (00000000 00000000 00000000 00000000)

State 1166 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1933 function main_thread thread 0
----------------------------------------------------
  __cs_local_lstack_pop_value=2 (00000000 00000000 00000000 00000010)

State 1168 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1937 function main_thread thread 0
----------------------------------------------------
  __cs_param_push_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 1170 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1940 function main_thread thread 0
----------------------------------------------------
  __cs_param_push_node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 1172 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1947 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_load_Struct_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 1174 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1949 function main_thread thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_load_Struct_10={ .aba=7u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000111, 00001000 00000000 00000000 00001000 })

State 1176 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1958 function main_thread thread 0
----------------------------------------------------
  __cs_local_push_orig={ .aba=7u, .node=&dynamic_object1[1].value } ({ 00000000 00000000 00000000 00000111, 00001000 00000000 00000000 00001000 })

State 1178 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1960 function main_thread thread 0
----------------------------------------------------
  dynamic_object1[POINTER_OFFSET(__cs_param_push_node) / 8].next=&dynamic_object1[1].value (00001000 00000000 00000000 00001000)

State 1179 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1961 function main_thread thread 0
----------------------------------------------------
  __cs_local_push_next.aba=8u (00000000 00000000 00000000 00001000)

State 1181 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1963 function main_thread thread 0
----------------------------------------------------
  __cs_local_push_next.node=&dynamic_object1[0].value (00001000 00000000 00000000 00000000)

State 1183 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1968 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_head=&results.free.aba (00000010 00000000 00000000 00001100)

State 1185 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1971 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_orig=&__cs_local_push_orig.aba (00000110 00000000 00000000 00000000)

State 1186 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1973 function main_thread thread 0
----------------------------------------------------
  __cs_param___VERIFIER_compare_and_exchange_next={ .aba=8u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00001000, 00001000 00000000 00000000 00000000 })

State 1188 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1978 function main_thread thread 0
----------------------------------------------------
  __cs_local___VERIFIER_compare_and_exchange___cs_tmp_if_cond_0=TRUE (00000001)

State 1191 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1982 function main_thread thread 0
----------------------------------------------------
  results.free={ .aba=8u, .node=&dynamic_object1[0].value } ({ 00000000 00000000 00000000 00001000, 00001000 00000000 00000000 00000000 })

State 1192 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 1983 function main_thread thread 0
----------------------------------------------------
  __cs_retval____VERIFIER_compare_and_exchange_10=TRUE (00000001)

State 1198 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2012 function main_thread thread 0
----------------------------------------------------
  __cs_retval__lstack_pop_3=2 (00000000 00000000 00000000 00000010)

State 1200 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2021 function main_thread thread 0
----------------------------------------------------
  __cs_local_main__agg_e2=2 (00000000 00000000 00000000 00000010)

State 1201 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2023 function main_thread thread 0
----------------------------------------------------
  __cs_local_main_i1=0 (00000000 00000000 00000000 00000000)

State 1202 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2025 function main_thread thread 0
----------------------------------------------------
  __cs_local_main_i2=0 (00000000 00000000 00000000 00000000)

State 1203 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2029 function main_thread thread 0
----------------------------------------------------
  __cs_local_main___cs_tmp_if_cond_5=FALSE (00000000)

State 1205 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2039 function main_thread thread 0
----------------------------------------------------
  __cs_local_main___cs_tmp_if_cond_6=TRUE (00000001)

State 1207 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2042 function main_thread thread 0
----------------------------------------------------
  __cs_local_main__agg_t2[0]=12 (00000000 00000000 00000000 00001100)

State 1208 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2043 function main_thread thread 0
----------------------------------------------------
  __cs_local_main_i2=1 (00000000 00000000 00000000 00000001)

State 1209 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2049 function main_thread thread 0
----------------------------------------------------
  __cs_local_main___cs_tmp_if_cond_7=TRUE (00000001)

State 1211 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2052 function main_thread thread 0
----------------------------------------------------
  __cs_local_main__agg_t1[0]=2 (00000000 00000000 00000000 00000010)

State 1212 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2053 function main_thread thread 0
----------------------------------------------------
  __cs_local_main_i1=1 (00000000 00000000 00000000 00000001)

State 1213 file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2059 function main_thread thread 0
----------------------------------------------------
  __cs_local_main___cs_tmp_if_cond_8=FALSE (00000000)

Violated property:
  file /mnt/c/Users/Alfonso/Desktop/CSeq/PROGETTO-TACS/workspace/benchmark/Test_Case_Push2_Pop1_Thread2/Test_Case_101/File_Analizzati/_cs_Test_101.c line 2066 function main_thread
  assertion 0
  0 != 0


VERIFICATION FAILED
