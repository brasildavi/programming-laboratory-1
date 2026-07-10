#include <iostream>

class Control {
    private:
        bool isOn;
    public:
        Control(bool status) : isOn(status) {}
        // SOBRECARGA DE OPERADOR UNÁRIO "!"
        bool operator!() const {
            return !isOn;
        }
};

int main() {
    Control light_bulb(false);
    if (!light_bulb) {
        std::cout << "The light is off!" << std::endl;
    } else {
        std::cout << "The light is on!" << std::endl;
    }
    return 0;
}