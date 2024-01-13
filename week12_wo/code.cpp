#include <iostream>

using namespace std;

struct ArrayList{
    int capacity;
    int size;
    int* items;
};

/**
 *
 * @param capacity
 * @return een lege arraylist met de meegegeven capaciteit
 */
ArrayList* createList(int capacity){
    ArrayList* lst = new ArrayList();
    lst->size = 0;
    lst->capacity = capacity;
    int* items = new int[capacity];
    lst->items = items;
    return lst;
}

/**
 * De functie maakt een lege lijst uit 'l' zonder het geheugen vrij te geven.
 * @param l
 */
void clearList(ArrayList* l){
    l->size = 0;
    for(int i=0; i<l->capacity; i++){
        l->items[i] = 0;
    }
}

/**
 * Al het geheugen in lst wordt vrijgegeven
 * @param lst
 */
void destroyList(ArrayList* lst){
    delete[] lst->items;
    delete lst;
}

/**
 *
 * @param lst
 * @return true als lst leeg is
 */
bool isEmpty(ArrayList* lst){
    return lst->size == 0; //lst->size is hetzelfde als (*lst).size
}

/**
 *
 * @param lst
 * @return size van de meegegeven lst
 */
int getSize(ArrayList* lst){
    return lst->size;
}

/**
 *
 * @param lst
 * @param index
 * @param newElement is het nieuwe element wat het element op 'index' moet vervangen
 * @return return true als de operatie succesvol was
 */
bool set(ArrayList* lst, int index, int newElement){
    //extra check of index > size
    if(index >= lst->size or index <0 ){
        return false;
    }
    else{
        lst->items[index] = newElement;
        return true;
    }
}

/**
 *
 * @param lst
 * @param index
 * @param item: de waarde die op de gegeven index zit wordt in item gezet.
 * @return true als de operatie succesvol was
 */
bool get(ArrayList* lst, int index,int& item){
    //extra check of index > size
    if(index >= lst->size or index <0 ){
        return false;
    }
    else{
        item = lst->items[index];
        return true;
    }
}


/**
 * Functie
 * @param lst
 * @param index
 * @return return true als de operatie succesvol was
 */
bool del(ArrayList* lst, int index){
    if(index >= lst->size or index <0 ){
        return false;
    }
    else{
        //all elements after the deleted index are now shifted to the left
        for(int i = index; i < lst->size-1;i++){
            lst->items[i] = lst->items[i+1];
        }
        lst->size--;
        return true;
    }
}


/**
 * Functie verdubbeld de capaciteit van een meegegeven ArrayList
 * @param lst: de lijst diens capaciteit moet worden verdubbeld
 */
void doubleCapacity(ArrayList* lst){
    //double size
    int* newItems = new int[lst->capacity * 2];
    //copy content lst->items to newItems
    for(int i=0; i<lst->size; i++){
        newItems[i] = lst->items[i];
    }
    //delete previous list
    delete[] lst->items;
    //update new lst
    lst->items = newItems;
    lst->capacity = lst->capacity * 2;
}


/**
 * Voegt het newItem aan het einde van de array list toe
 * @param lst
 * @param newItem: het nieuwe item dat aan het einde van lst toegevoed moet worden
 */
void add(ArrayList* lst, int newItem){
    //checks if list has reached it capacity, if so it will double the capacity such that new item will fit in the list
    if(lst->size == lst->capacity){
        doubleCapacity(lst);
    }
    //add element
    lst->items[lst->size] = newItem;
    //increment size
    lst->size++;
}


/**
 * Voegt op een meegeven index het meegegeven item in de ArrayList toe
 * @param lst
 * @param index
 * @param newItem het nieuwe item dat op de meegegeven index van lst toegevoed moet worden
 */
void insert(ArrayList* lst, int index, int newItem){
    //checks if list has reached it capacity, if so it will double the capacity such that new item will fit in the list
    if(lst->size == lst->capacity){
        doubleCapacity(lst);
    }
    //"shift" items to the right > index, start from high to low
    for(int i=lst->size - 1; i>=index; i--){
        lst->items[i+1] = lst->items[i];
    }
    lst->items[index] = newItem;
    lst->size +=1;
}


/**
 * Print de meegegeven ArrayList in een net formaat
 * @param lst
 */
void print(ArrayList* lst){
    cout << "[";
    for(int i=0; i < lst->size; i++){
        cout << lst->items[i];
        if(i != lst->size -1)
            cout << ",";
    }
    cout << "]" << endl;
}


