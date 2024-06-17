#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int vidas = 3;

void inicio();
void escolhaBiblioteca();
void escolhaCorredor();
void escolhaSalaAula();
void escolhaLabInformatica();
void escolhaSaida();
void escolhaEsconderijo();
void escolhaRefeitorio();
void escolhaSecretaria();
void escolhaAuditorio();

void verificarVidas() {
    if (vidas <= 0) {
        cout << "Você perdeu todas as suas vidas. Você sente o vírus se espalhando pelo seu corpo e te transformando lentamente, fim de jogo." << endl;
        exit(0);
    }
}

int main() {

    setlocale(LC_ALL, "portuguese");
    srand(time(0));
    inicio();
    return 0;
}

void finalCura() {
    cout << "Parabéns! Você encontrou a cura para o vírus zumbi e salvou a humanidade. Fim de jogo." << endl;
    exit(0);
}

void inicio() {
    cout << "Último Suspiro" << endl;
    cout << "Você é um aluno que ficou até tarde na biblioteca fazendo um projeto de Algoritmos I." << endl;
    cout << "Ao sair da biblioteca, você percebe que algo estranho aconteceu: um apocalipse zumbi começou!" << endl;
    cout << "Agora você precisa sobreviver e tentar encontrar a cura para o vírus zumbi." << endl;
    cout << "Você tem " << vidas << " vidas." << endl;
    cout << endl;

    escolhaBiblioteca();
}

void escolhaBiblioteca() {
    cout << "Você está na biblioteca. O que você faz?" << endl;
    cout << "1. Sair da biblioteca e ir para o corredor" << endl;
    cout << "2. Procurar por um esconderijo seguro na biblioteca" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            escolhaCorredor();
            break;
        case 2:
            cout << "Você encontrou um esconderijo seguro na biblioteca e decidiu esperar. No entanto, os zumbis eventualmente te encontram. Você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaBiblioteca();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaBiblioteca();
            break;
    }
}

void escolhaCorredor() {
    cout << "Você está no corredor. O que você faz?" << endl;
    cout << "1. Ir para a sala de aula mais próxima" << endl;
    cout << "2. Ir para o laboratório de informática" << endl;
    cout << "3. Ir para a saída do prédio" << endl;
    cout << "4. Ir para o refeitório" << endl;
    cout << "5. Ir para a secretaria" << endl;
    cout << "6. Ir para o auditório" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            escolhaSalaAula();
            break;
        case 2:
            escolhaLabInformatica();
            break;
        case 3:
            escolhaSaida();
            break;
        case 4:
            escolhaRefeitorio();
            break;
        case 5:
            escolhaSecretaria();
            break;
        case 6:
            escolhaAuditorio();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaCorredor();
            break;
    }
}

void escolhaSalaAula() {
    cout << "Você entrou na sala de aula e percebe que há zumbis do lado de fora. O que você faz?" << endl;
    cout << "1. Esconder-se na sala de aula" << endl;
    cout << "2. Tentar sair e voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            escolhaEsconderijo();
            break;
        case 2:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaSalaAula();
            break;
    }
}

void escolhaLabInformatica() {
    cout << "Você está no laboratório de informática. Você vê alguns computadores ligados." << endl;
    cout << "1. Usar um computador para tentar pedir ajuda" << endl;
    cout << "2. Esconder-se no laboratório" << endl;
    cout << "3. Voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Você tenta usar um dos computadores, mas infelizmente, a conexão com a internet caiu. Os zumbis te encontram e você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaLabInformatica();
            break;
        case 2:
            cout << "Você encontra um lugar para se esconder no laboratório e decide esperar. No entanto, os zumbis eventualmente te encontram. Você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaLabInformatica();
            break;
        case 3:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaLabInformatica();
            break;
    }
}

void escolhaSaida() {
    cout << "Você está próximo à saída do prédio, mas há vários zumbis bloqueando o caminho." << endl;
    cout << "1. Tentar sair discretamente" << endl;
    cout << "2. Procurar uma saída alternativa" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Você tenta sair discretamente, mas os zumbis te veem e te atacam. Você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaSaida();
            break;
        case 2:
            cout << "Você encontra uma janela no primeiro andar e consegue escapar do prédio. No entanto, os zumbis te encontram do lado de fora e você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaSaida();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaSaida();
            break;
    }
}

void escolhaEsconderijo() {
    cout << "Você encontrou um bom lugar para se esconder na sala de aula." << endl;
    cout << "1. Esperar até que os zumbis vão embora" << endl;
    cout << "2. Tentar sair e voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Você esperou pacientemente, mas os zumbis acabaram te encontrando. Você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaEsconderijo();
            break;
        case 2:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaEsconderijo();
            break;
    }
}

void escolhaRefeitorio() {
    cout << "Você entrou no refeitório. Há comida e água suficientes para se manter por um tempo, mas também há zumbis lá fora." << endl;
    cout << "1. Esconder-se no refeitório" << endl;
    cout << "2. Tentar pegar comida e voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Você encontra um lugar seguro no refeitório e decide se esconder. No entanto, os zumbis eventualmente te encontram. Você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaRefeitorio();
            break;
        case 2:
            cout << "Você tenta pegar comida, mas os zumbis te encontram e você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaRefeitorio();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaRefeitorio();
            break;
    }
}

void escolhaSecretaria() {
    cout << "Você entrou na secretaria. Há documentos e telefones aqui." << endl;
    cout << "1. Usar um telefone para tentar pedir ajuda" << endl;
    cout << "2. Esconder-se na secretaria" << endl;
    cout << "3. Voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Você tenta usar o telefone, mas a linha está morta. Os zumbis te encontram e você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaSecretaria();
            break;
        case 2:
            cout << "Você encontra um lugar seguro na secretaria e decide se esconder. No entanto, os zumbis eventualmente te encontram. Você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaSecretaria();
            break;
        case 3:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaSecretaria();
            break;
    }
}

void escolhaAuditorio() {
    cout << "Você entrou no auditório. É um espaço grande e aberto." << endl;
    cout << "1. Esconder-se no auditório" << endl;
    cout << "2. Tentar encontrar uma saída alternativa pelo auditório" << endl;
    cout << "3. Voltar para o corredor" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Você encontra um lugar para se esconder no auditório e decide esperar. No entanto, os zumbis eventualmente te encontram. Você perde uma vida." << endl;
            vidas--;
            verificarVidas();
            escolhaAuditorio();
            break;
        case 2:
            cout << "Você encontra uma saída alternativa e, ao explorar, descobre um laboratório secreto com a cura para o vírus zumbi. Parabéns, você encontrou a cura e salvou a humanidade!" << endl;
            finalCura();
            break;
        case 3:
            escolhaCorredor();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaAuditorio();
            break;
    }
}