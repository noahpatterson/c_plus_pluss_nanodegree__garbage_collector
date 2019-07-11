// This class defines an element that is stored
// in the garbage collection information list.
//
template <class T>
class PtrDetails
{
  public:
    unsigned int refcount;
    T* memPtr;
    bool isArray = false;
    unsigned int arraySize;
    
    PtrDetails(T* pointer, unsigned int arSize = 0) {
        if (arSize > 0) {
            isArray = true;
        }
        memPtr = pointer;
        arraySize = arSize;
        refcount = 1;
    }
};
// Overloading operator== allows two class objects to be compared.
// This is needed by the STL list class.
template <class T>
bool operator==(const PtrDetails<T> &ob1,
                const PtrDetails<T> &ob2)
{
    // TODO: Implement operator==
  if (ob1.memPtr == ob2.memPtr) {
        return true;
    }
    return false;
}