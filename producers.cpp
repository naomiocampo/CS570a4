// x <= 10 candies on the belt at a time
// crunchy frog bites  a <= 3 on a belt at a time
// produced FIFO order
// everytime belt has an addition or removal, there should be an indication
//stop production once 100 candies are produced
// exit after 100 candies

// PRODUCE DATA 2 threads, one with specific requirements
pseudo code
define capacity of queue ( 10 elements )
 
 (  must be separate )
 frogbites thread 1
 escargot thread 2
  
  
   if ( frog bites <= 3 )
    then continue
   if ( frog bites = 3 )
      dont allow more frog bites
   if ( frog bites > 3 )
        Stop pls 
   if ( candy production > 100 )
     continue
    if ( candy production !> 100 )
      STOP
 
 /* void *producer(void *pno)
{   
    int item;
    for(int i = 0; i < MaxItems; i++) {
        item = rand(); // Produce an random item
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        buffer[in] = item;
        printf("Producer %d: Insert Item %d at %d\n", *((int *)pno),buffer[in],in);
        in = (in+1)%BufferSize;
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
    }
}
     */
     
   
/*queue
initialize variables:
  integer *array ( stores queue elements )
  integer capacity ( max capacity of queue )
  int front ( front elements, not sure if this is needed )
      ^^ will probably be used to notify when product is added or removed
  int rear ( last element in the queue ) 
    ^^ same w this
   int count ( current size of queue )
    ^^ unsure if needed
    
   
  queue constructor to initialize queue
 queue::queue(int size){}
 
  queue destructor
  */
  
  
