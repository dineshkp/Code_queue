#include<bits/stdc++.h>
using namespace std;

class Queue {
    public:
    int front,rear,size;
    int capacity;
    int* arr;

};


// Queue* createQueue(int capacity){
//   Queue queue=new Queue() ;
//   queue->front=0;
//   queue->rear=-1;
//   queue->arr[capacity];
//   queue->size=0;
//   return queue;
    
// }


bool isempty(Queue* queue){
    if(queue->rear==-1)
    return true;
}

bool isFull(Queue* queue){
    if(queue->rear ==queue->size){
        return true;
        
    }
}

// for adding in the Queue
int enqueue1(Queue* queue ,int numb ){
    if(isFull(queue)){
    return -1;
    }
    else{
    queue->rear=queue->rear+1;
    queue->arr[queue->rear]=numb;
    cout<<"Person Inserted in the queue"<<endl;
    }
    
}

int deque1(Queue* queue) {
    
    if(isempty(queue)){
       cout<<"No one is in the queue";
    }
    queue->front=queue->front + 1;
    return (queue->arr[queue->front]);
}

int main(){
    int i;
    int token=0;
    //Queue* queue =createQueue(5);
    Queue* queue=new Queue() ;
   queue->front=0;
   queue->rear=-1;
   queue->arr[5];
  queue->size=0;
    while(1){
        
        cout<<"Enetr 1 for going in the queue"<<endl;
        cout<<"Enter 2 to serving a person"<<endl;
        cout<<"Enter 0 for exit to the Loop"<<endl;
        
        cin>>i;
       
        
        switch(i){
            case 1:
            {
                token++;
                
              enqueue1(queue,token);
              for(int j= 0;j<5;j++){
                  cout<<queue->arr[j];
              }
              break;
            }
            case 2:{
                int serving_person =deque1(queue);
         
                for(int j= 0;j<5;j++){
                  cout<<queue->arr[j];
              }
              break;
            }
            default:{
                for(int j= 0;j<5;j++){
                  cout<<queue->arr[j];
              }
                exit(0);
            }
        
        }
    
    }
    
    return 0;
}

