#include <bits/stdc++.h>
#define INFINITY 999;
using namespace std;
const int n = 5;
const int m = 5;
struct cg
{
    int dist;
    int c1;
    int c2;
    cg *next;
} *top = NULL, *newnode, *ptr;
void push(int a, int b, int c)
{
    cout << "pushing function\n";
    newnode = new cg;
    newnode->dist = a;
    newnode->c1 = b;
    newnode->c2 = c;
    newnode->next = top;
    top = newnode;
}
void display(int graph[n][m])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
}
cg *min(int x)
{
    cg *pr_ptr;
    ptr = top;
    while (ptr != NULL)
    {
        pr_ptr = ptr;
        if (ptr->dist < x)
        {
            break;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    pr_ptr->next = ptr->next;
    return ptr;
}
int return_min(int graph[m][n], int j, bool visit[])
{
    int x = graph[j][0];
    int y = 0;
    for (int i = 0; i < 5; i++)
    {
        if (graph[j][i] < x && !visit[i])
        {
            x = graph[j][i];
            y = i;
        }
    }
    return y;
}
void span(int graph[m][n])
{
    int graph2[5][5];
    bool visit[5] = {true, false, false, false, false};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph2[i][j] = 0;
        }
    }
    int i = 0;
    int c2 = 4;
    int c1;
    while (true)
    {
        cout << "WHILE\n";
        if (visit[c2])
        {
            cout << "BREAk " << c2;
            break;
        }
        c1 = i;
        int x = return_min(graph, i, visit);
        cout << "mini " << i << x << graph[i][x] << "\n";
        c2 = x;
        ptr = min(graph[i][x]);
        if (ptr && !visit[ptr->c2])
        {
            cout << ptr->dist << " ptr \n";
            c1 = ptr->c1;
            c2 = ptr->c2;
        }
        else
        {
            cout << "pushing\n";
            for (int j = 0; j < 5; i++)
            {
                cout << "pushing2\n";
                push(graph[i][j], i, j);
            }
        }
        graph2[c1][c2] = graph[c1][c2];
        graph2[c2][c1] = graph[c1][c2];
        graph[c1][c2] = INFINITY;
        graph[c2][c1] = INFINITY;
        visit[c2] = true;
        i = c2;
    }
    display(graph2);
}
int main()
{
    int graph[5][5];
    string city[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter No. " << i + 1;
        cin >> city[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j > i)
            {
                cout << "What is distance between " << city[i] << " and " << city[j];
                cin >> graph[i][j];
            }
            else if (i == j)
            {
                graph[i][j] = 0;
            }
            else
            {
                graph[i][j] = graph[j][i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == 0)
            {
                graph[i][j] = INFINITY;
            }
        }
    }
    span(graph);
    return 0;
}