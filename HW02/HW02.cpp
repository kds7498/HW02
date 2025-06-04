#include <iostream>
using namespace std;

// 동물 클래스 (기본 클래스)
class Animal {
public:
    // 소리 내는 함수 (순수 가상 함수)
    virtual void makeSound() = 0;
};

// 강아지 클래스
class Dog : public Animal {
public:
    void makeSound() {
        cout << "멍멍!" << endl;
    }
};

// 고양이 클래스
class Cat : public Animal {
public:
    void makeSound() {
        cout << "야옹~" << endl;
    }
};

// 소 클래스
class Cow : public Animal {
public:
    void makeSound() {
        cout << "음메~~" << endl;
    }
};

int main() {
    // Animal 타입의 포인터 배열 (3개짜리)
    Animal* animals[3];

    // 동물 객체 생성
    Dog dog;
    Cat cat;
    Cow cow;

    // 배열에 동물 저장
    animals[0] = &dog;
    animals[1] = &cat;
    animals[2] = &cow;

    // 배열을 돌면서 동물 울음소리 출력
    for (int i = 0; i < 3; i++) {
        animals[i]->makeSound(); // 각각의 makeSound() 호출
    }

    return 0;
}
