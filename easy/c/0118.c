

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnSize = 0;
    *returnColumnSizes = NULL;
    if(numRows == 0)return NULL;
    int** res = calloc(numRows, sizeof(int*));
    *returnColumnSizes = calloc(numRows, sizeof(int));
    for(int i = 0 ; i < numRows; i++){
        res[i] = calloc((i+1), sizeof(int));
        res[i][0] = 1;
        res[i][i] = 1;
        (*returnColumnSizes)[i] = i+1;
    }
    *returnSize = numRows;
    for(int row = 1 ; row < numRows; row++){
        for(int col = 1; col < row; col++){
            res[row][col] = res[row-1][col-1] + res[row-1][col];
        }
    }
    return res;
}