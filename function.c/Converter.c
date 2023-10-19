#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void BinToDec(long bin) {
    int dec = 0, exp = 0;
    while (bin > 0) {
        int dig = bin % 10;
        dec += dig * pow(2, exp);
        bin /= 10;
        exp++;
    }
    printf("\nDecimal Equivalent:%d", dec);
}

void OctToDec(long long oct) {
    int dec = 0, exp = 0;
    while (oct > 0) {
        int dig = oct % 10;
        dec += dig * pow(8, exp);
        oct /= 10;
        exp++;
    }
    printf("\nDecimal Equivalent:%d", dec);
}

int char(char ch) {
    if (isdigit(ch)) {
        return ch - '0';
    } else {
        return toupper(ch) - 'A' + 10;
    }
}

void ToDec(const char *) {
    int dec = 0;
    int l = strlen();
    for (int i = l - 1; i >= 0; i--) {
        int dig = char([i]);
        dec += dig * pow(16, l - i - 1);
    }
    printf("\nDecimal Equivalent:%d", dec);
}

void DecToBin(long dec) {
    if (dec == 0) {
        printf("\nBinary Equivalent:0");
        return;
    }
    int bin[32], i = 0;
    while (dec > 0) {
        bin[i] = dec % 2;
        dec /= 2;
        i++;
    }
    printf("\nBinary Equivalent:");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}

void DecToOct(long dec) {
    if (dec == 0) {
        printf("\nOctal Equivalent:0");
        return;
    }
    int oct[32], i = 0;
    while (dec > 0) {
        oct[i] = dec % 8;
        dec /= 8;
        i++;
    }
    printf("\nOctal Equivalent:");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", oct[j]);
    }
}
void decimalToadecimal(long decimal) {
    char adecimal[32]; // To store the adecimal digits
    int index = 0;

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            adecimal[index] = remainder + '0';
        } else {
            adecimal[index] = remainder - 10 + 'A';
        }
        decimal /= 16;
        index++;
    }

    printf("adecimal equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", adecimal[i]);
    }
}
bool isDecimal(const char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] < '0' || input[i] > '9') {
            return false;
        }
    }
    return true;
}

bool isValidBinary(const char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != '0' && input[i] != '1') {
            return false;
        }
    }
    return true;
}

bool isValidOctal(const char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] < '0' || input[i] > '7') {
            return false;
        }
    }
    return true;
}

bool isValidadecimal(const char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (!((input[i] >= '0' && input[i] <= '9') ||
              (input[i] >= 'A' && input[i] <= 'F') ||
              (input[i] >= 'a' && input[i] <= 'f'))) {
            return false;
        }
    }
    return true;
}

long customStrToLong(const char *input) {
    long result = 0;
    int length = strlen(input);
    int multiplier = 1;

    for (int i = length - 1; i >= 0; i--) {
        result += (input[i] - '0') * multiplier;
        multiplier *= 10;
    }

    return result;
}

int main() {
    char input[100];
    int ch;
    long dec;

    while (1) {
        printf("\nEnter the Number:");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';
        
        if (isDecimal(input)) {
            dec = customStrToLong(input); // Convert string to long integer
            printf("\nValid Decimal Number\n");
            printf("\nEnter Your Choice:");
            scanf("%d", &ch);
        } else if (isValidBinary(input)) {
            dec = customStrToLong(input); // Convert binary string to long integer
            printf("Valid Binary Number\n");
            printf("\nEnter Your Choice:");
            scanf("%d", &ch);
        } else if (isValidOctal(input)) {
            dec = customStrToLong(input); // Convert octal string to long integer
            printf("Valid Octal Number\n");
            printf("\nEnter Your Choice:");
            scanf("%d", &ch);
        } else if (isValidadecimal(input)) {
            printf("Valid adecimal Number\n");
            printf("\nEnter Your Choice:");
            scanf("%d", &ch);
        } else {
            printf("Invalid Number\n");
        }

        switch (ch) {
            case 1:
                DecToBin(dec);
                break;
            case 2:
                decimalToadecimal(dec);
                break;
            case 3:
                DecToOct(dec);
                break;
            case 4:
                DecToBin(dec);
                decimalToadecimal(dec);
                DecToOct(dec);
                break;
            default:
                printf("\nInvalid Choice\n");
        }
    }

    return 0;
}



// long long bin;
    // printf("\nEnter a  Binary Number:");
    // scanf("%lld",&bin);
    // BinToDec(bin);
 
    // long long oct;
    // printf("\nEnter a  Octal Number:");
    // scanf("%lld",&oct);
    // OctToDec(oct);
    
    // int dec;
    // printf("\nEnter a Decimal Number:");
    // scanf("%d",&dec);
    // DecToBin(dec);


// char [32];
//     printf("Enter a adecimal number: ");
//     scanf("%s", );
//     ToDec();

    // int dec;
    // printf("\nEnter a Decimal Number:");
    // scanf("%d",&dec);
    // DecToOct(dec);

    // int dec;
    // printf("\nEnter a Decimal Number:");
    // scanf("%d",&dec);
    // decimalToHexadecimal(dec);