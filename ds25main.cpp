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
		cout<<"(1)��ʼ��������"<<endl;
		cout<<"(2)��������ѭ������"<<endl;
		cout<<"(3)����Ԫ��"<<endl;
		cout<<"(4)ɾ��Ԫ��"<<endl;
		cout<<"(5)��ֵ����"<<endl;
		cout<<"(6)��������ѭ������"<<endl;
		cout<<"(7)Լɪ�򻷣����"<<endl;
		cout<<"(0)�˳�"<<endl;
		cout<<"-------------------------"<<endl;
		cout<<"ѡ��";
		cin>>k;
		switch(k){
			case 1:system("cls");
					L = InitLink(); 
					cout<<"��ʼ���ɹ���"<<endl;
					break;
			case 2: system("cls");
					Creat_L(L);
					cout<<"�����ɹ���"<<endl; 
					break;
			case 3: system("cls");
					cout<<"���������ֵ��";
					cin>>e;
					cout<<"���������λ�ã�";
					cin>>i; 
					if(Insert_L(L,e,i)){
						cout<<"����ɹ���";
						Out_L(L);
						cout<<endl; 
					}else{
						cout<<"����ʧ�ܣ�"<<endl;
					}
					break;
			case 4: system("cls");
					cout<<"������ɾ��λ�ã�";
					cin>>i;
					if(i>0&&Delete_L(L,i)){
						Out_L(L);
					}else{
						cout<<"ɾ��ʧ��!"<<endl;
					}
					break;
			case 5: system("cls");
					cout<<"�������ѯֵ��";
					cin>>e;
					i = Locat_L(L,e);
					if(i!=-1){
						cout<<"��Ԫ��λ�ڵ�"<<i<<"λ��"<<endl;
					}else{
						cout<<"δ�ҵ���"<<endl;
					}
					break;
			case 6: system("cls");
					Out_L(L);
					cout<<endl;
					break;
			case 7: system("cls");
					cout<<"�������ʼ����m:";
					cin>>i;
					Joeseph_Link(L,m,key);
					break;
			case 0: system("cls");return 0;
			
		} 
	}
	
	return 0;
}

