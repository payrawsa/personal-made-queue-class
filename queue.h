
#ifndef QUEUE_H_
#define QUEUE_H_

#include <string>

namespace ubcse{

    #include "node.h"

    template <typename dtype>
    class queue {
    
    private:
        Node<dtype>* head;
        Node<dtype>* tail;
        size_t num_items;

    public:
//default constructor
    queue<dtype>(){
dtype a;
head= new Node<dtype>(a);
tail= new Node<dtype>(a);
num_items=0;
    };

    

//copy constructor
    queue<dtype>(queue<dtype>& other){
num_items=0;
 Node<dtype>* iter = other.head;
        while( iter != NULL ){
	push(iter->data);
            iter = iter->next;
        }



    };



     /******* getter function declarations  *******************/

    /* returns the head pointer   */
    Node<dtype>* get_head() const;

    /* returns the tail pointer.  */
    Node<dtype>* get_tail() const;

    /* returns the size of the queue.   */
    size_t size() const;

    /* checks whether queue is empty or not.   */
    bool empty() const;




    /******** setter/ modifier function declarations  *************/

    /*  assign the given pointer val to head pointer   */
    void set_head(Node<dtype>* val);

    /*  assign the given pointer val to tail pointer   */
    void set_tail(Node<dtype>* val);

    /* update the current number of items in the queue   */
    void set_size(size_t n_items);




    /********************* Core queue operations  **********/
    
    /* pushes an item onto the tail.   */
    void push(const dtype& val);

    /* removes the front item from the queue   */
    void pop();

    /*   return the front element, however, it is not going
     to delete the front element.       */
    dtype& front();
    const dtype& front() const;




    /******** For portability **********************/

    /* performs swap between two queues  */
    void swap(queue<dtype>& other);



    /********* operations for unfair queue **************/


    /* deletes the whole queue without memory leak  */
    void delete_all();

    /* delete data from the middle   */
    void delete_from_the_middle(size_t position);

    /* insert data in the middle   */
    void insert_in_the_middle(const dtype& val, const size_t position);


    /******* printing *******************************/


    /*  prints the whole queue   */
    void print();

    }; // end of Stack class


    #include "queue.cpp"

} // end of namespace ubcse

#endif 
