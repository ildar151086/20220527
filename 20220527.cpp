/*
Рассмотрим пример иерархии классов, описывающих
неких животных. Для упрощения примера ограничимся в
описании каждого животного его кличкой и издаваемым
животным звуком. Ну, а основной возможностью про-
граммы будет вывод на экран списка кличек животных
и представления издаваемых ими звуков.
*/
#include <iostream>

using namespace std;


class Animal {
public:
    virtual void showSpeak() = 0;
};

class Dog : public Animal {
    string speak;
    string name;
public:
    Dog(string name) {
        speak = "Гав гав";
        this->name = name;
    }
    void showSpeak() {
        cout << speak << endl;
    }
};

class Kat : public Animal {
    string speak;
    string name;
public:
    Kat(string name) {
        speak = "Мяу Мяу";
        this->name = name;
    }
    void showSpeak() {
        cout << speak << endl;
    }
};

class Bird : public Animal {
    string speak;
    string name;
public:
    Bird(string name) {
        speak = "Кря Кря";
        this->name = name;
    }
    void showSpeak() {
        cout << speak << endl;
    }
};


int main()
{
    setlocale(LC_ALL, "RUS");
    const int SIZE = 3;

    Animal* pAnimal[SIZE] = { new Dog("собака"), new Kat("Кошка"), new Bird("Птичка") };

    for (int i = 0; i < SIZE; i++) {
        pAnimal[i]->showSpeak();
    }
    return 0;
}