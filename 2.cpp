#include <iostream>
#include <string>
#include <vector>
// не забудьте подключить библиотеку <vector>

using namespace std;

int main() {
    // Объявите переменную-вектор, которая будет хранить слова.
    // Назовите её words.
    vector<string> words;

    string query;
    getline(cin, query);

    string word;

    // Мы заменили обычный for на range-based.
    for (char c : query) {
        if (c == ' ') {
            // Удалите вывод в cout и замените его на добавление элемента в вектор.
            words.push_back(word);
            word = ""s;
        } else {
            word += c;
           
        }
    }
    // Добавьте в вектор последнее слово вместо вывода.
    words.push_back(word);

    // Сюда вставьте вывод элементов вектора.
    for (string word : words){
        cout << '[' << word << ']' << endl;
    }
}