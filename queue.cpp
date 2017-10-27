#ifndef QUEUE_CPP_
#define QUEUE_CPP_


/* **************  GETTER FUNCTIONS *************************/

template <typename dtype>
Node<dtype>* queue<dtype>::get_head() const{

return head;


} // end of get_head function. 

template <typename dtype>
Node<dtype>* queue<dtype>::get_tail() const{
    
return tail;

} // end of get_tail function.


template <typename dtype>
size_t queue<dtype>::size() const{
    

return num_items;
} 


//checks if empty queue
template <typename dtype>
bool queue<dtype>::empty() const {

if (num_items==0){ return true;}
else {return false;}


}





/************   SETTER FUNCTIONS ***********************/


template <typename dtype>
void queue<dtype>::set_head(Node<dtype>* val){

head=val;
    

}


template <typename dtype>
void queue<dtype>::set_tail(Node<dtype>* val){

tail=val;


}

template <typename dtype>
void queue<dtype>::set_size(size_t n_items){


this.num_items=n_items;


}




/************   CORE QUEUE OPERATIONS   **********************/


template <typename dtype>
void queue<dtype>::push(const dtype& val){


if(num_items==0){
Node<dtype>* heads = new Node<dtype>(val);
this->head=heads;
this->tail=heads;
num_items+=1;

}

else{
Node<dtype>* heads = new Node<dtype>(val);
this->tail->next=heads;
this->tail=heads;
num_items+=1;
}


} // end of push function



//pop method
 template <typename dtype>
 void queue<dtype>::pop(){

if (this->empty()==true){std::cout<< "queue is empty" <<std::endl;}

else {

Node<dtype>* pointer; 
pointer= head;
head=pointer->next;
delete pointer;
num_items-=1;


}

 } /* end of pop method   */


template <typename dtype>
const dtype& queue<dtype>::front() const{

if(num_items==0){

std::cout<< "queue is empty" <<std::endl;
return this->head;
}

else{

return this->head->data;

}

}

template <typename dtype>
dtype& queue<dtype>::front(){

if(num_items==0){

std::cout<< "queue is empty" <<std::endl;
return this->head->data;
}

else{

return this->head->data;

}

}




/************ FOR PORTABILITY **********************************/

//swap values
template <typename dtype>
void queue<dtype>::swap(queue<dtype>& other){

Node<dtype>*pointer1;
Node<dtype>*pointer2;
pointer1=head;
pointer2=tail;
other.head=pointer1;
other.tail=pointer2;
int number=num_items;
std::cout<<number<<std::endl;
num_items=other.num_items;
other.num_items=number;



} /* end of swap method */



/******* UNFAIR QUEUE OPERATIONS **********************************/



//insert into middle of queue
template <typename dtype>
void queue<dtype>::insert_in_the_middle(const dtype& val, const size_t position){
    
    //write your code here ...
Node<dtype>* iter = head;

for(int i=0; i<=position; i++ ){
	
if(i==position-1){
Node<dtype>* iter2 = iter->next;
Node<dtype>* iter3 = new Node<dtype>(val);
iter->next=iter3;
iter3->next=iter2;
i+=1;
num_items+=1;
}


if(i<position){
                    iter = iter->next;
}
}



}


//delete from middle of queue
template <typename dtype>
void queue<dtype>::delete_from_the_middle(size_t position){

if (position<=num_items){

Node<dtype>* iter = head;

if(position==0){
pop();
}
else{
        for(int i=0; i<=position; i++ ){
	
if(i==position-1){

Node<dtype>* iter3 = iter->next;
iter->next=iter->next->next;
delete iter3;
i+=1;
num_items-=1;
}


if(i<position){
                    iter = iter->next;
}
}

}


}

}
//deletes all queue values
template <typename dtype>
void queue<dtype>::delete_all(){

while(num_items>0){

pop();

}
head=NULL;
tail=NULL;

} /* end of delete_all  */






/******************** PRINT *************************************/

/**
 * This method prints the queue.
 * if the queue is empty, it prints error message
 */
template <typename dtype>
void queue<dtype>::print(){
    if (num_items == 0 ){
        std::cout << "Queue is empty"<< std::endl;
    }
    else{
        Node<dtype>* iter = this->head;
        //std::cout<<"here "<< head->data <<std::endl;
        while( iter != NULL ){
            std::cout << iter->data << " ";
            iter = iter->next;
        }
        std::cout << std::endl;
    }
} /*  end of print method    */


#endif
