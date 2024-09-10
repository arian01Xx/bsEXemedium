#include <iostream>
#include <vector>

using namespace std;

class SolutionThirty{
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target){
		int row=matrix.size(); 
		int col=matrix[0].size();
		int rowIndex=0; //inicializa en la primera fila
		int colIndex=col-1; //inicializa en la ultima columna
		while(rowIndex<row && colIndex>=0){
			int ele=matrix[rowIndex][colIndex];
			if(ele==target) return 1;
			if(ele<target) rowIndex++;
			else colIndex--;
		}
		return 0;
	}
};

int main(){
	return 0;
}