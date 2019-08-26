/*
 * stack_heap.cc
 *
 *  Created on: Jul 31, 2019
 *      Author: user1



code / Text segment -> machine Instruction or compiled program sits
bss Segment -> Uninitialized data segment and zero Initialized global and static variable resids
data segment -> also called the initialized data segment), where initialized global and static variables are stored.
heap -> free space and all dynaiucally allocated varaibles get memory from here
stack -> function parameters, local variables and functiona call related information used toi get strore


*/

int *ptr=new int;// ptr used to get 4 bytes of memory
int *arr = new int[10];// 40 bytes
