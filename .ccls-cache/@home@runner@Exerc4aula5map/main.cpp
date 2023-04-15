#include <iostream>
#include <string>
#include <map>
using namespace std;

struct Aluno 
{  
  string nome;
  float nota1, nota2, media;
};

int main() {
  map<int, Aluno>al;
  
  int num = 1;
  string nome;
  char op = 's';
  do{
    cout << "Digite o nome do " << num <<"o. aluno:" << endl;
    getline(cin, al[num].nome);
    cout << "Digite a primeira nota de " << al[num].nome <<": ";
    cin >> al[num].nota1;
    cout << "Digite a segunda nota de " << al[num].nome <<": ";
    cin >> al[num].nota2;
    al[num].media = (al[num].nota1 + al[num].nota2)/2;
    num++;
    cout << "Deseja cadastrar outro aluno? (s/n)" ;
    cin >> op;
    cin.ignore();
    
  }while(op == 's' || op == 'S');

  system("reset");
    
  for (auto [i, aluno] : al) {
        cout << "Aluno ID: " << i << endl;
        cout << "Nome: " << aluno.nome << endl;
        cout << "Nota 1: " << aluno.nota1 << endl;
        cout << "Nota 2: " << aluno.nota2 << endl;
        cout << "Média: " << aluno.media << endl;
        cout << endl;
    }

  
}