#pragma once
#include <iostream>

using namespace std;



struct Node
{
	Node* Parent;
	Node* Left;
	Node* Right;

	int Data;
};

class BinaryTree
{
public:
	void AddData(int data);
	void RemonveData(int data);
	Node* GetNode(int data);

private:
	Node* _root = nullptr;
};

void BinaryTree::AddData(int data)
{

}
void BinaryTree::RemonveData(int data)
{

}
Node* BinaryTree::GetNode(int data)
{

}

	