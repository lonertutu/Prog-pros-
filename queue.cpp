#include <iostream>
#include <queue>
#include <deque>

//template <typename T>
const int n = 10;

struct deque
{
int deqdata[n]; 
int end; //указатель на конец 
};

void Create(deque *d)
{
    d -> end = 0; //для доступа к элементу через указатель
}

void push(deque *d) //добавление элемента в конец
{
    if (d -> end == n) std::cout <<"Deque is filled"; return;
    int value;
    std::cout << "Write value";
    std::cin >> value;
    d -> deqdata[ d -> end++] = value;
    std::cout << "Element was added";

}

void pop(deque *d) //удаление элемента из начала == удаление первого элемента
{
    for (int i = 0; i < d ->end; i++) {
        d -> deqdata[i] = d -> deqdata[i+1]; //очередь сдвигается и последний элемент убирается 
        d -> end--;
    }
}

int front(deque *d) {
    return d -> deqdata[0]; //вывод первого элемента
}

int back(deque *d) {
    return d -> deqdata[d -> end - 1];  //вывод последнего элемента
}

int size(deque *d) {
    return d -> end;
}

int main() {
    deque d;
    Create(&d);
    char num = 0;
    do {
    std::cout << std::endl << "Commands:";
    std::cout << " 1 - show first element" << std::endl;
    std::cout << " 2 - show last element" << std::endl;
    std::cout << " 3 - show size of deq" << std::endl;
    std::cout << " 4 - add element in the end" << std::endl;
    std::cout << " 5 - delete element from beggining" << std::endl;
    std::cin >> num;
    switch (num)
    {

    case '1':
        std::cout << front(&d);
        break;

    case '2':
        std::cout << back(&d);
        break;

    case '3':
        std::cout << size(&d);
        break;

    case '4':
        push(&d);
        break;

    case '5':
        pop(&d);
        break;

    default:
        break;
    }
    }
while(num!='0');
system("pause");
}

