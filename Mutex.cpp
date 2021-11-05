// mutex::lock/unlock
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex

using namespace std;

// Compile with g++ Mutex.cpp -lpthread -o Mutex


mutex mtx;           // mutex for critical section

void print_thread_id (int id) {
  // critical section (exclusive access to std::cout signaled by locking mtx):
  mtx.lock();
  	cout << "thread #" << id << '\n';
  mtx.unlock();
}

int main ()
{
  thread threads[10];
  // spawn 10 threads:
  for (int i=0; i<10; ++i)
    threads[i] = thread(print_thread_id,i+1);

  for (auto& th : threads) th.join();

  return 0;
}
