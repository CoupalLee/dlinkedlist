/*
 * DLinkedList.cpp
 *
 *  Created on: Mar 26, 2018
 *      Author: kareembrathwaite-henry
 */

#include"Node.cpp"
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
		Node<TYPE>* temp;
		temp= new Node<TYPE>(type, current -> next, current);
		return temp;
		current-> next-> previous;
		current -> next = temp;
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

	void display (ostream & ){//writes to a file the elements of the linked list

	}

	Node<TYPE>* Min(Node<TYPE>* H){//finds the min value in a list headed by H

	}

	void sort(){//sorts the list (selection sort)

	}
};

