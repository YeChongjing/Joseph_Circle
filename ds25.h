#include<iostream> 
#include<stdlib.h>
using namespace std;
#define NULL 0
#define OK 1
 
typedef int ElemType;
typedef struct CR_Node{
	ElemType data;
	struct CR_Node *next;
	ElemType length;
}CR_Node;
