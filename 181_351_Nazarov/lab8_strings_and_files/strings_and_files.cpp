#include <iostream>
#include <cstring> // strcat(), strlen(), strcmp()
#include <string> // для класса string
#include <fstream> // для работы с файлами
#include <bitset>

// СТРОКИ И ФАЙЛЫ
/*
 * char cstr1[] = "C-style string1"
 * char cstr2[] = {'
 */
// строки старого с-типа представляют из себя всего лишь массив символов с нулевым окончанием:
// в типе char хранится целое знаковое число. Можно складывать, делить, умножать char
// чтобы придать символьный смысл данным, хранимым в char, нужна таблица соответствия
// чисел с символами - кодовая таблица (ASCII, ANSI, UNICODE)

// ФУНКЦИИ ДЛЯ РАБОТЫ СО СТРОКАМИ
// вывод на печать printf(char[], , , ) или printf(*char, , , ) - print formatted

// с помощью printf можно не просто печатать готовую строку, но и подставлять в нее другие
// переменные, попутно преобразовывая их в символьный вид и применяя форматирование
// символы форматирования:
// %f - float
// %s - string
// %d - decimal
// %e - exponential
// конкатенация - strcat(*char, *char);
// копирование из одной строки в другую - strcpy();
// сравнение - strcmp();
// длина строки - strlen();
// вставка строки в подстроку производится в несколько действий

/*
 * Цикл работы с файлами заключается в:
 * 0.1 Проверить, существует ли файл (в случае, если нужно открыть готовый)
 * 0.2 Создать объект для работы с файлом
 * 1. Открытие файла
 * 2. Работа с файлом
 * 3. Закрытие файла
 *
 * с ФС программа работает не напрямую, а через функции ОС:
 * функция_программы(чтение/запись/открытие) ->
 * функция ОС из системной dll ->
 * ...
 * fstream -> basic_fstream -> basic_iostream : public basic_istream, public basic_ostream
 * ...
 * fstream fs; // 0. Создание объекта
 * 1. Открытие файла
 *  fs.open("some_text_file.txt", std::fstream::in | std::fstream::out | std::fstream::trunc);
 */

int main()
{
    std::fstream in;
    std::fstream out;
    in.open("~/code/181_351_Nazarov/lab8_strings_and_files/strings.in", std::fstream::in);
    out.open("result.txt", std::fstream::out);
    size_t pos = 0;
    std::string str, substr;
    // std::cout << "Enter string: ";
    in >> str;
    // std::cout << "Enter substring: ";
    in >> substr;
    while (pos != std::string::npos)
    {
        pos = str.find(substr, pos+1);
        if (pos == std::string::npos)
            break;
        out << pos << " ";
    }
    in.close();
    out.close();
    return 0;
}
