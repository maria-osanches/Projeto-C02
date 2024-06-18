#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int vidas = 3;

void inicio();
void escolhaBiblioteca();
void escolhaPrateleira();
void escolhaSaladejogos();
void escolhaCantina();
void escolhaAcademia();
void escolhaLaboratorio();
void escolhaRobotbulls();

void verificarVidas() 
{
    if (vidas <= 0) 
    {
        cout << "Você perdeu todas as suas vidas. Você sente o vírus se espalhando pelo seu corpo e te transformando lentamente, fim de jogo." << endl;
        exit(0);
    }
}

int main() 
{

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
    cout << "Ao sair da sala da biblioteca, você percebe que algo estranho aconteceu: um apocalipse zumbi começou!" << endl;
    cout << "Agora você precisa sobreviver e tentar encontrar a cura para o vírus zumbi." << endl;
    cout << "Você tem " << vidas << " vidas." << endl;
    cout << endl;

    escolhaBiblioteca();
}

void escolhaBiblioteca() 
{
    cout << "Qual sera a sua primeira escolha?" << endl;
    cout << "1. Se esconder atrás das prateleiras na biblioteca" << endl;
    cout << "2. Subir até a sala de jogos" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) 
    {
        case 1:
            escolhaPrateleira();
            break;
        case 2:
            escolhaSaladejogos();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaBiblioteca();
            break;
    }
}

void escolhaPrateleira()
{
    cout << endl;
    cout << "Voce conseguiu se esconder por alguns minutos, mas um zumbi te achou! O que você faz?" << endl;
    cout << "1. Ataca o zumbi com um livro" << endl;
    cout << "2. Corre para a cantina" << endl;
    
    int escolha;
    cin >> escolha;

    switch (escolha) 
    {
        case 1:
            cout << "O livro que voce pegou era muito fino! O zumbi te mordeu e voce perdeu uma vida" << endl;
            vidas--;
            verificarVidas();
            escolhaCantina();
            break;
        case 2:
            escolhaCantina();
            break;
	}
}
void escolhaCantina()
{
            cout << endl;
            cout << "Ufa! Voce chegou na cantina, finalmente um lugar seguro" << endl;
            cout << "ou era o que voce achava... um zumbi se aproxima e voce precisa tomar uma atitude rapidamente!" << endl;
            cout << "1. Joga cafe no rosto do zumbi" << endl;
            cout << "2. Pega uma frigideira como arma" << endl;

            int escolha;
            cin >> escolha;

            switch (escolha) 
            {
                case 1:
                    cout << "Nao tinha cafe na cafeteira! Voce foi ligar a maquina para fazer o cafe e demorou muito!" << endl;
                    cout << "O zumbi te mordeu e voce perdeu uma vida!" << endl;
                    vidas--;
                    verificarVidas();
                    cout << "Por sorte, o zumbi deixou a carteirinha de acesso cair e voce pegou" << endl;
                    escolhaRobotbulls();
                    break;
                case 2:
                    cout << "Voce e a propria rapunzel!"  << endl;
                    cout << "Voce bateu com a frigideira na cara do zumbi e quando ele caiu, voce pegou a carteirinha de acesso dele" << endl;
                    escolhaRobotbulls();
                    break;
                default:
                    cout << "Escolha inválida, tente novamente." << endl;
                    escolhaCantina();
                    break;
            }
    }


void escolhaRobotbulls() 
{
    cout << endl;
    cout << "Voce conseguiu chegar a salvo na RobotBulls! Mas um zumbi te perseguiu ate la. Como voce se protege?" << endl;
    cout << "1. Escolhe um robo e liga" << endl;
    cout << "2. Escolhe um robo, coloca no chao, se afasta e liga" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) 
    {
        case 1:
            cout << "O robo estava virado em sua direcao, o que fez ele te atacar!" << endl;
            cout << "Voce perdeu mais uma vida!" << endl;
            vidas--;
            verificarVidas();
            cout << "Mas voce nao desiste facil e com esperanca voce decide ir ate o laboratorio de quimica para tentar achar a cura" << endl;
            escolhaLaboratorio();
            break;
        case 2:
            cout << "Voce derrotou o zumbi!" << endl;
            cout << "Mas voce nao pode se esconder para sempre" << endl;
            cout << "Com determinacao, voce vai ate o laboratorio de quimica" << endl;
            escolhaLaboratorio();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaRobotbulls();
            break;
    }
}

void escolhaSaladejogos() 
{
    cout << endl;
    cout << "Infelizmente, um zumbi ja estava dentro da sala. Entao, voce:" << endl;
    cout << "1. Pega o taco de sinuca para se defender" << endl;
    cout << "2. Joga uma partida de sinuca com o zumbi" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) 
    {
        case 1:
            cout << "Você matou o zumbi!" << endl;
            cout << "Como comemoracao, voce foi para o ginasio e colocou Shake it off da Taylor Swift para tocar, o que fez os zumbis comecarem a dancar" << endl;
            cout << "Todos voltaram ao normal, dancar era a cura esse tempo todo!" << endl;
            finalCura();
            break;
        case 2:
            cout << "PARABENS!!!! Voce venceu a partida de sinuca, mas o zumbi te mordeu e voce perdeu uma vida" << endl;
            vidas--;
            verificarVidas();
            escolhaAcademia();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaSaladejogos();
            break;
    }
}

void escolhaAcademia() 
{
    cout << endl;
    cout << "Você decidiu se esconder na academia por um tempo." << endl;
    cout << "1. Se prepara para um ataque e pega um peso para usar como arma" << endl;
    cout << "2. So se esconde" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) 
    {
        case 1:
            cout << "O peso era muito pesado! Voce deixou cair em voce e perdeu uma vida!" << endl;
            vidas--;
            verificarVidas();
            escolhaLaboratorio();
            break;
        case 2:
            cout << "Voce viu que um grupo grande de zumbi se aproximava e decidiu ir para o Laboratorio de Quimica" << endl;
            escolhaLaboratorio();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaAcademia();
            break;
    }
}

void escolhaLaboratorio() 
{
    cout << endl;
    cout << "Finalmente voce se sente proximo de achar a cura zumbi" << endl;
    cout << "Ao entrar no laboratorio, voce:" << endl;
    cout << "1. Lava as suas maos, seguir as regras e o mais importante" << endl;
    cout << "2. Pega o primeiro acido na sua frente e espera para testar em um zumbi" << endl;

    int escolha;
    cin >> escolha;

    switch (escolha) 
    {
        case 1:
            cout << "Um zumbi se aproximou rapidamente sem voce perceber" << endl;
            cout << "Em um ato de desespero, voce deu um tapa no zumbi para tentar se proteger" << endl;
            cout << "Como suas maos estavam molhadas, o zumbi comecou a voltar ao normal lentamente" << endl;
            cout << "A cura era agua esse tempo todo!" << endl;
            finalCura();
            break;
        case 2:
            cout << "Um zumbi se aproximou rapidamente sem voce perceber" << endl;
            cout << "Voce tropecou, deixando o acido cair no chao e o zumbi te mordeu" << endl;
            vidas--;
            verificarVidas();
            break;
        default:
            cout << "Escolha inválida, tente novamente." << endl;
            escolhaLaboratorio();
            break;
    }
}
