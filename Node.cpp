/*
 * Node.cpp
 *
 *  Created on: Mar 26, 2018
 *      Author: kareembrathwaite-henry
 */

template <class TYPE> class DLinkedList;
template <class TYPE>
class Node{
      friend class DLinkedList<TYPE>;
      TYPE value;
      Node<TYPE> * next;
      Node<TYPE> * previous;
      Node (const  TYPE& t,  Node * n =0, Node * p = 0){
           value = t;
           next = n;
           previous = p;
      }

};




