def add_matrices(matrix1, matrix2):
    if len(matrix1) != len(matrix2) or len(matrix1[0]) != len(matrix2[0]):
        return
    som = []
    for i in range(len(matrix1)):
        som.append([])
        for j in range(len(matrix1[i])):
            som[i].append(matrix1[i][j] + matrix2[i][j])
    return som

