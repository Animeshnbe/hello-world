#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
//a tree for storing integers

class bnode {
private :
	friend class int_tree;
	bnode* left;
	bnode* right;
	int data;
	int count;
	
	bnode (int d, bnode* l, bnode* r):
	data(d), left(l), right(r), count(1) {}
	void print() const{
		std::cout<<data<<" : "<<count<<" \t ";}
};

class int_tree {
public :
	int_tree (){root = 0;}
	void insert (int d);
	int find (int d) const {
		return (find (root,d));}
	void print () const {
		print (root);}

private :
	bnode* root;
	int find (bnode* r, int d) const;
	void print (bnode* r) const;
};

void int_tree::insert (int d)
{
	bnode* temp = root;
	bnode* old;
	if (root == 0){
		root = new bnode (d,0,0);
		return ;
	}
	while (temp != 0){
		old = temp;
		if (temp -> data == d){
			(temp -> count)++;
			return;
		}
	if (temp -> data > d)
		temp = temp -> left;
	else	
		temp = temp -> right;
	}
	if (old -> data > d)
		old -> left = new bnode (d,0,0);
	else
		old -> right = new bnode (d,0,0);
}

int int_tree::find (bnode* r, int d) const
{
	if (r == 0)
		return 0;
	else if (r -> data == d)
		return (r -> data);
	else if (r -> data > d)
		return (find (r->left, d));
	else	
		return (find (r->right, d));
}

void int_tree::print (bnode* r) const
{
	if (r != 0){
		print(r->left);
		r->bnode::print();
		print(r->right);
	}
}

int main ( )
{
	int_tree t;
	int p;
	while (std::cin>>p){
		if (p==0)
			break ;
		t.insert(p);
	}
	t.print();
	std::cout<<"\n Enter another zero to continue\n";
	std::cin>>p;
	int_tree itree;
	for (int i=150; i>0 ; --i)
		itree.insert(int(rand()));
	itree.print();
	std::cout<<"\nEnter another zero to terminate\n";
	std::cin>>p;
	return 0;
}
