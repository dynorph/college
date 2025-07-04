package listas.lista5;

import java.util.ArrayList;
import java.util.List;

public class Cliente {
    private String nome;
    private String cpf;
    private List<Tributavel> tributaveis = new ArrayList();

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public List getTributaveis() {
        return tributaveis;
    }

    public void addTributavel(Tributavel t) {
        tributaveis.add(t);
    }
}
