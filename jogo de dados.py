import random
def boas_vindas(nome_jogador):
    print(f"Bem-Vindo {nome_jogador}!")

def analise_entrada_jogador(n_dado):
    if n_dado > 0 and n_dado <=6:
        print("Entrada válida!\n")
        return True
    else:
        print("Entrada Inválida!\n")
        return False

def comparar_dados(*,dado_usuario, dado_maquina,):
    if dado_usuario > dado_maquina:
        print("Usuário ganhou!\n")
        return "usuario"
    
    elif dado_usuario < dado_maquina:
        print("Máquina ganhou!\n")
        return "maquina"
    
    else:
        print("Empate!\n")

def placar(placar_usuario, placar_maquina,nome_jogador):
    print("/"*40)
    print("Placar")
    print(f"{nome_jogador}   -  -  -  {placar_usuario}")
    print(f"Máquina -  -  -  {placar_maquina}")
    print("/"*40)
    print()


def main():
    nome_jogador = input("Digite o seu nick para comerçar:\n")
    boas_vindas(nome_jogador)

    placar_usuario = 0
    placar_maquina = 0

    jogar = "S"
    while jogar =="S":
        dado_usuario = int(input("Digite um número entre 1 e 6 para escolher o número do dado:\n"))

        if dado_usuario >0 and dado_usuario <=6:
            dado_maquina = random.randint(1,6)
            vencedor = comparar_dados(dado_usuario = dado_usuario, dado_maquina = dado_maquina)
            
            if vencedor == "usuario":
                placar_usuario += 1
            elif vencedor == "maquina":
                placar_maquina += 1

            placar(placar_usuario, placar_maquina,nome_jogador)

        else:
            print("Escolha inválida! \n\n")
            continue

        jogar = input("Gostaria de continuar jogando? [S/N]\n").upper()
    
    if placar_usuario > placar_maquina:
        print(f"Parabens {nome_jogador} você ganhou!\n\n")
        placar(placar_usuario, placar_maquina,nome_jogador)
    
    elif placar_usuario < placar_maquina:
        print("A máquina levou a melhor!\n\n")
        placar(placar_usuario, placar_maquina,nome_jogador)
    
    else:
        print("Jogo hard! Porém, empate!\n\n")
        placar(placar_usuario, placar_maquina,nome_jogador)

main()


    
    

