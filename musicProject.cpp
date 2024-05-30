#include <iostream>
#include <vector>
using namespace std;

struct music {
    string name;
    string artist;
    string album;
    int year;
};

void PrintMusic(const music& n) {
    cout << "Название: " << n.name << endl;
    cout << "Исполнитель: " << n.artist << endl;
    cout << "Альбом: " << n.album << endl;
    cout << "Год выпуска: " << n.year << endl;
}

string addMusic(music& n) {
    cout << "Введите название музыки: " << endl;
    cin >> n.name;
    cout << "Введите имя исполнителя: " << endl;
    cin >> n.artist;
    cout << "Введите название альбома: " << endl;
    cin >> n.album;
    cout << "Введите год выпуска: " << endl;
    cin >> n.year;
    return "";
}

int main() {
    setlocale(LC_ALL, "Russian");
    vector<music> musics;
    int choice;

    while (true) {
        cout << "1. Добавьте музыку." << endl;
        cout << "2. Вывести список." << endl;
        cout << "3. Выход." << endl;
        cout << "Ваш выбор: " << endl;
        cin >> choice;

        switch (choice) {
        case 1: {
            music newMusic;
            addMusic(newMusic);
            musics.push_back(newMusic);
            break;
        }
        case 2:
            cout << "Все песни:" << endl;
            for (const auto& m : musics)
                PrintMusic(m);
            if (musics.empty())
                cout << "Песни отсутствуют." << endl;
            break;
        case 3:
            cout << "Выход из программы." << endl;
            return 0;
        default:
            cout << "Некорректный ввод. Попробуйте снова." << endl;
        }
    }

}