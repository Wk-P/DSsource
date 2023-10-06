// BFS

#include <tuple>
#include <queue>
#include <iostream>

using namespace std;

void BFS(int** d2_arr, int arr_row, int arr_col) {
	int counter = 0;

	queue<tuple<int, int, int>> q;
	int** mark_map = new int* [arr_row];
	for (int i = 0; i < arr_row; i++) {
		mark_map[i] = new int[arr_col];
		for (int j = 0; j < arr_col; j++) {
			mark_map[i][j] = 0;
		}
	}

	// from left top to right bottom
	q.push(make_tuple(0, 0, d2_arr[0][0]));

	while (!q.empty()) {
		counter++;
		// get first item
		tuple<int, int, int> point = q.front();


		//cout << "Current point : (" << get<0>(point) << ", " << get<1>(point) << ", " << get<2>(point) << ")" << endl;

		// right
		if (get<0>(point) < arr_row - 1) {
			tuple<int, int, int> right_next_point = tuple<int, int, int>(get<0>(point) + 1, get<1>(point), d2_arr[get<0>(point) + 1][get<1>(point)]);
			if (get<2>(right_next_point) == 1) {
				cout << "Find target porint at : ги" << get<0>(right_next_point) << ", " << get<1>(right_next_point) << ")" << endl;
				cout << "Find times : " << counter << endl;
				return;
			}
			if (mark_map[get<0>(right_next_point)][get<1>(right_next_point)] != 1) {
				q.push(right_next_point);
				//cout << "Push point : (" << get<0>(right_next_point) << ", " << get<1>(right_next_point) << ", " << get<2>(right_next_point) << ")" << endl;
			}
		}

		// down
		if (get<1>(point) < arr_col - 1) {
			tuple<int, int, int> down_next_point = tuple<int, int, int>(get<0>(point), get<1>(point) + 1, d2_arr[get<0>(point)][get<1>(point) + 1]);
			if (get<2>(down_next_point) == 1) {
				cout << "Find target porint at : ги" << get<0>(down_next_point) << ", " << get<1>(down_next_point) << ")" << endl;
				cout << "Find times : " << counter << endl;
				return;
			}
			if (mark_map[get<0>(down_next_point)][get<1>(down_next_point)] != 1) {
				q.push(down_next_point);
				//cout << "Push point : (" << get<0>(down_next_point) << ", " << get<1>(down_next_point) << ", " << get<2>(down_next_point) << ")" << endl;
			}
		}

		mark_map[get<0>(point)][get<1>(point)] = 1;

		q.pop();
		//cout << "Pop point : (" << get<0>(point) << ", " << get<1>(point) << ", " << get<2>(point) << ")" << endl;
	}
}