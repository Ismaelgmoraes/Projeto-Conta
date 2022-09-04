#include "Conta.h"

Conta::Conta()
{
    //ctor
}

Conta::~Conta()
{
    //dtor
}
bool Conta::Sacar (double Valor)
{
    if (Saldo < Valor)
    {
        std::cout << "Saldo Insuficiente!\n";
        std::cout << "Seu Saldo atual: R$" << ConsultarSaldo() << std::endl;
        return false;
    } else{
        Saldo -= Valor;
        std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << std::endl;
        return true;
    }
}
void Conta::Depositar (double Valor)
{
    Saldo += Valor;
    std::cout << "\nDeposito de R$" << Valor << " Efetuado com Sucesso!\n";
}
void Conta::Trasferir (Conta Destino, double Valor)
{
    if (Saldo < Valor)
    {
        std::cout << "Saldo Insuficiente!\n";
        std::cout << "Seu Saldo atual: R$" << ConsultarSaldo() << std::endl;
    } else {
        Destino.Depositar(Valor);
        Saldo -= Valor;
        std::cout << "Titular: " << Destino.GetTitular() << std::endl;
        std::cout << "Banco: " << Destino.GetBanco() << std::endl;
        std::cout << "Agencia: " << Destino.GetAgencia() << std::endl;
        std::cout << "Conta: " << Destino.GetNumConta() << std::endl;
        std::cout << "Transferencia realizada com sucesso!\n";
        std::cout << "Seu Saldo atual: R$" << ConsultarSaldo() << std::endl;
    }
}
double Conta::ConsultarSaldo()
{
    return Saldo;
}
std::string Conta::GetBanco()
{
    return Banco;
}
int Conta::GetAgencia()
{
    return Agencia;
}
int Conta::GetNumConta()
{
    return NumConta;
}
std::string Conta::GetTitular()
{
    return Titular;
}
void Conta::SetBanco (std::string Banco)
{
    this -> Banco = Banco;
}
void Conta::SetNumConta (int NumConta)
{
    this -> NumConta = NumConta;
}
void Conta::SetAgencia (int Agencia)
{
    this -> Agencia = Agencia;
}
void Conta::SetTitular(std::string Titular)
{
    this -> Titular = Titular;
}
