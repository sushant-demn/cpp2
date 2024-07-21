void name_sort(struct student s[], int n) // insertions sort based on names of the student
{

    for (int i = 1; i < n; i++)
    {
        char x[30];

        strcpy(x, s[i].name);
        int y = s[i].roll;
        float z = s[i].sgpa;
        int j = i - 1;
        while ((j >= 0) and (strcmp(s[j].name, x) > 0))
        {
            strcpy(s[j + 1].name, s[j].name);
            s[j + 1].roll = s[j].roll;
            s[j + 1].sgpa = s[j].sgpa;
            j--;
        }
        strcpy(s[j + 1].name, x);
        s[j + 1].roll = y;
        s[j + 1].sgpa = z;
    }
    display(s, n);
}