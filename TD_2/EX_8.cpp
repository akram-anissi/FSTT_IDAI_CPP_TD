#include <iostream>
using namespace std;
class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double realPart, double imaginaryPart) {
        real = realPart;
        imaginary = imaginaryPart;
    }

    ComplexNumber add(const ComplexNumber& other) {
        double resultReal = real + other.real;
        double resultImaginary = imaginary + other.imaginary;
        return ComplexNumber(resultReal, resultImaginary);
    }

    ComplexNumber subtract(const ComplexNumber& other) {
        double resultReal = real - other.real;
        double resultImaginary = imaginary - other.imaginary;
        return ComplexNumber(resultReal, resultImaginary);
    }

    ComplexNumber multiply(const ComplexNumber& other) {
        double resultReal = real * other.real - imaginary * other.imaginary;
        double resultImaginary = real * other.imaginary + imaginary * other.real;
        return ComplexNumber(resultReal, resultImaginary);
    }

    ComplexNumber divide(const ComplexNumber& other) {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        double resultReal = (real * other.real + imaginary * other.imaginary) / denominator;
        double resultImaginary = (imaginary * other.real - real * other.imaginary) / denominator;
        return ComplexNumber(resultReal, resultImaginary);
    }

    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    double real1, imaginary1, real2, imaginary2;

    cout << "Entrez la partie reelle du premier nombre complexe : ";
    cin >> real1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imaginary1;

    cout << "Entrez la partie reelle du deuxieme nombre complexe : ";
    cin >> real2;
    cout << "Entrez la partie imaginaire du deuxieme nombre complexe : ";
    cin >> imaginary2;

    ComplexNumber num1(real1, imaginary1);
    ComplexNumber num2(real2, imaginary2);

    int choice;
    cout << "Menu : \n";
    cout << "1. Addition\n";
    cout << "2. Soustraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Choisissez une operation (1/2/3/4) : ";
    cin >> choice;

    ComplexNumber result(0, 0);

    switch (choice) {
        case 1:
            result = num1.add(num2);
            break;
        case 2:
            result = num1.subtract(num2);
            break;
        case 3:
            result = num1.multiply(num2);
            break;
        case 4:
            result = num1.divide(num2);
            break;
        default:
            std::cout << "Choix non valide." << std::endl;
            return 1;
    }

    cout << "Resultat : ";
    result.display();

    return 0;
}
