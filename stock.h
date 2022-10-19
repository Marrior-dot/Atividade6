#ifndef STOCK_H
#define STOCK_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class Stock {
public:

  Stock( );
  Stock( const Stock & );
  ~Stock( );

  struct category{
    string nameOfCategory;
  };
  string getStockName( );
  void setStockName( const string );
  void insertContent( string );
  void printContentList( );
  void setContentNameSize( int );

private:
  string stockName;
  string contentName;
  vector <string> contentList;
  int *listPtr;
  void listSizeChange(int);

  static int listSize;
  static int contentNameSize;
};

#endif