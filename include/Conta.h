# pragma once
#include <iostream>
#include <string>

class Conta
{
    public:
        Conta();
        virtual ~Conta();
        bool Sacar (double Valor);
        void Depositar (double Valor);
        void Trasferir (Conta Destino, double Valor);
        double ConsultarSaldo();
        std::string GetBanco();
        int GetAgencia();
        int GetNumConta();
        std::string GetTitular();
        void SetBanco (std::string Banco);
        void SetAgencia (int Agencia);
        void SetTitular(std::string Titular);
        void SetNumConta (int NumConta);

    private:
        std::string Banco;
        int Agencia;
        int NumConta;
        std::string Titular;
        double Saldo {0.0f};

};
