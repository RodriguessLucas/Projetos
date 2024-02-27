#Sistemma bancário simples, ultilizando algumas de laço e condicionais

LIMITE = 500
MAXIMO_SAQUE_DIARIO = 3
operacao = ""
saldo = 0
movimentação = ""

print("BEM VINDO USUÁRIO!")

while operacao != "F":

    operacao = (input("Qual operação deseja executar:\n"
                         "          [D] - DEPOSITO\n"
                         "          [E] - EXTRATO \n"
                         "          [S] - SAQUE   \n"
                         "          [F] - Finalizar atendimento\n"
    )).upper()
    
    if (operacao == "D" or operacao == "E" or operacao == "S" or operacao == "3" or operacao == "F") and operacao.isalpha():
        
        if operacao == "D":
            deposito = int(input("Digite o valor que deseja depositar em sua conta:\n"))
            
            if deposito > 0:
                movimentação += "DEPOSITO;"
                saldo += deposito
                print(f"Valor já depositado em sua conta!\nSaldo atual R${float(saldo)}")
            
            else:
                print("Erro na operação, por favor tente novamente.")
                continue

        elif operacao == "E":
            movimentos_historico = movimentação.split(";")
            qntd_movimento = len(movimentos_historico)
            print("Aguarde um momento...")

            if qntd_movimento > 1:
                print("=====================MOVIMENTAÇÔES=====================\n")
                print(f"Foram efetuadas {qntd_movimento} movimentos.")
                for movimentos in range(len(movimentos_historico)):
                    print(movimentos_historico[movimentos])
            
            else:
                print("Não constatamos movimentações em sua conta.")
                continue
                
        elif operacao == "S":
            
            if MAXIMO_SAQUE_DIARIO != 0:
                saque = int(input("Digite o valor que deseja sacar:\n"))

                if saque <= 500:

                    if saldo > 0: 
                        movimentação += "SAQUE;"
                        print(f"Aguarde um momento...\nSacando R$ {saque}")
                        saldo -= saque
                        MAXIMO_SAQUE_DIARIO -= 1
                        print(f"Seu saldo atual R$ {saldo}")
                    
                    else:
                        print("Saldo insuficiente, por favor realize um depósito.")
                        continue
                
                else: 
                    print(f"O valor máximo por saque é de R${LIMITE}")
                    continue 
            
            else:
                print("Máximo de saques diários atingido! Tente novamente amanhã!")
                continue
        
        else:
            print("Encerrando o atendimento! Muito obrigado por nos escolher como seu banco!")
            operacao = "F"
    
    else: 
        print("Por favor, digite um operação válida")
        continue
print("Encerrando serviços...")
