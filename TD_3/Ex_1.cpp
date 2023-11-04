#include<iostream>
using namespace std;

class Complex{
private :
    double reel;
    double img;
public :
    Complex(){}
    Complex(double m_reel,double m_img){
        reel=m_reel;
        img=m_img;
    }
    void operator+(Complex a){
        double resultReal = reel + a.reel;
        double resultImaginary = img + a.img;
        cout << resultReal << " + " << resultImaginary << "i" << endl;
    }
    void operator*(Complex a){
        double resultReal = (reel * a.reel)-(img*a.img);
        double resultImaginary =(reel*a.img) +(img*a.reel);
        cout << resultReal << " * " << resultImaginary << "i" << endl;
    }
      void operator-(Complex a){
        double resultReal = reel - a.reel;
        double resultImaginary = img - a.img;
        cout << resultReal << " - " << resultImaginary << "i" << endl;
    }
     void operator/(Complex a){
        double denominator = a.reel * a.reel + a.img * a.img;
        double resultReal = (reel * a.reel + img * a.img) / denominator;
        double resultImaginary = (img * a.reel - reel * a.img) / denominator;
       cout << resultReal << " - " << resultImaginary << "i" << endl;
     }
};
int main (){
    double real1, imaginary1, real2, imaginary2;

    cout << "Entrez la partie reelle du premier nombre complexe : ";
    cin >> real1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> imaginary1;

    cout << "Entrez la partie reelle du deuxieme nombre complexe : ";
    cin >> real2;
    cout << "Entrez la partie imaginaire du deuxieme nombre complexe : ";
    cin >> imaginary2;

    Complex num1(real1, imaginary1);
    Complex num2(real2, imaginary2);

    int choice;
    cout << "Menu : \n";
    cout << "1. Addition\n";
    cout << "2. Soustraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Choisissez une operation (1/2/3/4) : ";
    cin >> choice;

    switch (choice) {
        case 1:
            num1+num2;
            break;
        case 2:
            num1-num2;
            break;
        case 3:
            num1*num2;
            break;
        case 4:
           num1/num2;
            break;
        default:
            std::cout << "Choix non valide." << std::endl;
            return 1;
    }
   return 0;
}

