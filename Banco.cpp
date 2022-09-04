#include "Conta.h"

int main()
{
    //Criamos um objeto ContaCliente01 do tipo conta
    // que est� alocado na Stack.
    Conta ContaCliente01;
    //Criamos um objeto ContaCliente01 do tipo conta
    // que est� alocado na Stack.
    Conta ContaCliente02;

    ContaCliente01.SetBanco("Bradesco");
    ContaCliente01.SetAgencia(1234);
    ContaCliente01.SetNumConta(9999);
    ContaCliente01.SetTitular("Fulano");
    ContaCliente01.Depositar(14690);
    ContaCliente01.Sacar(1500);

    ContaCliente02.SetBanco("Banco do Brasil");
    ContaCliente02.SetAgencia(5678);
    ContaCliente02.SetNumConta(1111);
    ContaCliente02.SetTitular("Beltrano");

    ContaCliente01.Trasferir(ContaCliente02,2000);
    ContaCliente02.Sacar(500);
    ContaCliente02.Sacar(5000);

    system("PAUSE");
    return 0;
}
