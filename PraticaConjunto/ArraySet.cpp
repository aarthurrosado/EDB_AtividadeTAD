//
//  ArraySet.cpp
//  ArraySet
//
//
#include "Set.hpp"
#include <iostream>
using namespace std;

Set::Set(){
    this->capacity = CAPACITY_DEFAULT;
    
    array = new std::string[this->capacity];
    
    this->quantity = 0;
    this->insertPosition = 0;
}

Set::Set(int initialCapacity){
    this->capacity = initialCapacity;
    
    array = new std::string[this->capacity];
    
    this->quantity = 0;
    this->insertPosition = 0;
}

Set::~Set(){
    delete [] array;
}

bool Set::add(std::string s){
    if(insertPosition == capacity){
        cout << "Erro, limite de espaco atingido!" << endl;
        return false;
    } else{
        if (contains(s) != true) {
            array[insertPosition] = s;
            quantity++;
            insertPosition++;
            return true;
        }
    }
    cout << "Erro, elemento ja contido no conjunto." << endl;
    return false;
}

bool Set::contains(std::string s){
    for( int i = 0; i < this->quantity; ++i ){
        if( array[i] == s ){
            return true;
        }
    }
    return false;
}

bool Set::remove(std::string s){
    if (contains(s) == false) {
        cout << "Erro, elemento nao esta contido no conjunto." << endl;
        return false;
    }
    if(contains(s) == true) {
        for (int i = 0; i < quantity; i++)
        {
            if (array[i] == s)
            {
                array[i] = array[quantity - 1];
                quantity--;
                cout << "elemento " << s << " removido com sucesso!" << endl;
                return true;
            }
            
        }
        
    }
    
}

int Set::size(){
    return this->quantity;
}

bool Set::isEmpty(){
    return this->quantity == 0;
}
