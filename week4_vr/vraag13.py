def multiply_matrices(matrix1, matrix2):
    if len(matrix1[0]) != len(matrix2):
        return
    product = []
    for i in range(len(matrix1)):
        product.append([])
        for j in range(len(matrix2[0])):
            product_ij = 0
            for k in range(len(matrix1[0])):
                product_ij += matrix1[i][k] * matrix2[k][j]
            product[i].append(product_ij)
    return product

