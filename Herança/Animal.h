    #pragma once
    #include <string>
    #include <iostream>
    using namespace std;

    class Animal{
        protected:
            string Nome, Raca, Caminha;

        public:
            Animal();

            void setNome(string N);
            void setRaca(string R);
            void setCaminha(string C);

            string getNome();
            string getRaca();
            string getCaminha();

            void Display() const;

    };