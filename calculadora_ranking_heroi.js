function calcular_saldo_jogos (vitoria, derrota){
    saldo = vitoria - derrota
    if (saldo >= 0){
        return saldo;
    }
    else{
        return 0;
    }
}

function elo_heroi(vitoria){
    if (vitoria <= 10){
        return "Ferro";
    }
    else if (vitoria >=11 && vitoria <= 20){
        return "Bronze";
    }
    else if (vitoria >=21 && vitoria <=50){
        return "Prata";
    }
    else if (vitoria >= 51 && vitoria <= 80){
        return "Ouro";
    }
    else if (vitoria >= 81 && vitoria <= 90){
        return "Diamante"
    }
    else if (vitoria >= 91 && vitoria <= 100){
        return "Lendário"
    }
    else if (vitoria >= 101){
        return "Imortal"
    }

}

function main(){
    let vitoria = 400;
    let derrota = 250;
    
    console.log("O herói tem o saldo de", calcular_saldo_jogos(vitoria,derrota), 
    " e está no elo", elo_heroi(calcular_saldo_jogos(vitoria,derrota)));

}

main();