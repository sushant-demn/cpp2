 int i, j, r;
    float sg;
    char na[30];
    for (i = 1; i < n; i++)
    {
        strcpy(na, s[i].name);
        r = s[i].roll;
        sg = s[i].sgpa;
        j = i - 1;
        while (j >= 0 && strcmp(s[j].name, na) > 0)
        {
            strcpy(s[j + 1].name, s[j].name);
            s[j + 1].roll = s[j].roll;
            s[j + 1].sgpa = s[j].sgpa;
            j--;
        }
        strcpy(s[j + 1].name, na);
        s[j + 1].roll = r;
        s[j + 1].sgpa = sg;
    }