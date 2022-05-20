#include <iostream>
using namespace std;


int main(){
	string acao;
	string mensagem;
	int chave;
	int tamanho_msg;
	char alfabeto[52]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j',
	'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',};
	cout << "O que deseja fazer? " << endl << "-criptografar (ou c)" << endl << "-desencriptar (ou d)" << endl << "-Sair (ou s)" << endl;
	cin >> acao;
	while (true){
		if (acao=="criptografar" or acao=="c"){
			cout << "Entre com a mensagem: " << endl;
			cin.ignore();
			getline(cin,mensagem);
			tamanho_msg = mensagem.length();
			cout << "Entre com a chave: (<=26) " << endl;
			cin >> chave;
			if(chave>26){
				chave=chave-(26*(chave/26));
				cout << chave << endl;
				}
			int i=0;
			while(i<=tamanho_msg){
				int j=0;
				if (mensagem[i]==' '){
					i++;
					}
				while(mensagem[i]!=alfabeto[j]){
					j++;
					}
				mensagem[i]=alfabeto[j+chave];
				i++;
				}
			cout << "Sua mensagem criptografada e: " << mensagem << endl;
			}else if(acao=="desencriptar" or acao=="d"){
				cout << "Entre com a mensagem criptografada: " << endl;
				cin.ignore();
				getline(cin,mensagem);
				tamanho_msg = mensagem.length();
				cout << "Entre com a chave utilizada: (<=26) " << endl;
				cin >> chave;
				int i=0;
				while(i<=tamanho_msg){
					int j=0;
					if (mensagem[i]==' '){
					i++;
					}
				while(mensagem[i]!=alfabeto[j]){
					j++;
					}
				mensagem[i]=alfabeto[j-chave];
				i++;
				}
				cout << "Sua mensagem original e: " << mensagem << endl;
				
				}else if (acao=="sair" or acao=="s"){
					cout << "Programa encerrado" << endl;
					return 0;
					}else{
						cout << "Funcao inexistente" << endl;
						}
			cout << "O que deseja fazer? " << endl << "-criptografar (ou c)" << endl << "-desencriptar (ou d)" << endl << "-sair (ou s)" << endl;
			cin >> acao;
		}
	}
