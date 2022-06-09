#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> check_neighbors(int graph[5][5], int x, int y, vector<vector<int>> nodes_to_visit){

  
    if (x < 4 && graph[y][x + 1] == 1){
        vector<int> new_vector = {x + 1, y};
        nodes_to_visit.push_back(new_vector);
    }
 
    if (x > 0 && graph[x][x - 1] == 1) {
        vector<int> new_vector = {x - 1, y};
        nodes_to_visit.push_back(new_vector);
    }

    if (y < 4 && graph[y + 1][x] == 1){
        vector<int> new_vector = {x, y + 1};
        nodes_to_visit.push_back(new_vector);
    }
    
    if (y > 0 && graph[y - 1][x] == 1){
        vector<int> new_vector = {x, y - 1};
        nodes_to_visit.push_back(new_vector);
    }

    return nodes_to_visit;

}


int get_river_size(int graph[5][5], bool visited[5][5], int x, int y){

    vector<vector<int>> nodes_to_visit;
    vector<int> new_vector = {x, y};

    nodes_to_visit.push_back(new_vector);

    int current_river = 0;
    
    while (nodes_to_visit.empty() != true) {

        int current_x = nodes_to_visit.at(0).at(0);
        int current_y = nodes_to_visit.at(0).at(1);

        nodes_to_visit.erase(nodes_to_visit.begin());

        if (visited[current_y][current_x] == true){
            continue;
        }

        if (graph[current_y][current_x] == 1){
            current_river++;

            nodes_to_visit = check_neighbors(graph, current_x, current_y, nodes_to_visit);
            // cout << "next node to visit: " << nodes_to_visit.at(0).at(1) << endl;
        }

        visited[current_y][current_x] = 1;

    }


    return current_river;

}


int main() {

    int graph[5][5]{
        {1, 0, 0, 1, 0},
        {1, 0, 1, 0, 0},
        {0, 0, 1, 0, 1},
        {1, 0, 1, 0, 1},
        {1, 0, 1, 1, 0}
    };

    vector<int> rivers;

    bool visited[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };


    for (int y = 0; y < (sizeof(graph) / 5) / 4; y++){
        for (int x = 0; x < sizeof(graph[0]) / 4; x++) {

            if (!visited[y][x] && graph[y][x] == 1) {
                int river = get_river_size(graph, visited, x, y);

                if (river != 0){
                    rivers.push_back(river);
                }

            } else {
                visited[y][x] = true;
            }
        }
    }

    for (auto i:rivers){
        cout << "River: " << i << endl;
    }

}


