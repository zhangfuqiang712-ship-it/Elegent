#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int correct;
    
    do {
        printf("请输入: ");
        fgets(input, sizeof(input), stdin);
        
        // 移除fgets读取的换行符
        input[strcspn(input, "\n")] = '\0';
        
        // 检查输入是否为"Hello World"
        correct = strcmp(input, "Hello World") == 0;
        
        if (correct) {
            printf("谢谢配合\n");
        } else {
            printf("输入错误，请重新输入\n");
        }
        
    } while (!correct);
    
    return 0;
}