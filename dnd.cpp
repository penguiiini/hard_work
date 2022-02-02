#include <vector>
#include <stack>

std::vector<std::vector<int>> matrix; // граф
std::vector<bool> used; // уже помеченные (пройденные) вершины
int vertex; // начальная вершина

void dfs()
{
    std::stack<int> stack;
    stack.push(vertex);

    while (!stack.empty())
    {
        int top = stack.top();
        stack.pop();

        for (int & i : matrix[top])
        {
            if (used[i])
            {
                stack.push(i);
                used[i] = true;
            }
        }
    }
}