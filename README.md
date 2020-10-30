# sallu
#include<iostream>
using namespace std;
class node
{
	int value;
	node*nextnode;
	int size;
	public:
		void setvalue(int m)
		{
		value=m;	
		}
		void setnextnode(node *nn)
		{
			nextnode=nn;
		}
		int getvalue()
		{
			return value;
		}
			node *getnextnode()
		{
			return nextnode;
		}
};
class stack
{
	node *top;
	int size;
	public:
		void push(int m)
		{
		if(size==0)
		{
			node *newnode=new node;
			newnode->setvalue(m);
			top->setnextnode(0);
			top=newnode;
		}
		else
		{
		
					node *newnode=new node;
					newnode->setvalue(m);
					newnode->setnextnode(top);
					top=newnode;
						
		}
				
			}
		
		int pop()
		{
		
		int	x=top->getvalue();
			node *p=top;
			top=top->getnextnode();
			delete p;
			return x;
		}
		
};
