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
int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
void intopostfix(string s) 
{ 
    stdstack<char> st; 
    st.push('N'); 
    int l = s.length(); 
    string ns; 
    for(int i = 0; i < l; i++) 
    { 
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')) 
        ns+=s[i]; 
  
        else if(s[i] == '(') 
          
        st.push('('); 
          
       
        else if(s[i] == ')') 
        { 
            while(st.top() != 'N' && st.top() != '(') 
            { 
                char c = st.top(); 
                st.pop(); 
               ns += c; 
            } 
            if(st.top() == '(') 
            { 
                char c = st.top(); 
                st.pop(); 
            } 
        } 
          
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    } 
      
    cout << ns << endl; 
  
} 
int main() 
{ 
	string expression;
	cout <<"enter infix  expression to convert it into postfix form.."<<endl;
	cin>>expression;
	cout<<"postfix expression will look like this=  "; 
    intopostfix(expression); 
    return 0; 
} 

echo "# hect" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/MSSW2481/hect.git
git push -u origin main
                
