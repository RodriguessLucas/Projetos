class Heroi{
    constructor(nome, idade, tipo) {
        this.nome = nome;
        this.idade = idade;
        this.tipo = tipo;
    };

    Ataque(){
        switch (this.tipo) {
            case "mago":
                return "O " + this.tipo + " atacou usando magia\n";
                break;
            case "guerreiro":
                return "O " + this.tipo + " atacou usando espada\n";
                break;
            case "monge":
                return "O " + this.tipo + " atacou usando artes maciais";
                break;
            case "ninja":
                return 'O ' +this.tipo + ' atacou usando shuriken'
            default:
                break;
        };
    };

};

const ninja1 = new Heroi("Saloguinho", 19, "guerreiro");
console.log(ninja1.Ataque());