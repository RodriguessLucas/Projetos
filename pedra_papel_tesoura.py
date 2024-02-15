import random

OPCOES = ["PEDRA", "PAPEL", "TESOURA"]
REGRA = {"PEDRA":"TESOURA", "TESOURA":"PAPEL", "PAPEL":"PEDRA"}
BARRAS = "="

vitoria_usuario = 0
vitoria_maquina = 0

print(f"{BARRAS*10} BEM-VINDO AO PEDRA, PAPEL OU TESOURA {BARRAS*10}")

continuar_jogando = "S"
while continuar_jogando == "S":

    escolha_usuario = input("ESCOLHA ENTRE PEDRA, PAPEL OU TESOURA:\n").upper()
    escolha_maquina = random.choice(OPCOES)

    if escolha_usuario == escolha_maquina:
        print(f"Empate, ambos escolheram {escolha_maquina}")

    elif REGRA.get(escolha_usuario) == escolha_maquina:
        vitoria_usuario += 1
        print(f"Usuário ganhou! {escolha_usuario} ganha de {escolha_maquina}")
    
    else:
        vitoria_maquina += 1
        print(f"Máquina ganhou! {escolha_maquina} ganha de {escolha_usuario}")

    continuar_jogando = input("Gostaria de continuar? [S/N]\n").upper()

    print(f"{BARRAS*40}\nPlacar      Máquina  {vitoria_maquina} x {vitoria_usuario}  Usuário \n{BARRAS*40}")