package provas.P1.prova23_1.questao1;

public class Negresco extends Biscoito implements Comestivel {
    public Negresco(String id) {
        super(id);
    }

    public void comer() {
        System.out.println("Comendo Negresco");
    }
}
