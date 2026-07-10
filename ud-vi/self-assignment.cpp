#include <iostream>

// AUTO ATRIBUIÇÃO

class BuggyRawPointer {
    private:
        char *m_ptr;
        int t;
    public:
        BuggyRawPointer(char *m_ptr) : m_ptr(m_ptr) {}
        BuggyRawPointer& operator=(const BuggyRawPointer& other) {
            if (this != &other) {
                delete[] m_ptr; // LIBERA RECURSO
                t = other.t;
                m_ptr = new char[t];
                for (int i = 0; i < t; i++) {
                    m_ptr[i] = other.m_ptr[i];
                }
            }
            return *this;
        }
};