/*
 * DLinkedList.cpp
 *
 *  Created on: Mar 26, 2018
 *      Author: kareembrathwaite-henry
 */

#include"Node.cpp"
#include <iostream>
#include <ostream>
template <class TYPE>
class DLinkedList {

	private:
		DLinkedList(const DLinkedList &);
		Node<TYPE> *head;

	public:



	DLinkedList(){
		head = new Node<TYPE>(0, head, head);
	}

	Node<TYPE>* insert(const TYPE& type, Node<TYPE>* current ){//inserts a node
		 Node<TYPE>* newNode = new Node<TYPE>(type);
		    Node<TYPE>* temp;
		    if (isFirst() == NULL)
		        head = newNode;
		    else {
		        while(current->next != NULL){
		            current = current->next;
		        }
		        current->next = newNode;
		        newNode->previous = current;
		    }
		    return newNode;
	}

	Node<TYPE>* isFirst(){//returns a reference to header node
		return head;
	}

	Node<TYPE>* next(Node<TYPE>* current )const{//returns a reference to next node

		return current->next;
	}

	Node<TYPE>* precedent(Node<TYPE>* current )const{//reference to previous node

		return current->previous;
	}

	Node<TYPE>* remove(Node<TYPE>* N){//removes the node to the right of N

	}

	bool isEmpty ( ) const{//returns true if the list is empty

	}


	void display (std::ostream& output ){//writes to a file the elements of the linked list
		output << "\nDisplaying: ";
		Node<TYPE>* temp = head;
		while (temp!=0){
			output << temp->value << " ";
			temp=temp->next;
		}
	}

	Node<TYPE>* Min(Node<TYPE>* H){//finds the min value in a list headed by H

	}

	void sort(){//sorts the list (selection sort)

	}
};

