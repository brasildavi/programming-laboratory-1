#include <iostream>

class Count {
    private:
        static int count;
    public:
        Count() {
            count++;
        }
        Count(const Count& other) {
            count++;
        }
        ~Count() {
            count--;
        }
        int readCount() const ;
};

int Count::readCount() const {
    return count;
}

int Count::count = 0;

int main() {
    Count A;
    std::cout << A.readCount() << std::endl;
    Count B;
    std::cout << B.readCount() << std::endl;
    {
        Count C;
        std::cout << C.readCount() << std::endl;
    }
    std::cout << A.readCount() << std::endl;
    std::cout << B.readCount() << std::endl;
    return 0;
}
