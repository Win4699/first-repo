#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	int data;
	node* next;
	node(int x){
		data = x;
		next=0;
	}
};

node *sort_insert(node *t,int v){
	if(t==0){
		node *p=new node(v);
		return p;
	}
	else{ node *r=t;
		while(r!=0){
			 if(r->next==0){
			node *w=new node(v);
			r->next=w;
			return t;
		}
			
		else{ if(v<=r->data && v<r->next->data){
			       node *f1=new node(v);
			       f1->next=r;
			       return f1;
		          }
		      else if(v>=r->data && v<=r->next->data){
		      	node *g=new node(v);
		      	g->next=r->next;
		      	r->next=g;
		      	
		      	return t;
			  }    
			  else{
			  	r=r->next;
			  }
			
		}
		
		}
	}
}
 void display(node *m){
 	node *i=m;
 	while(i!=0){
 		cout<<i->data<<" ";
 		i=i->next;
	 }
	 cout<<"\n";
 }
 
int main(){ 
node *f=new node(10);
node *s=new node(20);
node *t=new node(30);
f->next=s;
s->next=t;
  cout<<"Enter the number of queries: "<<"\n";
  int y;
  cin>>y;
  while(y--){
  	cout<<"enter the value: "<<"\n";
  	int u;cin>>u;
  	f=sort_insert(f,u);
  	display(f);
  }
  


	return 0;
}
