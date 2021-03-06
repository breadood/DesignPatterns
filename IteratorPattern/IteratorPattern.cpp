// IteratorPattern.cpp : Defines the entry point for the console application.
//
// Iterator is core functionality of various data structure
#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;


// binary tree iterator example:
template <typename T> struct Node
{
	T value = T();
	Node<T> *left{ nullptr }, *right{ nullptr }, *parent{ nullptr };
	BinaryTree* tree{ nullptr };

	Node(T value) : value(value) {}

	Node(T value, Node<T> *left, Node<T> *right) :
		value(value), left(left), right(right)
	{
		this->left->tree = this->right->tree = tree;
		this->left->parent = this->right->parent = this;
	}

	void set_tree(BinaryTree<T>* t)
	{
		tree = t;
		if (left)
			left->set_tree(t);
		if (right)
			right->set_tree(t);
	}

	~Node()
	{
		if (left)
			delete left;
		if (right)
			delete right;
	}
};

template <typename T> struct BinaryTree
{
	Node<T>* root{ nullptr };

	BinaryTree(Node<T>* root) :
		root(root)
	{
		root->set_tree(this);
	}

	~BinaryTree
	{
		if (root)
			delete root;
	}

	template <typename U>
	struct Iterator
	{
		Node<U>* current;

		Iterator(Node<U> *current) :
			current(current) 
		{
			left = right = true;
		}

		bool operator!=(const Iterator<U>& other)
		{
			return current != other.current;
		}

		Iterator<U>& operator++()
		{
			// some implementation
			return *this;
		}

		Node<U> operator*()
		{
			return *current;
		}
	};

	Iterator begin()
	{
		// some implementation
		return Iterator(root);
	}

	Iterator end()
	{
		// some implementation
		return Iterator(nullptr);
	}
};

int main()
{
	// interator on STD
	vector<string> names{ "John", "Jill", "Jack" };
	vector<string>::iterator it = names.begin();

	cout << "First is: " << *it << endl;
	++it;

	it->append(" Hey");
	cout << "Second is: " << *it << endl;

	while (++it != names.end())
	{
		cout << "This is: " << *it << endl;
	}
	//               1 2 3 
	// begin:		 ^
	//               1 2 3 
	// end:				   ^
	//               1 2 3 
	// rbegin:			 ^
	//               1 2 3 
	// rend:	   ^

	system("pause");
    return 0;
}

