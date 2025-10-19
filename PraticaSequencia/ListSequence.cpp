
#include "Sequence.h"
#include "string.h"


Sequence::Sequence()
{
    first = NULL;
    this->quantity = 0;
}

Sequence::~Sequence()
{
    Node<std::string>* curr = first;
    while(curr!=NULL)
    {
        Node<std::string>* aux = curr;
        curr = curr->getNext();
        delete aux;
    }
}

/**
 Returns the i-th element in this sequence.
 */
std::string Sequence::get(int i)
{
    Node<std::string>* curr = first;
    int counter = 1;
    
    while( curr!= NULL && counter < i )
    {
        curr = curr->getNext();
        counter++;
    }
    
    return curr->getValue();
}

/**
 Inserts the element in this sequence.
 After inserting, the element must be in the i-th position.
 */
void Sequence::insert(int i, std::string element)
{
        Node<std::string>* novo = new Node<std::string>(element);

    if (first == NULL || i <= 1) { // se for o primeiro
        novo->setNext(first);
        first = novo;
    } 
    else {
        Node<std::string>* atual = first;
        int pos = 1;
        // caminha ate o elemento anterior
        while (atual->getNext() != NULL && pos < i - 1) {
            atual = atual->getNext();
            pos++;
        }
        //insere elemento no meio ou no fim
        novo->setNext(atual->getNext());
        atual->setNext(novo);
    }

    quantity++;
}

/**
 Inserts the element in the begin of this sequence.
 After inserting, the element will be the first in the sequence.
 */
void Sequence::insertBegin(std::string element)
{
    Node<std::string>* node = new Node<std::string>(element);
    
    if( first != NULL )
    {
        node->setNext( first );
    }
    
    first = node;
    
    this->quantity++;
}

/**
 Inserts the element in the end position of this sequence.
 After inserting, the element will be the last in the sequence.
 */
void Sequence::insertEnd(std::string element)
{
    Node<std::string>* node = new Node<std::string>(element);
    this->quantity++;
    
    if(first == NULL)
    {
        first = node;
        return;
    }
    
    Node<std::string>* curr = first;
    
    while( curr->getNext()!= NULL )
    {
        curr = curr->getNext();
    }
    
    curr->setNext(node);
}

/**
 Removes the element in the i-th position of this sequence.
 Returns the removed element.
 */
std::string Sequence::remove(int i)
{
    //lista vazia
    if (first == nullptr) {
        std::cout << "Erro: sequência vazia." << std::endl;
        return "";
    }
    //remove primeiro elemento
    if (i <= 1) {
        return removeBegin();
    }
    Node<std::string>* prev = first;
    Node<std::string>* curr = first->getNext();
    int pos = 2;
    //percorre ate a posicao desejada
    while (curr != nullptr && pos < i) {
        prev = curr;
        curr = curr->getNext();
        pos++;
    }
    // se chegou ao fim, remove o ultimo
    if (curr == nullptr) {
        return removeEnd();
    }

    // Remove a posição i
    prev->setNext(curr->getNext());
    std::string result = curr->getValue();
    delete curr;
    quantity--;
    return result;
}

/**
 Removes the first element in this sequence.
 Returns the removed element.
 */
std::string Sequence::removeBegin()
{
    Node<std::string>* toDelete = first;
    
    first = first->getNext();
    
    std::string result = toDelete->getValue();
    delete toDelete;
    this->quantity--;
    return result;
}

/**
 Removes the last element in this sequence.
 Returns the removed element.
 */
std::string Sequence::removeEnd()
{
    if(first == NULL)
    {
        return NULL;
    }
    
    Node<std::string>* curr = first;
    Node<std::string>* prev = NULL;
    
    while( curr->getNext()!= NULL )
    {
        prev = curr;
        curr = curr->getNext();
    }
    
    if(prev == NULL)
    {
        return removeBegin();
    }
    
//    Node<std::string>* cNext = curr->getNext();
    prev->setNext(NULL);
    
    std::string result = curr->getValue();
    delete curr;
    this->quantity--;
    return result;
}

Node<std::string>* Sequence::getFirst()
{
    return this->first;
}

void Sequence::print(void)
{
    Node<std::string> *n = this->first;
    while(n!=nullptr)
    {
        std::cout << n->getValue() << " ";
        n = n->getNext();
    }
    std::cout << std::endl;
}


bool Sequence::isEmpty()
{
    return this->getQuantity()==0;
}

int Sequence::getQuantity()
{
    return this->quantity;
}
