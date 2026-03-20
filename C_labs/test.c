#include <stdio.h>

int main() {
    char str[81];  // 80 символов + 1 для нуль-символа
    
    printf("Введите строку (до 80 символов): ");
    
    // Читаем строку (без пробелов, до пробела)
    scanf("%80s", str);
    
    // Заменяем 'a' и 'b' на заглавные
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = 'A';
        }
        else if (str[i] == 'b') {
            str[i] = 'B';
        }
    }
    
    printf("Результат: %s\n", str);
    
    return 0;
}