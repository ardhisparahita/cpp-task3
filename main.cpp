// Tugas membuat daftar belanja

#include <iostream>
#include <iomanip>

using namespace std;

main()
{
  cout << "\tDaftar Belanja\n";
  cout << "+----+----------------+------+\n";
  cout << setw(5) << "| NO |" << setw(15) << "           Item |" << setw(5) << "  Jml |" << endl;
  cout << "+----+----------------+------+\n";
  cout << setw(5) << "| 01 |" << setw(15) << "     CP Company |" << setw(5) << "    6 |" << endl;
  cout << setw(5) << "| 02 |" << setw(15) << "         Adidas |" << setw(5) << "    4 |" << endl;
  cout << setw(5) << "| 03 |" << setw(15) << "   Stone Island |" << setw(5) << "    2 |" << endl;

  cout << "+----+----------------+------+\n";
  system("pause");
  return 0;
}