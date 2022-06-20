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
    /*
    std::cout << "������� 1\n\n";

    int int_arr[SIZE];
    int min, max;
    //��������� ������ ���������� ����������
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
    */

    //task 2

    /*
    std::cout << "������� 2\n\n";

    int int_arr2[SIZE];
    int min2, max2, value, summ=0;
    cout << "������� ����������� ������� ���������: ";
    cin >> min2;
    cout << "������� ������������ ������� ���������: ";
    cin >> max2;
    
    //��������� ������ ���������� ����������
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        int_arr2[i] = min2 + rand() % (max2 - min2);
        cout << int_arr2[i] << endl;
    }
    cout << "������� ��������. ����� ����������� ����� ��������� ������� ������ ���������� �������� ->";
    cin >> value;
    for (int i = 0; i < SIZE; i++)
    {
        if (int_arr2[i] < value)
            summ += int_arr2[i];
    }
    cout << summ << endl;
    */
    

    //task 3

    /*
    double month_profit[12];
    int min_diap, max_diap;
    int min_profit, max_profit;
    int min_month, max_month;
    for (int i = 0; i < 12; i++)
    {
        cout << "������� ������� �� " << i + 1 << " ����� ->";
        cin >> month_profit[i];
    }
    cout << "������� ����� ������, � �������� ���������� ��������->";
    cin >> min_diap;
    min_diap--;
    if (min_diap < 0 || min_diap > 11) {
        cout << "������� ������ �����" << endl;
    }
    cout << "������� ����� ������, ������� ������������� ��������->";
    cin >> max_diap;
    max_diap--;
    if (max_diap > 11 || max_diap < 0) {
        cout << "������� ������ �����" << endl;
    }
    min_profit = month_profit[min_diap];
    max_profit = month_profit[min_diap];
    for (int i = min_diap; i <= max_diap; i++) {
        if (min_profit > month_profit[i]) { min_profit = month_profit[i]; min_month = i + 1; }
        if (max_profit < month_profit[i]) { max_profit = month_profit[i]; max_month = i + 1; }
    }

    cout << "� ��������� � " << min_diap + 1 << " ������ �� " << max_diap + 1 << " �����: \n";
    cout << "����������� ������� ���� � " << min_month << " ����� � ��������� $" << min_profit << "." << endl;
    cout << "������������ ������� ���� � " << max_month << " ����� � ��������� $" << max_profit << "." << endl;
    */


    //task 4

    /*
    const int SIZE_N = 10;
    int array4[SIZE_N]{ 10,4,13,-5,-1000,4,-10,1000,-50,20 };
    int summ_negative=0; // ����� �������������
    int minimum_position, maximum_position;// ������� ������������ �������� ������� � �������������
    int product_between_minmax=1;//������������ ����� ����������� � ������������
    int even_product=1;// ������������ ������ ������� �������
    int first_negative_pos, last_negative_pos;// ������� ������� � ���������� �������������� ���������
    int summ_between_negative=0;// ����� ����� ������ ������������� � ��������� �������������

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
        cout << "� ������� ������ ���� ������������� �����!\n";
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
    
    cout << "1. ����� ������������� ��������� � �������: " << summ_negative << ".\n"
        << "2. ������������ ����� ����������� � ������������ ���������� �������: " << product_between_minmax << ".\n"
        << "3. ������������ ��������� � ������� ��������: " << even_product << ".\n"
        << "4. ����� ���������� ����� ������ � ��������� �������������� ����������: " << summ_between_negative << endl;*/
    
    // task 4
    // ����� �����

    /*
    char simbol;
    int ver_or_hor;
    int speed;
    cout << "������� ������, ������� ����� �������� �����->";
    cin >> simbol;
    cout << "�������������� ����� - 1, ������������ - 2 ->";
    cin >> ver_or_hor;
    cout << "�������� �������� ��������� �����, �� 1(����� �������) �� 3(����� ���������) ->";
    cin >> speed;
    line_draw(simbol, ver_or_hor, speed);
    */

    //task 5
    //  ���� ������
    
    int menu_choose;
    int computer_score;
    int user_score;
    bool move = NULL;
    

    cout << "���� ������!\n\n";
    cout << "����:\n";
    cout << "������ ������ ���������� - 1\n";
    cout << "����� - 2\n";
    cin >> menu_choose;
    
    if (menu_choose == 1) {
        cout << "������, ��� ����� ������ ������";
        for (int i = 0; i < 3; i++) {
            cout << ".";
            Sleep(1000);
        }
        cout << endl;
        srand(time(NULL));
        while (true) {
            cout << "��������� ������� �����: \n";
            Sleep(rand() % 500);
            computer_score = cubic_draw(1 + rand() % 5);
            cout << "������������ ������� �����: \n";
            Sleep(rand() % 800);
            user_score = cubic_draw(1 + rand() % 5);
            if (computer_score > user_score) {
                cout << "������ ��� �� �����������!\n";
                move = false;
                break;
            }else if (user_score > computer_score) {
                cout << "������ ��� �� ����!\n";
                move = true;
                break;
            }
            else {
                cout << "�������������!\n";
            }
        }
        computer_score = 0;
        user_score = 0;

        if (move == false) {
            for (int i = 0; i < 3; i++) {
                cout << "������ ���������� ����� " << i + 1 << "." << "��������� ������ ��������� ���������� �����: " << computer_score << endl;
                Sleep(1000);
                for (int j = 0; j < 2; j++) {
                    computer_score += cubic_draw(1 + rand() % 5);
                    Sleep(1500);
                }
                system("CLS");
            }
            cout << "��������� ������ ��������� ���������� �����: " << computer_score << endl;
            Sleep(3500);

            for (int i = 0; i < 3; i++) {
                cout << "������ ������������ ����� " << i + 1 << "." << "������������ ������ ��������� ���������� �����: " << user_score << endl;
                Sleep(1000);
                for (int j = 0; j < 2; j++) {
                   user_score += cubic_draw(1+rand() % 5);
                    Sleep(1500);
                }
                system("CLS");
            }
            cout << "������������ ������ ��������� ���������� �����: " << user_score << endl;

        }
        else if (move == true) {
            for (int i = 0; i < 3; i++) {
                cout << "������ ������������ ����� " << i + 1 << "." << "������������ ������ ��������� ���������� �����: " << user_score << endl;
                Sleep(1000);
                for (int j = 0; j < 2; j++) {
                    user_score += cubic_draw(1 + rand() % 5);
                    Sleep(1500);
                }
                system("CLS");
            }
            cout << "������������ ������ ��������� ���������� �����: " << user_score << endl;
            Sleep(3500);

            for (int i = 0; i < 3; i++) {
                cout << "������ ���������� ����� " << i + 1 << "." << "��������� ������ ��������� ���������� �����: " << computer_score << endl;
                Sleep(1000);
                for (int j = 0; j < 2; j++) {
                    computer_score += cubic_draw(1 + rand() % 5);
                    Sleep(1500);
                }
                system("CLS");
            }
            cout << "��������� ������ ��������� ���������� �����: " << computer_score << endl;
        }
        system("CLS");
        cout << "��������� ������ ��������� ���������� �����: " << computer_score << endl;
        cout << "������������ ������ ��������� ���������� �����: " << user_score << endl;
        Sleep(3000);

        //����� ����������

        if (computer_score > user_score) {
            char comp_win[] = "������ �� �����������!";
            cout << "\t\t\t";
            for (int i = 0; i < 22; i++) {
                cout << comp_win[i];
                Sleep(200);
            }
        }
        else if (user_score > computer_score) {
            char user_win[] = "������ �� ����!";
            cout << "\t\t\t";
            for (int i = 0; i < 15; i++) {
                cout << user_win[i];
                Sleep(200);
            }
        }
        else {
            cout << "�����!\n";
        }

    }
    else {
        cout << "����� ��������!\n";
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
        std::cout << "�������� ������� �� ���������!";

    }
    return number;
}

