#include<iostream>
#include<stdlib.h>
#include "ds25.cpp"
using namespace std;

int main(){
	CR_Node *L;
	int i,k,m=20;
	ElemType e;
	int key[7] = {3,1,7,2,4,8,4};
	while(1){
		cout<<"-------------------------"<<endl;
		cout<<"(1)初始化单链表"<<endl;
		cout<<"(2)创建单向循环链表"<<endl;
		cout<<"(3)插入元素"<<endl;
		cout<<"(4)删除元素"<<endl;
		cout<<"(5)按值查找"<<endl;
		cout<<"(6)遍历单向循环链表"<<endl;
		cout<<"(7)约瑟夫环，输出"<<endl;
		cout<<"(0)退出"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"选择：";
		cin>>k;
		switch(k){
			case 1:system("cls");
					L = InitLink(); 
					cout<<"初始化成功！"<<endl;
					break;
			case 2: system("cls");
					Creat_L(L);
					cout<<"创建成功！"<<endl; 
					break;
			case 3: system("cls");
					cout<<"请输入插入值：";
					cin>>e;
					cout<<"请输入插入位置：";
					cin>>i; 
					if(Insert_L(L,e,i)){
						cout<<"插入成功！";
						Out_L(L);
						cout<<endl; 
					}else{
						cout<<"插入失败！"<<endl;
					}
					break;
			case 4: system("cls");
					cout<<"请输入删除位置：";
					cin>>i;
					if(i>0&&Delete_L(L,i)){
						Out_L(L);
					}else{
						cout<<"删除失败!"<<endl;
					}
					break;
			case 5: system("cls");
					cout<<"请输入查询值：";
					cin>>e;
					i = Locat_L(L,e);
					if(i!=-1){
						cout<<"该元素位于第"<<i<<"位！"<<endl;
					}else{
						cout<<"未找到！"<<endl;
					}
					break;
			case 6: system("cls");
					Out_L(L);
					cout<<endl;
					break;
			case 7: system("cls");
					cout<<"请输入初始密码m:";
					cin>>i;
					Joeseph_Link(L,m,key);
					break;
			case 0: system("cls");return 0;
			
		} 
	}
	
	return 0;
}

