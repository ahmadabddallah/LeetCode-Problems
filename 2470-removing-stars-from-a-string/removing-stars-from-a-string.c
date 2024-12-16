char* removeStars(char* s) {
    int write = 0; // Pointer for writing the resulting string
    for (int read = 0; s[read] != '\0'; ++read) {
        if (s[read] == '*') {
            // Remove the closest non-star character
            if (write > 0) --write;
        } else {
            // Write the character at the current position
            s[write++] = s[read];
        }
    }
    // Null-terminate the resulting string
    s[write] = '\0';
    return s;
}