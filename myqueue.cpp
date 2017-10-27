#include <iostream>
#include "queue.h"

int main() {
     
    std::cout << "create a queue with default constructor:"<<std::endl;
    ubcse::queue<int> q1;
    std::cout << "q1 is created with default constructor"<< std::endl;
 
    if (q1.empty() ) {
        std::cout << "Queue is empty\n";
    } else{
        std::cout << "Queue is not empty\n";
    }
 
    // pushes some values into the queue:
    std::cout << "Pushing three values: 10, 20, 30"<< std::endl;
    q1.push(10);
    q1.push(20);
    q1.push(30);
 
    std::cout << "Printing q1:\n";
    q1.print();
    std::cout << "Size of q1: " << q1.size() << std::endl;
 
    std::cout << "poping an item from q1 ..."<< std::endl;
    q1.pop();
    std::cout << "printing q1 after pop operation:"<< std::endl;
    q1.print();
 
    std::cout << "poping rest of the items ..."<< std::endl;
    q1.pop();
    q1.pop();
 
    std::cout << "Now printing q1 again ..."<< std::endl;
    q1.print();
 
 
    std::cout << "Creating a new queue q2 with default constructor"<< std::endl;
    ubcse::queue<int> q2;
    q2.push(100);
    q2.push(200);
    q2.push(300);
 
    std::cout << "printing q2:"<< std::endl;
    q2.print();
 
    std::cout << "Perform swap operation."<< std::endl;
    q2.swap(q1);
    std::cout<< "After swap between q2 and q1:"<<std::endl;
    std::cout << "q1 : ";
    q1.print();
    std::cout << "q2 : ";
    q2.print();
 
    std::cout << "Creating another queue with copy constructor:"<< std::endl;
    std::cout << "copying q1 to q3"<< std::endl;
    ubcse::queue<int> q3(q1);
    std::cout << "printing q3:"<< std::endl;
    q3.print();
    std::cout << "size of q3:";
    std::cout << q3.size() << std::endl;
 
    std::cout << "Printing q1:"<< std::endl;
    q1.print();
    std::cout << "size of q1:";
    std::cout << q1.size() << std::endl;
 
    std::cout << "Deleting everything from q3:"<< std::endl;
    q3.delete_all();
 
    std::cout << "Printing q3:"<< std::endl;
    q3.print();
 
    std::cout << "Printing q1:"<< std::endl;
    q1.print();
 
    std::cout << "Pushing values into q1: 400, 500, 600, 700, 800."<< std::endl;
    q1.push(400);
    q1.push(500);
    q1.push(600);
    q1.push(700);
    q1.push(800);
    std::cout << "printing q1:"<< std::endl;
    q1.print();
 
    std::cout << "Printing q3:"<< std::endl;
    q3.print();
 
    std::cout << "Now removing the 3rd item:"<< std::endl;
 
    q1.delete_from_the_middle(2);
 
    std::cout << "Printing q1 after removing 3rd item :"<< std::endl;
    q1.print();
 
 
    std::cout << "inserting 10000 in the 4th position of q1:"<< std::endl;
    q1.insert_in_the_middle(10000, 3);
 
    std::cout << "Printing q1:"<< std::endl;
    q1.print();

} //end of main
