    char *p = strchr(str, 'W');   // points to "World"
    char *q = strstr(str, "Wor"); // points to "World"
    if (q == NULL) printf("not found\n");