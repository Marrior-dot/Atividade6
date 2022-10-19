#include "stock.h"
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int Stock::listSize = 5;
int Stock::contentNameSize = 0;

Stock::Stock(){}
Stock::Stock(const Stock &other) { this->stockName = other.stockName; }
Stock::~Stock(){}

string Stock::getStockName() { return stockName; }

void Stock::setStockName(string stockName) {
  while (stockName.size() < 3) {
    cout << "Escolha um nome com comprimento maior que 3"
         << "\n";
    cin >> stockName;
  }
  this->stockName = stockName;
  cout << "O nome do cd é:" << stockName;
}

void Stock::insertContent(string contentName) {
  while (contentName.size() > contentNameSize) {
    cout << "Escolha um nome para o conteudo com comprimento menor que: "
         << contentNameSize << "\n";
    cin >> contentName;
  }
  if (contentList.size() == listSize) {
    string qs = "";
    *listPtr = listSize;
    cout << "o CD está cheio, não é possível por mais conteúdo"
         << "/n"
         << "Deseja trocar para um cd Maior?Digite S para Sim e N para Não";
    cin >> qs;
    if (qs == "S"){
      cout << "Digite o tamanho desejado: ";
      cin >> listSize;
      while( listSize <= *listPtr ){
        cout << "Digite um tamanho maior que: " << *listPtr;
        cin >> listSize;
      }
      listSizeChange(listSize);
    }
      return;
  }
  contentList.push_back(contentName);
}

void Stock::printContentList() {
  cout << "Conteúdo do " << getStockName();
  for (int i = 0; i < contentList.size(); i++) {
    cout << contentList[i] << "\n";
  }
}

void Stock::setContentNameSize(int contentNameSize) {
  this -> contentNameSize = contentNameSize;
}

void Stock::listSizeChange(int listSize) {
  this -> listSize = listSize;
}
