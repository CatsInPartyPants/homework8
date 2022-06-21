#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>


void line_draw(const char, int, int);
int cubic_draw(int);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    setlocale(LC_ALL, "");
    const int SIZE = 10;

    //task 1
    cout << "ЗАДАНИЕ № 1" << endl;
    std::cout << "Задание 1\n\n";

    int int_arr[SIZE];
    int min, max;
    //заполняем массив случайными значениями
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        int_arr[i] = rand() % 100 + 1;
    }

    min = int_arr[0];
    max = int_arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (min > int_arr[i]) min = int_arr[i];
        if (max < int_arr[i]) max = int_arr[i];
    }

    std::cout << "Max: " << max << ", " << "Min: " << min << std::endl;
    

    //task 2

    cout << "ЗАДАНИЕ № 2" << endl;
    std::cout << "Задание 2\n\n";

    int int_arr2[SIZE];
    int min2, max2, value, summ=0;
    cout << "Введите минимальную границу диапазона: ";
    cin >> min2;
    cout << "Введите максимальную границу диапазона: ";
    cin >> max2;
    
    //заполняем массив случайными значениями
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        int_arr2[i] = min2 + rand() % (max2 - min2);
        cout << int_arr2[i] << endl;
    }
    cout << "Укажите значение. Будет произведена сумма элементов массима меньше указанного значения ->";
    cin >> value;
    for (int i = 0; i < SIZE; i++)
    {
        if (int_arr2[i] < value)
            summ += int_arr2[i];
    }
    cout << summ << endl;
       

    //task 3

    cout << "ЗАДАНИЕ № 3" << endl;
    double month_profit[12];
    int min_diap, max_diap;
    int min_profit, max_profit;
    int min_month, max_month;
    for (int i = 0; i < 12; i++)
    {
        cout << "Введите прибыль за " << i + 1 << " месяц ->";
        cin >> month_profit[i];
    }
    cout << "Введите номер месяца, с которого начинается проверка->";
    cin >> min_diap;
    min_diap--;
    if (min_diap < 0 || min_diap > 11) {
        cout << "Неверно введен месяц" << endl;
    }
    cout << "Введите номер месяца, которым заканчивается проверка->";
    cin >> max_diap;
    max_diap--;
    if (max_diap > 11 || max_diap < 0) {
        cout << "Неверно введен месяц" << endl;
    }
    min_profit = month_profit[min_diap];
    max_profit = month_profit[min_diap];
    for (int i = min_diap; i <= max_diap; i++) {
        if (min_profit > month_profit[i]) { min_profit = month_profit[i]; min_month = i + 1; }
        if (max_profit < month_profit[i]) { max_profit = month_profit[i]; max_month = i + 1; }
    }

    cout << "В диапазоне с " << min_diap + 1 << " месяца по " << max_diap + 1 << " месяц: \n";
    cout << "Минимальная прибыль была в " << min_month << " месяц и составила $" << min_profit << "." << endl;
    cout << "Максимальная прибыль была в " << max_month << " месяц и составила $" << max_profit << "." << endl;
    
    //task 4

    cout << "ЗАДАНИЕ № 4" << endl;
    const int SIZE_N = 10;
    int array4[SIZE_N]{ 10,4,13,-5,-1000,4,-10,1000,-50,20 };
    int summ_negative=0; // сумма отрицательных
    int minimum_position, maximum_position;// позиции минимального элемента массива и максимального
    int product_between_minmax=1;//произведение между минимальным и максимальным
    int even_product=1;// произведение четных номеров массива
    int first_negative_pos, last_negative_pos;// позиции первого и последнего отрицательного элементов
    int summ_between_negative=0;// сумма между первым отрицательным и последним отрицательным

    minimum_position = 0;
    maximum_position = 0;
    for (int i = 0; i < SIZE_N; i++) {
        if (array4[i] < 0) { summ_negative += array4[i]; last_negative_pos = i; }
        if (array4[minimum_position] > array4[i]) { minimum_position = i; }
        if (array4[maximum_position] < array4[i]) { maximum_position = i; }
        if (i % 2 == 0 ) { even_product *= array4[i]; }
        
    }

    for (int i = 0; i < SIZE_N; i++) {
        if (array4[i] < 0) {
            first_negative_pos = i;
            break;
        }
    }
    if (first_negative_pos == last_negative_pos) {
        cout << "В массиве только одно отрицательное число!\n";
    }else{
        for (int i = first_negative_pos + 1; i < last_negative_pos; i++) {
            summ_between_negative += array4[i];
        }
    }
    

    if (minimum_position > maximum_position) {
        for (int i = maximum_position + 1; i < minimum_position; i++)
            product_between_minmax *= array4[i];
    }
    else {
        for (int i = minimum_position + 1; i < maximum_position; i++)
            product_between_minmax *= array4[i];
    }
    
    cout << "1. Сумма отрицательных элементов в массиве: " << summ_negative << ".\n"
        << "2. Произведение между минимальным и максимальным элементами массива: " << product_between_minmax << ".\n"
        << "3. Произведение элементов с четными номерами: " << even_product << ".\n"
        << "4. Сумма Ээлементов между первым и последним отрицательными элементами: " << summ_between_negative << endl;
    
    // task 5
    // вывод линии

    cout << "ЗАДАНИЕ № 5" << endl;
    char simbol;
    int ver_or_hor;
    int speed;
    cout << "Укажите символ, которым будем рисовать линию->";
    cin >> simbol;
    cout << "Горизонтальная линия - 1, Вертикальная - 2 ->";
    cin >> ver_or_hor;
    cout << "Выберете скорость появления линии, от 1(самая быстрая) до 3(самая медленная) ->";
    cin >> speed;
    line_draw(simbol, ver_or_hor, speed);
    

    //task 6
    //  Игра Кубики
    cout << "ЗАДАНИЕ № 6" << endl;
    
    int menu_choose;
    int computer_score;
    int user_score;
    bool move = NULL;
    int temp;    

    cout << "Игра Кубики!\n\n";
    cout << "Меню:\n";
    cout << "Играть против компьютера - 1\n";
    cout << "Выход - 2\n";
    cin >> menu_choose;
    
    if (menu_choose == 1) {
        cout << "Узнаем, кто будет первым ходить";
        for (int i = 0; i < 3; i++) {
            cout << ".";
            Sleep(1000);
        }
        cout << endl;
        srand(time(NULL));
        while (true) {
            cout << "Компьютер бросает кубик: \n";
            Sleep(2000);
            computer_score = cubic_draw(1 + rand() % 5);
            cout << "Пользователь бросает кубик: \n";
            cout << "Введите цифру ->\n";
            cin >> temp;
            Sleep(2000);
            user_score = cubic_draw(1 + rand() % 5);
            if (computer_score > user_score) {
                cout << "Первый ход за компьютером!\n";
                move = false;
                break;
            }else if (user_score > computer_score) {
                cout << "Первый ход за Вами!\n";
                move = true;
                break;
            }
            else {
                cout << "Перебрасываем!\n";
            }
        }
        computer_score = 0;
        user_score = 0;

        if (move == false) {
            for (int i = 0; i < 3; i++) {
                cout << "Бросок компьютера номер " << i + 1 << "." << "Компьютер набрал следующее количество очков: " << computer_score << endl;
                Sleep(2000);
                for (int j = 0; j < 2; j++) {
                    computer_score += cubic_draw(1 + rand() % 5);
                    Sleep(2000);
                }
                system("CLS");
            }
            cout << "Компьютер набрал следующее количество очков: " << computer_score << endl;
            Sleep(3500);

            for (int i = 0; i < 3; i++) {
                cout << "Бросок пользователя номер " << i + 1 << "." << "Пользователь набрал следующее количество очков: " << user_score << endl;
                cout << "Введите цифру ->\n";
                cin >> temp;
                Sleep(2000);
                for (int j = 0; j < 2; j++) {
                   user_score += cubic_draw(1+rand() % 5);
                    Sleep(1500);
                }
                system("CLS");
            }
            cout << "Пользователь набрал следующее количество очков: " << user_score << endl;

        }
        else if (move == true) {
            for (int i = 0; i < 3; i++) {
                cout << "Бросок пользователя номер " << i + 1 << "." << "Пользователь набрал следующее количество очков: " << user_score << endl;
                cout << "Введите цифру ->\n";
                cin >> temp;
                Sleep(2000);
                for (int j = 0; j < 2; j++) {
                    user_score += cubic_draw(1 + rand() % 5);
                    Sleep(1500);
                }
                system("CLS");
            }
            cout << "Пользователь набрал следующее количество очков: " << user_score << endl;
            Sleep(3500);

            for (int i = 0; i < 3; i++) {
                cout << "Бросок компьютера номер " << i + 1 << "." << "Компьютер набрал следующее количество очков: " << computer_score << endl;
                Sleep(1000);
                for (int j = 0; j < 2; j++) {
                    computer_score += cubic_draw(1 + rand() % 5);
                    Sleep(1500);
                }
                system("CLS");
            }
            cout << "Компьютер набрал следующее количество очков: " << computer_score << endl;
        }
        system("CLS");
        cout << "Компьютер набрал следующее количество очков: " << computer_score << endl;
        cout << "Пользователь набрал следующее количество очков: " << user_score << endl;
        Sleep(3000);

        //вывод победителя

        if (computer_score > user_score) {
            char comp_win[] = "Победа за компьютером!";
            cout << "\t\t\t";
            for (int i = 0; i < 22; i++) {
                cout << comp_win[i];
                Sleep(200);
            }
        }
        else if (user_score > computer_score) {
            char user_win[] = "Победа за Вами!";
            cout << "\n\t\t\t";
            for (int i = 0; i < 15; i++) {
                cout << user_win[i];
                Sleep(200);
            }
        }
        else {
            cout << "Ничья!\n";
        }

    }
    else {
        cout << "Всего хорошего!\n";
    }
    

    //task 7
    
    cout << endl << "ЗАДАНИЕ № 7" << endl;

    int dif_lvl; // уровень сложности
    int lives;// количество жизней
    int random_number;// рандомно сгенерированное число
    int user_guess=0;//предположение пользователя
    int temp1;
    int coef;

    cout << "\t\t\t\tИгра \"GUESS MY NUMBER\"" << endl;
    cout << "Возможны два уровня сложности: \n\n";
    cout << "Первый уровень сложности, загаданное число в диапазоне от 1 до 10\n";
    cout << "Второй уровень сложности, загаданное число в диапазоне от 10 до 100\n";
    cout << "Выберете уровень сложности 1 или 2 ->";
    cin >> dif_lvl;

    //выбираем уровень сложности
    while (true) {
        if (dif_lvl != 1 && dif_lvl != 2) {
            cout << "Уровень сложности выбран не верно! Введите 1 или 2 ->\n";
            cin >> dif_lvl;
        }
        else {
            break;
        }
    }

    // устанавливаем количество жизней и загадываем рандомное число
    srand(time(NULL));
    if (dif_lvl == 1) { lives = 5; random_number = 1+rand() % (10 - 1); coef = 5; }
    if (dif_lvl == 2) { lives = 25; random_number = 10+rand() % (100 - 10); coef = 10; }

    //цикл игры
    while (lives >= 0) {
        if (lives == 0) {
            system("CLS");
            cout << "Вы проиграли! Ха-ха\n";
            break;
        }
        cout << "Количество ваших жизней: " << lives << endl;
        cout << "Попытайтесь угадать число: ";
        cin >> user_guess;
        system("CLS");
        
        if (user_guess != random_number && user_guess != -1) {
            cout << "Вы не угадали!\n";
            cout << "Вы можете воспользоваться подсказкой!\n";
            cout << "Она стоит 1 жизнь, для того, чтобы воспользоваться, введите -1\n";
            lives--;
        }
        else if (user_guess == random_number) {
            cout << "Поздравляю! вы победили! Ваш счет: " << lives * coef << endl;
            break;
        }
        else if (user_guess == -1) {
            lives--;
            cout << "Вы воспользовались подсказкой!\n";
            if (temp1 > random_number) {
                cout << "Последнее ваше предположение " << temp1 << " больше загаданного числа!" << endl;
            }
            else if (temp1 < random_number) {
                cout << "Последнее ваше предположение " << temp1 << " меньше загаданного числа!" << endl;
            }
        }
        temp1 = user_guess;
        }
        
        

    // task 8

    cout << "ЗАДАНИЕ № 8" << endl;

    int total_points_7 = 0;
    int points_for_round_7;
    int dif_lvl_7; // уровень сложности
    int lives_7 = 1;// количество жизней
    int random_number_7;// рандомно сгенерированное число
    int user_guess_7 = 0;//предположение пользователя
    int temp_7;
    int coef_7;
    system("CLS");
    
    cout << "Начало игры!\n\n";

    for (int i = 0; i < 3; i++) 
    {
        lives_7 = 6;
        random_number_7 = 1 + rand() % (10 - 1); 
        coef_7 = 5;

        while(lives_7 >= 0)
        {
            if (lives_7 == 0) 
            {
                system("CLS");
                cout << "Loose..\n";
                cout << "Общий счет: " << total_points_7 << endl;
                break;
            }
            cout << "Уровень сложности 1, Раунд " << i + 1 << "." << endl;
            cout << "Количество ваших жизней: " << lives_7 << endl;
            cout << "Попытайтесь угадать число: ";
            cin >> user_guess_7;
            system("CLS");
            if (user_guess_7 != random_number_7 && user_guess_7 != -1)
            {
                cout << "Вы не угадали!\n";
                cout << "Вы можете воспользоваться подсказкой!\n";
                cout << "Она стоит 1 жизнь, для того, чтобы воспользоваться, введите -1\n";
                lives_7--;
            }
            else if (user_guess_7 == random_number_7)
            {
                total_points_7 += lives_7 * coef_7;
                cout << "Поздравляю! вы победили! Ваш счет: "<< total_points_7 << ". В этом раунде вы заработали " << lives_7 * coef_7 << " очков." << endl;
                break;
            }
            else if (user_guess_7 == -1) 
            {
                lives_7--;
                cout << "Вы воспользовались подсказкой!\n";
                if (temp_7 > random_number_7) {
                    cout << "Последнее ваше предположение " << temp_7 << " больше загаданного числа!" << endl;
                }
                else if (temp_7 < random_number_7) {
                    cout << "Последнее ваше предположение " << temp_7 << " меньше загаданного числа!" << endl;
                }
            }
            temp_7 = user_guess_7;
        }
        if (lives_7 <= 0) 
        {
            break;
        }
        else 
        {
            continue;
        }
    }

    // начало второго раунда
    if (lives_7 > 0)
    {
        char answer;
        cout << "Поздравляем! Вы прошли во второй раунд!\n";
        cout << "Желаете сыграть? y/n";
        cin >> answer;
        if (answer == 'n')
        {
            cout << "Всего хорошего!\n";
        }
        else 
        {
            for (int i = 0; i < 2; i++)
            {
                lives_7 = 25;
                random_number_7 = 10 + rand() % (100 - 10); 
                coef_7 = 10;

                while (lives_7 >= 0)
                {
                    if (lives_7 == 0)
                    {
                        system("CLS");
                        cout << "Loose..\n";
                        cout << "Общий счет: " << total_points_7 << endl;
                        break;
                    }
                    cout << "Уровень сложности 2, Раунд " << i + 1 << "." << endl;
                    cout << "Количество ваших жизней: " << lives_7 << endl;
                    cout << "Попытайтесь угадать число: ";
                    cin >> user_guess_7;
                    system("CLS");
                    if (user_guess_7 != random_number_7 && user_guess_7 != -1)
                    {
                        cout << "Вы не угадали!\n";
                        cout << "Вы можете воспользоваться подсказкой!\n";
                        cout << "Она стоит 1 жизнь, для того, чтобы воспользоваться, введите -1\n";
                        lives_7--;
                    }
                    else if (user_guess_7 == random_number_7)
                    {
                        total_points_7 += lives_7 * coef_7;
                        cout << "Поздравляю! вы победили! Ваш счет: " << total_points_7 << ". В этом раунде вы заработали " << lives_7 * coef_7 << " очков." << endl;
                        break;
                    }
                    else if (user_guess_7 == -1)
                    {
                        lives_7--;
                        cout << "Вы воспользовались подсказкой!\n";
                        if (temp_7 > random_number_7) {
                            cout << "Последнее ваше предположение " << temp_7 << " больше загаданного числа!" << endl;
                        }
                        else if (temp_7 < random_number_7) {
                            cout << "Последнее ваше предположение " << temp_7 << " меньше загаданного числа!" << endl;
                        }
                    }
                    temp_7 = user_guess_7;
                }
                if (lives_7 <= 0)
                {
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
    }
        
}


void line_draw(const char ch, int choose, int speed) {
    int sp;
    if (speed == 1) {
        sp = 150;
    }
    else if (speed == 2) {
        sp = 450;
    }
    else if (speed == 3) {
        sp = 950;
    }
    if (choose == 1) {
        for (int i = 0; i < 15; i++) {
            std::cout << ch;
            Sleep(sp);
        }
    }
    else if (choose == 2) {
        for (int i = 0; i < 15; i++) {
            std::cout << ch << std::endl;
            Sleep(sp);
        }
    }
}

int cubic_draw(int number) {
    switch (number) {
    case 1:
        std::cout << "==========" << std::endl;
        std::cout << "||       ||" << std::endl;
        std::cout << "||   *   ||" << std::endl;
        std::cout << "||       ||" << std::endl;
        std::cout << "==========" << std::endl << std::endl;
        break;
    case 2:
        std::cout << "==========" << std::endl;
        std::cout << "||   *   ||" << std::endl;
        std::cout << "||       ||" << std::endl;
        std::cout << "||   *   ||" << std::endl;
        std::cout << "==========" << std::endl << std::endl;
        break;
    case 3:
        std::cout << "==========" << std::endl;
        std::cout << "||   *   ||" << std::endl;
        std::cout << "||   *   ||" << std::endl;
        std::cout << "||   *   ||" << std::endl;
        std::cout << "==========" << std::endl << std::endl;
        break;
    case 4:
        std::cout << "==========" << std::endl;
        std::cout << "|| *  *  ||" << std::endl;
        std::cout << "||       ||" << std::endl;
        std::cout << "|| *  *  ||" << std::endl;
        std::cout << "==========" << std::endl << std::endl;
        break;
    case 5:
        std::cout << "==========" << std::endl;
        std::cout << "|| *  *  ||" << std::endl;
        std::cout << "||  *    ||" << std::endl;
        std::cout << "|| *  *  ||" << std::endl;
        std::cout << "==========" << std::endl << std::endl;
        break;
    case 6:
        std::cout << "==========" << std::endl;
        std::cout << "|| *  *  ||" << std::endl;
        std::cout << "|| *  *  ||" << std::endl;
        std::cout << "|| *  *  ||" << std::endl;
        std::cout << "==========" << std::endl << std::endl;
        break;
    default:
        std::cout << "Значение указано не правильно!";

    }
    return number;
}

