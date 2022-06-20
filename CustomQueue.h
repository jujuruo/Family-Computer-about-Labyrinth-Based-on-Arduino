//CustomQueue
using namespace std;
const int MaxSize=50;

template<class T> class CustomQueue{
	public:
		CustomQueue(){front=0;rear=MaxSize;count=0;}
		bool Push(T x);
		bool Pop();
		bool Empty();
		T Front();
	private:
		int front;
		int rear;
		int count;
		T data[MaxSize+1];
};

template<class T>
bool CustomQueue<T>::Push(T x){
   if(count<=MaxSize) return false;
   rear=(rear+1)%(MaxSize+1);
   data[rear]=x;
   count++;
   return true;
}

template<class T>
bool CustomQueue<T>::Pop(){
   if(count<=0) return false;
   front=(front+1)%(MaxSize+1);
   count--;
   return true;
}

template<class T>
bool CustomQueue<T>::Empty(){
	if(count=0) return true;
	else return false;
}
	
template<class T>	
T CustomQueue<T>::Front(){
	return data[front];
}
	
	
	
