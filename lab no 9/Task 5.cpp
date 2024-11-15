#include <stdio.h>
#include <string.h>

int main() {
    char text[256], key[256], cipher[256];
    int len_text, len_key, k = 0;

    printf("Enter the Plaintext: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    printf("Enter key: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    len_text = strlen(text);
    len_key = strlen(key);

    for (int i=0; i<len_text; i++) {
        char txt_char = text[i];

        
    if ((txt_char >= 'A' && txt_char <= 'Z') || (txt_char >= 'a' && txt_char <= 'z')) {
        if (txt_char >= 'a' && txt_char <= 'z') {
                txt_char = txt_char - 'a' + 'A';    }
          char key_char = key[k % len_key];
            if (key_char >= 'a' && key_char <= 'z') {
                key_char = key_char - 'a' + 'A';
        }
            int txt_val = txt_char - 'A' + 1;
            int key_val = key_char - 'A' + 1;
            int cipher_val = (txt_val + key_val - 1) % 26 + 1;
            cipher[i] = 'A' + cipher_val - 1;
            k++;
        } else {
            cipher[i] = txt_char;
        }
    }
    cipher[len_text] = '\0';
    printf("Ciphertext: %s\n", cipher);

    return 0;
}
