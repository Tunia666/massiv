/*#include <iostream>

using namespace std;
int main()
{
    int i; //целочисленная перменная
    const int j = 10; //целочисленная константа
    int* a; //указатель на целочисленное значение
    int** x; //указатель на указатель на целочисленное значение
    const int* b; //указатель на целочисленную коснтанту
    int* const c = &i; //указатель-константа на целочисленную переменную
    const int* const d = &j; //указатель-константа на целую переменную
    
    //1)присваивание указателю адреса существующего объекта:
    // - с помощью операции получения адреса:
    /*int a = 50; //целая переменная
    int* x = &a; //указателю присваивается адрес целой перемееной а
    int* y(&a); //указателю присваивается адрес целой переменной а
    // - с помощью значения другого инициализированного указателя:
    int* z = x; //указателю присваивается адрес, хранящийся в x
    // - с помощью имени массива или функции:
    //2)присваивание указателю адреса области памяти в явном виде:
    int* p = (int*)0xB8000000;
    // где 0xB8000000 - шестнадцатеричная константа, (int *) - операция явного приведения типа к типу указатель на целочисленное значение
    //3) присваивание пустого значения
    int* x = NULL;
    int* y = 0;
    //4) выделение участка динамической памяти и присваивание её адреса указателю
    int* a = new int;
    int* b = new int(50);
    //5) освобождение памяти, выделенной с помощью new
    delete a; delete[]b;
}*/
    /*
    //Операция разадресации(*)
#include <iostream>
using namespace std;
int main() {
    //инициализация указателя на целочисленное значение
    int* a = new int(50);
    //переменной b присваивается значение, хранящиеся по адресу указателя а
    int b = *a;
    cout << "adress \t *a\t b"<<endl;
    cout << a << "\t" << *a << "\t" << b << endl;
    *a = 100; //изменяем значение, хранящееся по адресу указателя a
    cout << a << "\t" << *a << "\t" << b << endl;
    return 0;

}
*/
/*
//Операция получения адреса (&) применима к величинам, имеющим имя и размещенным в оперативной памяти
#include <iostream>
using namespace std;
int main() {
    int b = 50;
    int* a = &b; //в указатель а заисали адрес переменной b
    cout << "adress \t *a\t b" << endl;
    cout << a << "\t" << *a << "\t" << b << endl;
    b += 10;
    cout << a << "\t" << *a << "\t" << b << endl;
    *a = 100;
    cout << a << "\t" << *a << "\t" << b << endl;
    return 0;
}
*/

//Арифметические операции

/*#include <iostream>
using namespace std;
int main() {
    int* a = new int(50);
    cout << "adress \t *a\n";
    cout << a << "\t" << *a << endl;
    //1 увеличение на 1 значение, хранящееся по адресу указателя а
    (*a)++;
    cout << a << "\t" << *a << endl;
    //2 значение указателя изменяется на величину sizeof(int)
    *(a++);
    cout << a << "\t" << *a << endl;
    //3 с учетом операции * и ++ аналог строки 2
    *a++;
    cout << a << "\t" << *a << endl;
    return 0;
}*/

// пример ссылки
/*#include <iostream>
using namespace std;
int main() {
    int a = 50;
    int& b = a;
    cout << "a\t b\n";
    cout << a << "\t" << b << endl;
    a++;
    cout << a << "\t" << b << endl;
    b++;
    cout << a << "\t" << b << endl;
    return 0;
}*/

//пример работы с одномерным массивом Статическим
/*#include <iostream>
using namespace std;
int main() {
    int b[10];
    int* p = &b[0];
    for (int i = 0; i < 10; i++) {
        cout << "b[" << i << "]=";
        cin >> *p++;
    }
    p = &b[0];
    for (int i = 0; i < 10; i++) {
        cout << "b[" << i << "]=" << *p++ << endl;

    }
    return 0;
}*/
 
//пример работы с одномерным массивом Динамическим
/*#include <iostream>
using namespace std;
int main() {
    int *b = new int [10];
    for (int i = 0; i < 10; i++) {
        cout << "b[" << i << "]=";
        cin >> *(b+i);
    }
    
    for (int i = 0; i < 10; i++) {
        cout << "b[" << i << "]=" << *(b+i) << endl;

    }
    return 0;
}*/

//передача статического массива
/*#include <iostream>
using namespace std;
void print(int mas[], int n) {
    for (int i = 0; i < n; i++) cout << mas[i] << "\t";
    cout << endl;
}
int main() {
    int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
    print(a, 10);
    cout << endl;
    print(a, 7);
    print(a, 13);
    return 0;
}*/

//передача динамического массива
/*#include <iostream>
using namespace std;
void print(int *mas, int n) {
    for (int i = 0; i < n; i++) cout << mas[i] << "\t";
    cout << endl;
}
int main() {
    int n = 10;
    int *a = new int [n];
    for (int i = 0; i<n;i++) a[i] = i*i;
    print(a, 10);
    
    return 0;
}*/
 //массив, как возвращение значение функции
/*#include <iostream>
using namespace std;
int* creat(int n) {
    int* mas = new int[n];
    for (int i = 0; i < n; i++) mas[i] = i * i;
    return mas;
}
void print(int* mas, int n) {
    for (int i = 0; i < n; i++) cout << mas[i] << "\t";
    cout << endl;
}
int main() {
    int n = 5;
    int* a = creat(n);
    
    print(a, n);

    return 0;
}*/

//двумерный статический массив
/*#include <iostream>
using namespace std;
int main() {
    int b[4][5];
    int* p = &b[0][0];
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> *p++;
        }
    }
    p = &b[0][0];
    for (int i = 0; i < 4; ++i, cout<<endl) {
        for (int j = 0; j < 5; ++j) {
            cout << *p++<<"\t";
        }
    }
    return 0;
}*/

