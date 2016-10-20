#include"ds25.h"
#include<cmath>
#include<iostream>
#include<cmath>
using namespace std;


//初始化单链表
CR_Node *InitLink(){
	CR_Node *Head = (CR_Node *)malloc(sizeof(CR_Node));
	Head->data = NULL;
	Head->length = NULL;
	Head->next = Head;
	return Head;
} 
//创建单链表
void *Creat_L(CR_Node *L){
	int i,j=0;
	CR_Node *q = L;
	CR_Node *s;
	int e;
	cout<<"请输入要创建多少个节点";
	cin>>i; 
	do{
		CR_Node *p = (CR_Node *)malloc(sizeof(CR_Node));
		cout<<"输入值：";
		cin>>e;
		p->data=e;
		p->length=j+1;
		q->next=p;
		q=p;
		j++;
	}while(j<i);
	q->next=L;
	L->length = q->length;
}

//插入数据
int Insert_L(CR_Node *L,ElemType e,int i ){
	CR_Node *p = L;
	CR_Node *N = (CR_Node *)malloc(sizeof(CR_Node));
	N->data = e; 
	int j = 0;
	while(j<i-1){
		p=p->next;
		j++;
	}
	if(j!= i-1){
		return NULL;
	} 
	N->next=p->next;
	p->next=N;
	L->length++;
	return OK;
} 

//删除指定数据 
int Delete_L(CR_Node *L,int i){
	CR_Node *p;
	CR_Node *q = L->next;
	int j;
	ElemType e;
	for(j=0;j<i-1;j++){
		p=q;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	L->length--;
	return OK;
} 

//按值查找
int Locat_L(CR_Node *L,ElemType e){
	CR_Node *p = L;
	int i,n = p->length;
	for(i=0;i<n;i++){
		p = p->next;
		if(p->data == e) return (i+1);
	}
	return -1;
} 
//遍历循环链表
void Out_L(CR_Node *L){
	CR_Node *p = L->next;
	cout<<"循环链表的元素为：\n";
	while(p!=L){
		cout<<p->data<<"  ";
		p = p->next;
	}
}
//约瑟夫环
void Joeseph_Link(CR_Node *L,int m,int key[]){
	CR_Node *p = L;
	int i,j = 0,n=L->length ;
	int keys = m%n;
	for(;p->next!=L;p=p->next);
	p->next = p->next->next;
	while(j<n){
		if(p->next == p) cout<<p->data<<"  "; 
		for(i=1;i<keys;i++,p = p->next);
		keys = key[(p->next->length-1)]%(L->length-1);
		cout<<p->next->data<<"  ";
		p->next = p->next->next;
		L->length--;
	}
	cout<<endl;
}
