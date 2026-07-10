#include <iostream>

class Count {
    private:
        int value;
    public:
        Count(int value = 0) : value(value) {}
        
        // PRE-INCREMENT (++A)
        Count& operator++() {
            value++;
            return *this;
        }
        // POST-INCREMENT (A++)
        Count operator++(int i) {
            Count temp = *this;
            value++;
            return temp;
        }

        void print() const {
            std::cout << value << std::endl;
        }
};

int main() {
    Count A(10);
    Count B(10);

    std::cout << "----- Pre-increment (++A) test -----" << std::endl;
    std::cout << "Original value: ";
    A.print();
    Count resultPre = ++A;
    std::cout << "Result: ";
    resultPre.print();
    std::cout << "A: ";
    A.print();

    std::cout << "----- Post-increment (A++) test -----" << std::endl;
    std::cout << "Original value: ";
    B.print();
    Count resultPost = B++;
    std::cout << "Result: ";
    resultPost.print();
    std::cout << "B: ";
    B.print();

    std::cout << "Chain" << std::endl;
    ++(++A);
    std::cout << "A: ";
    A.print();

    return 0;
}